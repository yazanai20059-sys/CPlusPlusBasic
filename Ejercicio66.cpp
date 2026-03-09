#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>

using namespace std;

const int AMPLE = 800;
const int ALT = 600;
const int FPS = 60;

sf::Color BLANC(255, 255, 255);
sf::Color NEGRE(0, 0, 0);
sf::Color VERMELL(255, 0, 0);
sf::Color VERD(0, 255, 0);
sf::Color BLAU(0, 0, 255);
sf::Color GROC(255, 255, 0);

class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float radius, sf::Color color) {
        shape.setRadius(radius);
        shape.setFillColor(color);
        shape.setPosition(400.f, 300.f); // Posició inicial
        velocity = sf::Vector2f(0.3f, -0.3f); // Velocitat inicial
    }

    void move() {
        shape.move(velocity);
    }

    void bounce(const sf::FloatRect& bounds) {
        if (shape.getPosition().x <= bounds.left || shape.getPosition().x + shape.getRadius() * 2 >= bounds.left + bounds.width) {
            velocity.x = -velocity.x;
        }
        if (shape.getPosition().y <= bounds.top) {
            velocity.y = -velocity.y;
        }
        if (shape.getPosition().y + shape.getRadius() * 2 >= bounds.top + bounds.height) {
            velocity.y = -velocity.y;
        }
    }

    void reset() {
        shape.setPosition(400.f, 300.f); // Reseteja la posició
        velocity = sf::Vector2f(0.3f, -0.3f); // Reseteja la velocitat
    }

    sf::FloatRect getBounds() const {
        return shape.getGlobalBounds();
    }
};

class Paddle {
public:
    sf::RectangleShape shape;

    Paddle(float width, float height, sf::Color color) {
        shape.setSize(sf::Vector2f(width, height));
        shape.setFillColor(color);
        shape.setPosition(350.f, 550.f); // Posició inicial
    }

    void move(float deltaX) {
        shape.move(deltaX, 0.f);
    }

    sf::FloatRect getBounds() {
        return shape.getGlobalBounds();
    }
};

class Block {
public:
    sf::RectangleShape shape;
    bool isDestroyed;

    Block(float x, float y, sf::Color color) {
        shape.setSize(sf::Vector2f(75.f, 30.f));
        shape.setFillColor(color);
        shape.setPosition(x, y);
        isDestroyed = false;
    }

    void destroy() {
        isDestroyed = true;
        shape.setFillColor(sf::Color::Transparent);
    }

    sf::FloatRect getBounds() {
        return shape.getGlobalBounds();
    }
};

void createBlocks(std::vector<Block>& blocks) {
    sf::Color colors[] = {VERMELL, GROC, VERD, BLAU, VERMELL, GROC};

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 10; ++j) {
            float x = j * 80.f + 25.f;
            float y = i * 35.f + 50.f;
            blocks.push_back(Block(x, y, colors[i]));
        }
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(AMPLE, ALT), "Arkanoid");
    window.setFramerateLimit(FPS);

    Ball ball(10.f, VERMELL);
    Paddle paddle(100.f, 20.f, VERD);
    std::vector<Block> blocks;
    createBlocks(blocks);

    bool gameStarted = false;
    bool gameOver = false;
    int score = 0;
    int lives = 3;
    sf::Font font;
    font.loadFromFile("arial.ttf");  // Assegura't de tenir una font
    sf::Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(24);
    scoreText.setFillColor(BLANC);

    sf::Text livesText;
    livesText.setFont(font);
    livesText.setCharacterSize(24);
    livesText.setFillColor(BLANC);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if (gameStarted && !gameOver) {
            ball.move();
            ball.bounce(sf::FloatRect(0.f, 0.f, window.getSize().x, window.getSize().y));

            if (ball.getBounds().intersects(paddle.getBounds()) && ball.velocity.y > 0) {
                ball.velocity.y = -ball.velocity.y;
                ball.velocity.x += 0.1f;  // Afegir una mica de moviment aleatori a la pilota
            }

            for (auto& block : blocks) {
                if (!block.isDestroyed && ball.getBounds().intersects(block.getBounds())) {
                    block.destroy();
                    ball.velocity.y = -ball.velocity.y;
                    score += 10;
                }
            }

            if (ball.shape.getPosition().y + ball.shape.getRadius() * 2 >= window.getSize().y) {
                lives--;
                if (lives <= 0) {
                    gameOver = true;
                } else {
                    ball.reset();
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && paddle.shape.getPosition().x > 0) {
            paddle.move(-0.5f);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && paddle.shape.getPosition().x + paddle.shape.getSize().x < window.getSize().x) {
            paddle.move(0.5f);
        }

        if (!gameStarted && sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            gameStarted = true;
        }

        window.clear(NEGRE);

        for (auto& block : blocks) {
            if (!block.isDestroyed) {
                window.draw(block.shape);
            }
        }

        window.draw(paddle.shape);
        window.draw(ball.shape);

        scoreText.setString("Punts: " + std::to_string(score));
        window.draw(scoreText);

        livesText.setString("Vides: " + std::to_string(lives));
        window.draw(livesText);

        if (gameOver) {
            sf::Text gameOverText;
            gameOverText.setFont(font);
            gameOverText.setCharacterSize(50);
            gameOverText.setFillColor(BLANC);
            gameOverText.setString("Game Over!");
            gameOverText.setPosition(AMPLE / 2 - 150.f, ALT / 2);
            window.draw(gameOverText);
        }

        window.display();
    }

    return 0;
}
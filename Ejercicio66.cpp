#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int PADDLE_WIDTH = 100;
const int PADDLE_HEIGHT = 20;
const int BALL_RADIUS = 10;
const float BALL_SPEED = 5.f;

// Classe que representa la pilota
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float radius) {
        shape.setRadius(radius);
        shape.setFillColor(sf::Color::Red);
        shape.setPosition(SCREEN_WIDTH / 2 - radius, SCREEN_HEIGHT - PADDLE_HEIGHT - radius - 10);
        velocity = sf::Vector2f(BALL_SPEED, -BALL_SPEED);
    }

    void update() {
        shape.move(velocity);

        // Rebotes contra les parets
        if (shape.getPosition().x <= 0 || shape.getPosition().x + shape.getRadius() * 2 >= SCREEN_WIDTH)
            velocity.x = -velocity.x;

        if (shape.getPosition().y <= 0)
            velocity.y = -velocity.y;
    }

    void reset() {
        shape.setPosition(SCREEN_WIDTH / 2 - BALL_RADIUS, SCREEN_HEIGHT - PADDLE_HEIGHT - BALL_RADIUS - 10);
        velocity = sf::Vector2f(BALL_SPEED, -BALL_SPEED);
    }
};

// Classe que representa la pala
class Paddle {
public:
    sf::RectangleShape shape;

    Paddle(float width, float height) {
        shape.setSize(sf::Vector2f(width, height));
        shape.setFillColor(sf::Color::Blue);
        shape.setPosition(SCREEN_WIDTH / 2 - width / 2, SCREEN_HEIGHT - height - 10);
    }

    void moveLeft() {
        if (shape.getPosition().x > 0)
            shape.move(-BALL_SPEED, 0);
    }

    void moveRight() {
        if (shape.getPosition().x + shape.getSize().x < SCREEN_WIDTH)
            shape.move(BALL_SPEED, 0);
    }
};

int main() {
    // Crear la finestra del joc
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Arkanoid", sf::Style::Close);
    window.setFramerateLimit(60);

    Ball ball(BALL_RADIUS);
    Paddle paddle(PADDLE_WIDTH, PADDLE_HEIGHT);

    bool gameStarted = false;

    // Bucle principal del joc
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space) {
                gameStarted = true; // Començar el joc quan es prem la barra d'espai
            }
        }

        if (gameStarted) {
            // Mou la pala
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                paddle.moveLeft();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                paddle.moveRight();
            }

            // Actualitzar la pilota
            ball.update();

            // Comprovar si la pilota toca la pala
            if (ball.shape.getGlobalBounds().intersects(paddle.shape.getGlobalBounds())) {
                ball.velocity.y = -ball.velocity.y;
            }

            // Comprovar si la pilota ha caigut (game over)
            if (ball.shape.getPosition().y + ball.shape.getRadius() * 2 >= SCREEN_HEIGHT) {
                ball.reset();
                gameStarted = false;
            }
        }

        // Netejar la finestra
        window.clear(sf::Color::White);

        // Dibuixar la pala i la pilota
        window.draw(paddle.shape);
        window.draw(ball.shape);

        // Mostrar tot a la finestra
        window.display();
    }

    return 0;
}
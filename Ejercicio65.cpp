#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Animal {
public:
    string especie;
    int edat;

    Animal(string e, int ed) : especie(e), edat(ed) {}

    virtual void xerrar() = 0;
    virtual void mourem() = 0;
    virtual void quisoc() {
        cout << "Sóc un animal de l'espècie " << especie << " i tinc " << edat << " anys." << endl;
    }
};

class Cavall : public Animal {
public:
    Cavall(int edat) : Animal("Cavall", edat) {}

    void xerrar() override {
        cout << "El cavall renilla." << endl;
    }

    void mourem() override {
        cout << "El cavall galopa." << endl;
    }
};

class Huma : public Animal {
public:
    string nom;

    Huma(int edat, string n) : Animal("Humà", edat), nom(n) {}

    void xerrar() override {
        cout << nom << " diu: Hola!" << endl;
    }

    void mourem() override {
        cout << nom << " camina." << endl;
    }
};

class Centaure : public Cavall, public Huma {
public:
    Centaure(int edat, string nom) : Cavall(edat), Huma(edat, nom) {}

    void xerrar() override {
        cout << "El centaure diu: Hola, sóc mig humà, mig cavall!" << endl;
    }

    void mourem() override {
        cout << "El centaure corre i camina." << endl;
    }
};

int main() {
    vector<Animal*> animals;

    animals.push_back(new Cavall(5));
    animals.push_back(new Huma(30, "Joan"));

    for (Animal* animal : animals) {
        animal->xerrar();
        animal->mourem();
        animal->quisoc();
    }

    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
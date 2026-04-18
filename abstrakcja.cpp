#include <iostream>
using namespace std;

// Klasa abstrakcyjna
class Samochod {
public:
    virtual void przyspiesz() = 0;
    virtual void hamuj() = 0;
};

// Klasa dziedzicząca
class Auto : public Samochod {
public:
    void przyspiesz() override {
        cout << "Samochod przyspiesza" << endl;
    }

    void hamuj() override {
        cout << "Samochod hamuje" << endl;
    }
};

int main() {
    Samochod* s = new Auto();

    s->przyspiesz();
    s->hamuj();

    delete s;
    return 0;
}

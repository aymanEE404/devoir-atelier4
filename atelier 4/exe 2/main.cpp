
#include <iostream>
#include <string>
using namespace std;


class Animal {
private:
    string nom;
    int age;

public:

    void set_value( string n, int a) {
        nom = n;
        age = a;
    }


    string get_nom()  {
        return nom;
    }

    int get_age() {
        return age;
    }
};

class Zebra : public Animal {
public:

    void display_info()  {
        cout << "Nom: " << get_nom() << endl;
        cout << "Âge: " << get_age() << " ans" << endl;
        cout << " Origine : Savane africaine." << endl;
    }
};


class Dolphin : public Animal {
public:

    void display_info()  {
        cout << "Nom: " << get_nom() << endl;
        cout << "Âge: " << get_age() << " ans" << endl;
        cout << "Origine : Océans ." << endl;
    }
};

int main() {

    Zebra zebra;
    Dolphin dolphin;


    zebra.set_value("aziz", 55);
    dolphin.set_value("jniko", 2);


    cout << "Informations sur aziz:" << endl;
    zebra.display_info();
    cout << endl;

    cout << "Informations sur jniko:" << endl;
    dolphin.display_info();
    cout << endl;

    return 0;
}


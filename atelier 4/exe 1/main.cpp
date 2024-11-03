#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0, double i = 0)  {
    real=r, imag=i;
    }


    void display()  {
        cout << real << (imag >= 0 ? " + " : " - ") << imag << "i";
    }


    Complex operator+(const Complex& other)  {
        return Complex(real + other.real, imag + other.imag);
    }


    Complex operator-(const Complex& other)  {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other)  {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }


    Complex operator/(const Complex& other)  {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }


    bool operator==(const Complex& other)  {
        return real == other.real && imag == other.imag;
    }
};

int main() {
    double real1, imag1, real2, imag2;
    int choice;

    cout << "Entrez la partie réelle du premier nombre complexe: ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe: ";
    cin >> imag1;
    cout << "Entrez la partie réelle du deuxième nombre complexe: ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe: ";
    cin >> imag2;

    Complex z1(real1, imag1), z2(real2, imag2), result;


    cout << "\nChoisissez une opération:\n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Egalité\n";
    cout << "Votre choix: ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = z1 + z2;
            cout << "\nRésultat de l'addition: ";
            result.display();
            break;
        case 2:
            result = z1 - z2;
            cout << "\nRésultat de la soustraction: ";
            result.display();
            break;
        case 3:
            result = z1 * z2;
            cout << "\nRésultat de la multiplication: ";
            result.display();
            break;
        case 4:
            if (z2 == Complex(0, 0)) {
                cout << "\nErreur: division par zéro!";
            } else {
                result = z1 / z2;
                cout << "\nRésultat de la division: ";
                result.display();
            }
            break;
        case 5:
            cout << "\nLes nombres complexes sont ";
            cout << (z1 == z2 ? "égaux." : "différents.");
            break;
        default:
            cout << "\nChoix invalide.";
    }

    cout << endl;
    return 0;
}

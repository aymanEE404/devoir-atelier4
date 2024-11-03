
#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x, y, z;

public:


    vecteur3d(float xx = 0, float yy = 0, float zz = 0)  {
          x=xx,  y=yy,  z=zz;
    }


    void afficher()  {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    vecteur3d somme( vecteur3d& v) {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }


    float produitScalaire( vecteur3d& v)  {
        return x * v.x + y * v.y + z * v.z;
    }


    bool coincide( vecteur3d& v)  {
        return (x == v.x && y == v.y && z == v.z);
    }

    float norme()  {
        return sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme (par référence)
    void normax( vecteur3d& v, vecteur3d& result)  {
        if (this->norme() >= v.norme()) {
            result = *this;
        } else {
            result = v;
        }
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme (par valeur)
    vecteur3d normax( vecteur3d& v)  {
        return (this->norme() >= v.norme()) ? *this : v;
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme (par adresse)
    void normax( vecteur3d& v, vecteur3d* result)  {
        if (this->norme() >= v.norme()) {
            *result = *this;
        } else {
            *result = v;
        }
    }
};

int main() {
    vecteur3d v1(4, 5, 6);
    vecteur3d v2(1, 2, 3);
    vecteur3d result;


    cout << "Vecteur v1: ";
    v1.afficher();
    cout << "Vecteur v2: ";
    v2.afficher();


    vecteur3d ob1 = v1.somme(v2);
    cout << "Somme de v1 et v2: ";
    ob1.afficher();


    cout << "Produit scalaire de v1 et v2: " << v1.produitScalaire(v2) << endl;


    cout << "v1 et v2 coïncident-ils? " << (v1.coincide(v2) ? "Oui" : "Non") << endl;


    cout << "Norme de v1: " << v1.norme() << endl;
    cout << "Norme de v2: " << v2.norme() << endl;



    v1.normax(v2, result);
    cout << "Vecteur avec la plus grande norme (par référence): ";
    result.afficher();


    v1.normax(v2, &result);
    cout << "Vecteur avec la plus grande norme (par adresse): ";
    result.afficher();

    return 0;
}

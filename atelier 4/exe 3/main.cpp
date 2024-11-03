#include <iostream>
#include <string>

using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string dateNaissance;

public:

    Personne(string n, string p, string d)
         {
             nom=n, prenom=p, dateNaissance=d ;

         }


     void Afficher()  {
        cout << "Nom: " << nom << ", Prénom: " << prenom
             << ", Date de naissance: " << dateNaissance << endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:

    Employe(string n, string p, string d, double s): Personne(n, p, d)

        {
        salaire=s ;
        }


    void Afficher()  {
        Personne::Afficher();
        cout << "Salaire: " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:

    Chef(string n, string p, string d, double s, string serv)  : Employe(n, p, d, s)

        {
             service=serv;
        }

    void Afficher()  {
        Employe::Afficher();
        cout << "Service: " << service << endl;
    }
};


class Directeur : public Chef {
private:
    string societe;

public:

    Directeur(string n, string p, string d, double s, string serv, string soc): Chef(n, p, d, s, serv)

        {
            societe=soc ;
        }


    void Afficher()  {
        Chef::Afficher();
        cout << "Société: " << societe << endl;
    }
};

int main() {
    Directeur directeur("elghadbani", "aymane", "08/11/2003", 100000, "Info", "maroctelecom");
    directeur.Afficher();

    return 0;
}

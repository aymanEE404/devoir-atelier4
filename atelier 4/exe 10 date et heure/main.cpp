#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string dateHeure;
    cout << "Entrez la date et l'heure au format JJMMAAAAHHNN (par exemple, 010920091123): ";
    cin >> dateHeure;


    if (dateHeure.length() != 12) {
        cout << "Erreur : La chaîne doit contenir exactement 12 caractères." << endl;
        return 1;
    }


    vector<char> vec(dateHeure.begin(), dateHeure.end());


    string jour = string(1, vec[0])+ string(1, vec[1]);        // JJ
    string mois = string(1, vec[2]) + string(1, vec[3]);        // MM
    string annee = string(1, vec[4]) + string(1, vec[5]) +
                   string(1, vec[6]) + string(1, vec[7]);       // AAAA
    string heure = string(1, vec[8]) + string(1, vec[9]);       // HH
    string minute = string(1, vec[10]) + string(1, vec[11]);    // NN


    cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
    cout << "Heure : " << heure << "h" << minute << endl;

    return 0;
}

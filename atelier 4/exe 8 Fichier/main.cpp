#include <iostream>

using namespace std;

class Fichier {
private:
    char* P;
    int length;

public:

    Fichier()  {
         P=NULL, length=0;
        }

    // Destructor
    ~Fichier() {
        delete[] P;
        cout << "Memory freed" << endl;
    }


    void Creation(int size) {
        length = size;
        P = new char[length];
        cout << "Memory allocated of size " << length << endl;
    }


    void Remplit() {
        if (P != NULL) {
            for (int i = 0; i < length; ++i) {
                P[i] = 'A';
            }
            cout << "Memory filled with arbitrary data" << endl;
        } else {
            cout << "Memory not allocated" << endl;
        }
    }


    void Affiche() const {
        if (P != NULL) {
            for (int i = 0; i < length; ++i) {
                cout << P[i];
            }
            cout << endl;
        } else {
            cout << "Memory not allocated" << endl;
        }
    }
};

int main() {
    Fichier* fichier = new Fichier();
    fichier->Creation(10);
    fichier->Remplit();
    fichier->Affiche();
    delete fichier;
    return 0;
}

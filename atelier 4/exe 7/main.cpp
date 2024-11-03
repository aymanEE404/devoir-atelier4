#include <iostream>
#include <list>
using namespace std;

class Pile {
private:
    list<int> elements;

public:

    Pile() {}


    void push(int value) {
        elements.push_back(value);
    }


    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            cout << "Pile est vide. Impossible de dépiler un élément." << endl;
        }
    }

    void display()  {
        if (!elements.empty()) {
            cout << "Element au sommet: " << elements.back() << endl;
        } else {
            cout << "Pile est vide." << endl;
        }
    }

    bool isEmpty()  {
        return elements.empty();
    }
};

int main() {
    Pile p1, p2;


    cout << "Test de la pile p1:" << endl;
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.display();
    p1.pop();
    p1.display();
    p1.pop();
    p1.pop();
    p1.pop();
    // Testing stack p2
    cout << "\nTest de la pile p2:" << endl;
    p2.push(100);
    p2.push(200);
    p2.display();
    p2.pop();
    p2.display();
    p2.pop();
    p2.pop();

    return 0;
}









#include <iostream>
#include <string>
using namespace std;

int main() {
    int amigos; 
    cin >> amigos;

    int totalCapacidade = 0;
    string quarto;

    while (true) {
        cin >> quarto; 
        if (quarto == "FIM") { 
            break;
        }
        if (quarto == "Casal") {
            totalCapacidade += 2;
        } else if (quarto == "Triplo") {
            totalCapacidade += 3;
        } else if (quarto == "Quadruplo") {
            totalCapacidade += 4;
        } else if (quarto == "Familia") {
            totalCapacidade += 5;
        }
    }
    if (totalCapacidade >= amigos) {
        cout << "Pode reservar! Esses quartos cabem todos." << endl;
    } else {
        cout << "Procure outra pousada." << endl;
    }

    return 0;
}

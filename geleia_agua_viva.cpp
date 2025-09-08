#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;

    int tradicional = 0; // Contador para os pedidos do tradicional (código 10)
    int geleia = 0;       // Contador para os pedidos com geleia (código 11)

    for (int i = 0; i < N; i++) {
        int pedido;
        cin >> pedido;

        if (pedido == 10) {
            tradicional++;
        } else if (pedido == 11) {
            geleia++;
        } else {
            cout << "Código de pedido inválido: " << pedido << endl;
        }
    }

    if (tradicional > geleia) {
        cout << "O hamburguer mais pedido foi o tradicional" << endl;
    } else if (geleia > tradicional) {
        cout << "O hamburguer mais pedido foi o com geleia" << endl;
    } else {
        cout << "Houve empate entre os dois tipos de hamburguer" << endl;
    }

    return 0;
}

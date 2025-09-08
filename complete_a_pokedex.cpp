#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> pokedex;

    // Lê os Pokémon já capturados
    for (int i = 0; i < N; ++i) {
        int codigo;
        cin >> codigo;
        pokedex.push_back(codigo);
    }

    int M;
    cin >> M;

    // Verifica os Pokémon selvagens que foram encontrados
    for (int i = 0; i < M; ++i) {
        int codigo;
        cin >> codigo;

        bool repetido = false;
        for (int p : pokedex) {
            if (p == codigo) {
                repetido = true;
                break;
            }
        }

        if (

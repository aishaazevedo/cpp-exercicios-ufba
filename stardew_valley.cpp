#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;  

   vector<vector<int>> terreno(M, vector<int>(N));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> terreno[i][j];
        }
    }

    char tipo;
    int X;
    cin >> tipo >> X;  

    X--;

    int soma = 0;

    if (tipo == 'L') {
        for (int j = 0; j < N; ++j) {
            soma += terreno[X][j];
        }
    } else if (tipo == 'C') {
        for (int i = 0; i < M; ++i) {
            soma += terreno[i][X];
        }
    }
    cout << soma << endl;

    return 0;
}

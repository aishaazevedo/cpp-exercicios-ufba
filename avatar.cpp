#include <iostream>
#include <vector>
using namespace std;


int main() {
    int N;
    cin >> N;

    vector<int> habilidades(N);  
    vector<int> identificadores(N);  

    for (int i = 0; i < N; ++i) {
        cin >> habilidades[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> identificadores[i];
    }
    int Y;
    cin >> Y;  

    bool encontrado = false;

    for (int i = 0; i < N; ++i) {
        if (habilidades[i] == Y) {
            if (encontrado) {
                cout << " ";  
            }
            cout << identificadores[i];
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Nenhum";
    }

    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> nomes(N);
    vector<int> pesos(N);

    for (int i = 0; i < N; ++i) {
        cin >> nomes[i] >> pesos[i];
    }

    int capacidade;
    cin >> capacidade;

    vector<string> perigosos;

    for (int i = 0; i < N; ++i) {
        if (pesos[i] > capacidade) {
            perigosos.push_back(nomes[i]);
        }
    }

    if (perigosos.empty()) {
        cout << "Vamos todos encontrar a montanha!" << endl;
    } else {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for (const string& nome : perigosos) {
            cout << nome << endl;
        }
    }

    return 0;
}

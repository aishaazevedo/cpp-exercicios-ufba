#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
    int dia, mes, ano;

    bool operator<(const Data& outra) const {
        if (ano != outra.ano) return ano < outra.ano;
        if (mes != outra.mes) return mes < outra.mes;
        return dia < outra.dia;
    }
};

int main() {
    vector<Data> datas;
    int d, m, a;

    while (cin >> d >> m >> a) {
        datas.push_back({d, m, a});
    }


    sort(datas.begin(), datas.end());

 
    for (const auto& data : datas) {
        cout << data.dia << " " << data.mes << " " << data.ano << endl;
    }

    return 0;
}

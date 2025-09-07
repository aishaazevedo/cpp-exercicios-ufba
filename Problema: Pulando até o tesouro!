#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;  

    vector<int> A(N); 
    for (int i = 0; i < N; ++i) {
        cin >> A[i];  
    }
    int S;
    cin >> S;  

    int count = 0;
    bool venceuTodos = true;
    
    for (int i = 0; i < N; ++i) {
        if (A[i] <= S) {
            count++; 
        } else {
            venceuTodos = false;  
            break;  
        }
    }
    cout << count << endl;
    if (venceuTodos) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

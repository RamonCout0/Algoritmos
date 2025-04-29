#include <iostream>
using namespace std;

bool estaOrdenado(int A[], int n) {

    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (estaOrdenado(A, n)) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    return 0;
}
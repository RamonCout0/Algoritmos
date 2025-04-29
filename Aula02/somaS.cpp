#include <iostream>
using namespace std;

bool existe_soma(int A[], int n, int s) {
    // Percorre todos os pares de elementos no array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Evita comparar o mesmo elemento consigo mesmo
            if (A[i] + A[j] == s) {
                return true; // Encontrou a soma
            }
        }
    }
    return false; // Não encontrou a soma
}

int main() {
    int n, s;
    cin >> n >> s;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (existe_soma(A, n, s)) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    return 0;
}
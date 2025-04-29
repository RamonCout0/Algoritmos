#include <iostream>
using namespace std;


bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i < num; i++) { // Testa todos os i de 2 até num-1
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Digite o tamanho do array: ";
    cin >> n;

    int A[n];
    int primos[n];
    int contadorPrimos = 0;

    cout << "Digite " << n << " numeros inteiros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        if (ehPrimo(A[i])) {
            primos[contadorPrimos] = A[i];
            contadorPrimos++;
        }
    }

    cout << "\nQuantidade de numeros primos: " << contadorPrimos << endl;
    cout << "Numeros primos encontrados:" << endl;
    for (int i = 0; i < contadorPrimos; i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    return 0;
}
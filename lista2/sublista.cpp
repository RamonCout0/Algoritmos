#include <iostream>
using namespace std;

int somaMaximaSublista(int A[], int n) {
    int somaAtual = A[0]; 
    int somaMaxima = A[0];


    for (int i = 1; i < n; i++) {
        somaAtual = (A[i] > somaAtual + A[i]) ? A[i] : somaAtual + A[i];  
        somaMaxima = (somaAtual > somaMaxima) ? somaAtual : somaMaxima;      
    }

    return somaMaxima;  
}

int main() {
    int n;
    cin >> n;  

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];  
    }

    int resultado = somaMaximaSublista(A, n);
    cout << resultado << endl;  

    return 0;
}
#include <iostream>
using namespace std;

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menorIndice = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[menorIndice]) {
                menorIndice = j;
            }
        }
      
        int temp = A[i];
        A[i] = A[menorIndice];
        A[menorIndice] = temp;
    }
}


int contarNumerosDistintos(int A[], int n) {
    // Ordena o array
    selectionSort(A, n);

    int count = 1;  
    for (int i = 1; i < n; i++) {
      
        if (A[i] != A[i - 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n; 

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i]; 
    }

    int resultado = contarNumerosDistintos(A, n);
    cout << resultado << endl; 
    return 0;
}
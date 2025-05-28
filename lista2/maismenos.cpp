#include <iostream>

/*void conta_pares(int a[], int n, int pares[], int& qtd_pares) {
    for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) {
        pares[qtd_pares] = a[i];
        qtd_pares = qtd_pares + 1;
        }
    }

} */

void begaposi(int a[],int n ,int negativo[], int positivo[], int& cnegativo, int& cpositivo){
    for (int i = 0; i < n; ++i){
        if ( a[i] > 0){
            positivo[i] = a[i];
            cpositivo += 1;
        }
        else if (a[i] < 0){
            negativo[i] = a[i];
            cnegativo += 1;
        }   

   }
}



int main() {
    int n, qtd_pares = 0;
    std::cin >> n;
    int a[n], pares[n]; 
    int positivo[n] , negativo[n], cnegativo = 0, cpositivo = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    /*conta_pares(a, n, pares, qtd_pares);
    std::cout << qtd_pares << std::endl;
    
    if (qtd_pares > 0) {
        for (int i = 0; i < qtd_pares; i++) {
            std::cout << " " << pares[i] << std::endl;
        }
    }
*/
    begaposi(a, n, negativo, positivo, cnegativo, cpositivo);
    std::cout << "a quantidade de numeros negativos é: " << cnegativo << std::endl;
    std::cout << "A quantidade de numeros positivos é: " <<  cpositivo << std::endl;

    return 0;
}
#include <iostream>

int impar(int a[], unsigned n){
    int cont = 0;
    for(unsigned int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cont +=1;
        }
    }
    return cont;
}

int main(){
    unsigned int n;
    std::cin >> n;
    int a[n];

    for(unsigned int i = 0; i< n; i++){
        std::cin >> a[i];
    }
    int qnt_impar = impar(a, n);
    std::cout << "Quantidade de ímpares: " << qnt_impar << std::endl;
    
    return 0;
}
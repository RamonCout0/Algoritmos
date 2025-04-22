#include <iostream>

int caldiv(int n){
    int div = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            div += 1;
        }
    }
    return div;
}

int main(){
    int n;
    std::cin >> n;
    if(n >= 1 && n <=1000000000){
        std::cout << "o número: " <<  n << " Tem o total de: " << caldiv(n) << " Divisores"  << std::endl;

    }
    else{
        std::cout << "Valor inválido: " << std::endl;
    }
}
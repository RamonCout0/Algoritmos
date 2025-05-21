#include <iostream>

int main(){
    int a, b;
    int valor1, valor2;
     
    std::cin >> a;
    if(a >=-1000 && a <=1000){
        valor1 = a;
    }
    std::cin >> b;
    if(a >=-1000 && a <=1000){
        valor2 = b;
    }
    int soma;
    soma = valor1 + valor2;
    std::cout << soma << std::endl;
    
    return 0;

}
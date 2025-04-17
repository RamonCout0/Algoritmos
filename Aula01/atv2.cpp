#include <iostream>

int main(){
int l1, l2;

std::cout << "Digite o valor de l1: ";
std::cin >> l1;

std::cout << "Digite o valor de l2:";
std::cin >>l2;

if(l1 >=1 && l1 <= 100000000 && l2 >=1 && l2 <=100000000){
    int perimetro = 2 *(l1 +l2);
    std::cout <<"Perimetro do retangulo:" << perimetro << std::endl;

}else{
    std::cout << "Erro: os valores devem estar entre 1 e 10^9." << std::endl;
}

    return 0;
}
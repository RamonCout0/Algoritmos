#include <iostream>

int main(){
int l1, l2;

std::cin >> l1;
std::cin >>l2;

if(l1 >=1 && l1 <= 100000000 && l2 >=1 && l2 <=100000000){
    int perimetro = 2 *(l1 +l2);
    std::cout <<"Perimetro do retangulo:" << perimetro << std::endl;

}else{
    std::cout << "Passou do limite! Não pode ser mais de 1 bilhão!" << std::endl;
}

    return 0;
}
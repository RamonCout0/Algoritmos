#include <iostream>

int menor(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    bool primos = true;
    int a, b;
    std::cin >> a >> b;
    int n = menor(a, b);
    for (int i = 2; i <= n; i++){
        if (a % i == 0 && b % i == 0){
            primos = false;
            break;
        }
    }

    if (primos)
        std::cout << "São primos entre si" << std::endl;
    else
        std::cout << "Não são primos entre si" << std::endl;
}

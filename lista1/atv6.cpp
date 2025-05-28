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
    if (caldiv(n) <=2){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
}
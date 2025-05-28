#include <iostream>

int main(){
    float X, N; 
    std::cin >> N >> X;

    
    int ajuste = X * 100 / N;
    std::cout << ajuste << std::endl;
}
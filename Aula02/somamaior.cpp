#include <iostream>


int main(){
    int n;
    std::cin >> n;
    if( n >= 2 && n <= 1000000){
        int a[n];
        for(int i = 0; i < n; i++){
            int temp;
            std::cin >> temp;
            if(temp >= -1000000000 && temp <= 1000000000){
                a[i] = temp;
            }
            else{
                std::cout << "valor passou do limite" << std::endl;
            }
        }
        int maior = 0;
        int indice;
        for(int i = 0; i < n - 1; i++ ){
            if(a[i] + a[i+1] > maior){
                maior = a[i] + a[i+1];
                indice = i;
            }
        }
        
        std::cout << "A soma maior é " << maior << " os indices são "<< indice <<" "<< indice + 1 <<  std::endl;

    }
    else{
        std::cout << "valor passou do limite" << std::endl;
    }

    
    return 0;
}

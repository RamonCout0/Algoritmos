#include <iostream>

int main(){
   
    int m;
    int d;
    int postes = 1;

    std::cin >> m >> d;

    if(m % d == 0 ){
        postes += m / d;
        
        std::cout << "O total de postes é: " << postes << " a distância entre dois ultimos postes é " << d << std::endl;

    }
        else{
            postes += (m / d) +1;
            std::cout << "O total de postes é" << postes << "a distância entre os dois ultimos postes é " << m % d << std::endl;
        }

}
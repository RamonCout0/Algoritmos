#include <iostream>
#include <iomanip>



int main(){
    float diametro;
    std::cin >>diametro;

    float raio = diametro / 2.0;
    float area = 3.14159 * raio * raio; 
    
    double diametro2;
    std::cin >>diametro2;

    double raio2 = diametro2 / 2.0;
    double area2 = 3.14159 * raio2 * raio2; 


     
        std::cout << std::fixed << std::setprecision(5) << area << std::endl;
        std::cout << std::fixed << std::setprecision(5) << area2 << std::endl;
        return 0;
}
#include <iostream>
#include "vector-array.hpp"

void teste(int inicio, int fim){
    vector_array x;
    vector_array *y;
     std::cout << "x: ";
    for(int i = inicio; i < fim; i++)
    x.push_back(i);
    for(int i = 0; i < x.size(); i++)
    std::cout << x.get_at(i) << " ";
    std::cout << std::endl;
    std::cout << "y: ";

    y = new vector_array;

    for(int i = inicio; i < fim; i++)
    y->push_back(i);
    for(int i = 0; i < y->size(); i++)
    std::cout << y->get_at(i) << " ";
    std::cout << std::endl;
    delete y;
    return;
}

int main(){
    vector_array v1;
   /* v1.push_back(10);
    std::cout << " v1 tem " << v1.size() <<" elementos." << std::endl;
   
    v1.push_back(20);
    v1.push_back(30);
    std::cout << " v1 tem " << v1.size() <<" elementos." << std::endl;
    teste(5, 10);
*/

int n;
std::cin >> n;
for(int i = 0; i < n; i++){
    int x;
    std:: cin >>x;
    v1.push_back(x);
}
std::cout << "v1 ( size = " << v1.size() << " ,capacity = "  << v1.capacity() << " ): ";
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1.get_at(i) << " ";
    }

    return 0;

}
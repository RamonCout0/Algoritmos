#include <iostream>

/*5. Escreva um algoritmo que leia um array a de n (2 ≤ n ≤ 109)

ler o tamanho do array
ler o numero que ele quer caso tiver soma
ele vai até n somando até que um de o resultado que S
saida de código






números inteiros e determine se existe no array um 
par de números cuja soma seja s (1 ≤ s ≤ 2 × 109 , também informado na entrada.*/

int main(){

    int n;
    std::cin >> n;
    int HajiRoom[n];
    int s;
    int soma;
     int soma2;

    std::cin >> s; 
    for(int i = 0; i < n - 1; i++){
        std::cin >> a[i];
        if(HajiRoom[i] + HajiRoom[i + 1] > soma){
        soma = a[i] + a[i + 1];
        }
    for(int j = 0 ; j < n - 1; i++){
       
        if(a[i] + a[i - 1] > soma){
            soma2 = a[i] + a[i - 1];
        }
    }
    }
    if(soma + soma2 == s){
        std::cout << "S" << std::endl;
    }else{
        std::cout << "N" << std::endl;
    }
    return 0;
}
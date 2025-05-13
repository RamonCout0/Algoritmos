#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int A[n]; 
    int maior = 0;


    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
    for(int i = 0; i < n - 1; i++){
      if(A[i] + A[i+1] > maior){
        maior = A[i] + A[i+1];
      }

    }
    std::cout << maior << std::endl;
}


/*
Entrada
A: array de inteiros
N: inteiros
maior: inteiros

declaração
I: inteiro
maior: inteiro

saida:
maior

inicio
Maior = 0;

A <- [n]

para I de 0 até N-1 faça		2n
	se (A[i] + (A[i+1] > maior) então 4(n - 1)  
		maior = (A[i] + (A[i+1] 4(n - 1)
		fim se
		fim para	2(n - 1)
		
		retorne maior	
			4 *(n

*/
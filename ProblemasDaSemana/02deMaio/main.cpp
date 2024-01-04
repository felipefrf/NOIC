#include <iostream>

int main(){
    unsigned int n;
    std::cin >> n;
    unsigned int soma = n*(n+1)/2;
    if (soma%2 == 1){
        std::cout << "NO";
    }
    else{
        int numero;
        if(n%2 == 1){
            numero = n/2 + 1;
        }
        else{
            numero = n/2;
            std::cout << numero;
        }
    }
}
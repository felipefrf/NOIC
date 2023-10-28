#include <iostream>
using namespace std;

int main(){
    int i = 99;
    int maior, numero, posicao = 1;
    cin >> maior;
    while(i>0){
        i--;
        cin >> numero;
        if (numero > maior){
            maior = numero;
            posicao = 100-i;
        }
    }
    cout << maior << '\n' << posicao << '\n';
}
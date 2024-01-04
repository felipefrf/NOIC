#include <iostream>
using namespace std;

int main(){
    int inteiro, fracionario;
    char lixo;
    cin >> inteiro >> lixo >> fracionario;
    int quociente;
    cout << "NOTAS:\n";
    int notas[]={100,50,20,10,5,2};
    for(int i = 0; i < 6;i++){
        quociente = inteiro/notas[i];
        inteiro -= notas[i]*quociente;
        cout << quociente << " nota(s) de R$ " << notas[i] << ".00\n";
    }
    cout << "MOEDAS:\n";
    cout << inteiro << " moeda(s) de R$ 1.00\n";
    int moedas[] = {50,25,10,5,1};
    for(int i = 0; i < 5;i++){
        quociente = fracionario/moedas[i];
        fracionario -= moedas[i]*quociente;
        if (i < 3) cout << quociente << " moeda(s) de R$ " << "0." << moedas[i] << '\n';
        else cout << quociente << " moeda(s) de R$ " << "0.0" << moedas[i] << '\n';
    }
}
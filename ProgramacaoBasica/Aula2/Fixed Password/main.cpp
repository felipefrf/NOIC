#include <iostream>
using namespace std;

int main(){
    int tentativa, senha = 2002;
    bool abriu = false;
    while(abriu == false){
        cin >> tentativa;
        if(tentativa == senha){
            cout << "Acesso Permitido\n";
            abriu = true;
        }
        else cout << "Senha Invalida\n";
    }
}
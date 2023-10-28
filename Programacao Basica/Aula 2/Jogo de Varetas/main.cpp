#include <iostream>
using namespace std;

int main(){
    int continuar = 0;
    int variedades;
    while(continuar == 0){
        cin >> variedades;
        if(variedades == 0){
            continuar = 1;
            break;
        }
        int metades = 0;
        int ignorar, quantidade;
        while (variedades > 0){
            cin >> ignorar >> quantidade;
            metades += quantidade/2;
            variedades--;
        }
        cout << metades/2 << '\n';
    }
}
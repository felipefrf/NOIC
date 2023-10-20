#include <iostream>

int main(){
    int par[5];
    int impar[5];
    int parLength = 0, imparLength = 0, number;
    for(int i = 0; i < 15; i++){
        std::cin >> number;
        if(number % 2 == 0){
            par[parLength] = number;
            parLength++;
            if(parLength == 5){
                for(int n = 0; n < 5; n++) std::cout << "par[" << n << "] = " << par[n] << '\n';
                parLength = 0;
            }
        }
        else{
            impar[imparLength] = number;
            imparLength++;
            if(imparLength == 5){
                for(int n = 0; n < 5; n++) std::cout << "impar[" << n << "] = " << impar[n] << '\n';
                imparLength = 0;
            }
        }
    }
    for(int n = 0; n < imparLength; n++) std::cout << "impar[" << n << "] = " << impar[n] << '\n';
    for(int n = 0; n < parLength; n++) std::cout << "par[" << n << "] = " << par[n] << '\n';
    return 0;
}
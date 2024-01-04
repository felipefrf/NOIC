#include <iostream>
#include <vector>

struct Linha{
    int linha;
    int cruzamentos;
};

int main(){
    int number;
    std::cin >> number;

    std::vector<Linha>vec(number+1);
    for(int i = 0; i <= number; i++){
        vec[i].cruzamentos = 0;
        vec[i].linha = i;
    }

}
#include <iostream>

int main(){
    int array[1000] = {};
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> array[i];
    }
    int position = 0;
    for(int i = 0; i < n; i++){
        if(array[i] < array[position]) position = i;
    }
    std::cout << "Menor valor: " << array[position] << "\nPosicao: " << position << '\n';
    return 0;
}
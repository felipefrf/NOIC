#include <iostream>

int main(){
    int array[1000] = {};
    int n;
    std::cin >> n;
    for(int i = 0; i < 1000; i++){
        array[i] = i % n;
        std::cout << "N[" << i << "] = " << array[i] << '\n';
    }
    return 0;
}
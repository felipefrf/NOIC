#include <iostream>
#include <iomanip>

int main(){
    double array[100];
    double number;
    std::cin >> number;
    for(int i = 0; i < 100; i++){
        array[i] = number;
        std::cout << "N[" << i << "] = " << std::fixed << std::setprecision(4) << array[i] << '\n';
        number /= 2;
    }
    return 0;
}
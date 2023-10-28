#include <iostream>

int main(){
    int number;
    std::cin >> number;
    long long value = 1;
    while(number > 0){
        value *= number;
        number--;
    }
    std::cout << value;
    return 0;
}
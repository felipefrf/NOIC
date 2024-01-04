#include <iostream>
#define ll long long

ll counter(int number){
    if(number == 1 or number == 0) return 1;
    else return counter(number-1) + counter(number-2);
}

int main(){
    int number;
    std::cin >> number;
    while(number != 0 and number <= 50){
        std::cout << counter(number) << '\n';
        std::cin >> number;
    }
    return 0;
}
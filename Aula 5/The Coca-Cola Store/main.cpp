#include <iostream>
#define ll long long

ll algorithm(int number, ll& counter){
    if(number == 0 or number == 1) return counter;
    if(number == 2) return counter + 1;
    counter += number / 3;
    number -= (number / 3) * 2;
    return algorithm(number, counter);
}

int main(){
    int n;
    ll counter;
    while(std::cin >> n and n != 0){
        counter = 0;
        std::cout << algorithm(n, counter) << '\n';
    }
    return 0;
}
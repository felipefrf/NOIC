#include <iostream>

void swap(long long& a, long long& b){
    int c = a;
    if(a > b){
        a = b;
        b = c;
    }
}

long long algorithm(long long counter, long long number){
    if(number == 1) return counter;
    if(number % 2 == 0) return algorithm(counter + 1, (number/2));
    else return algorithm(counter + 1, (3*number + 1));
}

int main(){
    long long a, b;
    long long maxValue = 0;
    long long value;
    while(std::cin >> a >> b){
        std::cout << a << ' ' << b << ' ';
        maxValue = 0;
        swap(a, b);
        for(long long i = a; i <= b; i++){
            value = algorithm(1, i);
            if(value > maxValue) maxValue = value;
        }
        std::cout << maxValue << '\n';
    }
    return 0;
}
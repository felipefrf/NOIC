#include <iostream>

long long fibonacci(long long number, long long& counter){
    if(number == 1 or number == 0) return number;
    counter += 2;
    return fibonacci(number-1, counter) + fibonacci(number-2, counter); 
}

int main(){
    long long tests;
    std::cin >> tests;
    long long number;
    long long value;
    long long counter;
    while(tests > 0){
        counter = 0;
        std::cin >> number;
        value = fibonacci(number, counter);
        std::cout << "fib(" << number << ") = " << counter << " calls = " << value << '\n';
        tests--;
    }
}
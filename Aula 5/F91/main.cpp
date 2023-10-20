#include <iostream>

long long function(long long n){
    if(n > 100) return (n-10);
    else return function(function(n+11));
}

int main(){
    long long n;
    while(std::cin >> n and n != 0){
        std::cout << "f91(" << n << ") = " << function(n) << '\n';
    }
    return 0;
}
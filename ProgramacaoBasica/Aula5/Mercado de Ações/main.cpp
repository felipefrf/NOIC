#include <iostream>
#define ll long long

ll algorithm(ll n, ll k){
    if(n <= k) return 1;
    return algorithm(n/2, k) + algorithm(n - n/2, k);
}

int main(){
    ll n, k;
    while(std::cin >> n >> k and (n != 0 or k != 0)){
        std::cout << algorithm(n, k) << '\n';
    }
    return 0;
}
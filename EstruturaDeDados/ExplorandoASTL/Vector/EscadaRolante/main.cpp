#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int pessoas;
    cin >> pessoas;

    int primeiroTempo = 0;
    int segundoTempo = 0;
    int total = 0;
    cin >> primeiroTempo;
    if (pessoas != 1){
        cin >> segundoTempo;
        if((segundoTempo - primeiroTempo) >= 10)
            total += 10;
        else
            total += (segundoTempo-primeiroTempo);
        for(int i = 2; i < pessoas; i++){
            primeiroTempo = segundoTempo;
            cin >> segundoTempo;
            if((segundoTempo-primeiroTempo) > 10)
                total += 10;
            else
                total += (segundoTempo-primeiroTempo);
        }
    }
    total += 10;

    cout << total;
}
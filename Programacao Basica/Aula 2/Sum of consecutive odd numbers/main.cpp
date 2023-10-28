#include <iostream>
using namespace std;

int main(){
    int n,x,y;
    cin >> n;
    while(n>0){
        cin >> x >> y;
        int soma = 0;
        n--;
        if (x>y){
            int transfer;
            transfer = y;
            y = x;
            x = transfer;
        }
        for(int i = 1; x+i < y; i++){
            if((x+i)%2 != 0) soma += (x+i);
        }
        cout << soma << '\n';
    }
}
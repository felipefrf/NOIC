#include <iostream>
using namespace std;

int main(){
    int x,y;
    while(cin >> x >> y and x!=y){
        if(x > y) cout << "Decrescente\n";
        else cout << "Crescente\n";
    }
}
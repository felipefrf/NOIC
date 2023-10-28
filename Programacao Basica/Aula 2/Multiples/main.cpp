#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int op1,op2;
    op1 = (x/y)*y-x;
    op2 = (y/x)*x-y;
    if (op1 == 0 or op2 == 0) cout << "Sao Multiplos\n";
    else cout << "Nao sao Multiplos\n";
}
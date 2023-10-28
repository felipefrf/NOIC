#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    float a, b, c;
    while(n>0){
        cin >> a >> b >> c;
        float media = (2*a+3*b+5*c)/10;
        cout << fixed << setprecision(1) << media << '\n';
    }
}
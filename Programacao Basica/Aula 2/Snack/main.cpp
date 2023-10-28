#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float valores[] = {4.00,4.50,5.00,2.00,1.50};
    int x,y;
    cin >> x >> y;
    float total = valores[x-1]*y;
    cout << "Total: R$ " <<fixed << setprecision(2) << total << '\n';
}
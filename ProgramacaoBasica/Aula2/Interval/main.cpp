#include <iostream>
using namespace std;

int main(){
    float num;
    cin >> num;
    if(num < 0 or num > 100) cout << "Fora de intervalo";
    else if (num>=0 and num<=25) cout << "Intervalo [0,25]";
    else if (num>25 and num<=50) cout << "Intervalo (25,50]";
    else if (num>50 and num<=75) cout << "Intervalo (50,75]";
    else cout << "Intervalo (75,100]";
    cout << '\n';
}
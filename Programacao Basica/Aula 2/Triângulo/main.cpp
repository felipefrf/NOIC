#include <iostream>
using namespace std;

int triangle(int x, int y, int z){
    int soma = 0;
    if(x < y + z) soma++;
    if(y < x + z) soma++;
    if(z < x + y) soma++;
    if(soma == 3);
    else soma = 0;
    return soma;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int is_triangle = triangle(a,b,c) + triangle(a,b,d) + triangle(a,c,d) + triangle(b,c,d);
    if(is_triangle != 0) cout << 'S';
    else cout << 'N';
}
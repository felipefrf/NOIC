#include <iostream>
#include <iomanip>
using namespace std;

int aprovado(float x){
    if(x < 5) cout << "Aluno reprovado.\n";
    else cout << "Aluno aprovado.\n";
    return 0;
}

int main(){
    float a, b, c ,d, exame;
    cin >> a >> b >> c >> d;
    float media = (2*a+3*b+4*c+1*d)/10;
    cout << "Media: " << fixed << setprecision(1) << media << '\n';
    if(media >= 5 and media <7){
        cout << "Aluno em exame.\n";
        cin >> exame;
        cout << "Nota do exame: " << fixed << setprecision(1) << exame <<'\n';
        media = (media + exame)/2;
        aprovado(media);
        cout << "Media final: " << fixed << setprecision(1) << media << '\n';
    }
    else{
        aprovado(media);
    }
}
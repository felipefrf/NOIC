#include <iostream>
#include <string>
#include <sstream>

int numberLeds(char number){
    if(number == '1') return 2;
    else if(number == '7') return 3;
    else if(number == '4') return 4;
    else if(number == '2' or number == '3' or number == '5') return 5;
    else if(number == '8') return 7;
    else return 6;
}

int main(){
    int n;
    std::string entrada;
    std::getline(std::cin, entrada);
    std::stringstream entry(entrada);
    entry >> n;
    int sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        std::getline(std::cin, entrada);
        for(std::size_t n = 0; n < entrada.length(); n++){
            sum += numberLeds(entrada[n]);
        }
        std::cout << sum << " leds\n";
    }
    return 0;
}
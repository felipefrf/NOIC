#include <iostream>
#include <string>

int main(){
    double a, c;
    std::string b;
    if (!(std::cin >> a >> b >> c)){
        std::cout << "ERR\n";
    }
    else if(b == "/") std::cout << a/c;
    else if(b == "*") std::cout << a*c;
    else if(b == "+") std::cout << a+c;
    else if(b == "-") std::cout << a-c;
    else std::cout << "ERR\n";
}
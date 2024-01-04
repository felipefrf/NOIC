#include <iostream>
#include <string>

int main(){
    bool shouldCapitalize = true;
    std::string frase;
    while(std::getline(std::cin, frase)){
        shouldCapitalize = true;
        for(std::size_t i = 0; i < frase.length(); i++){
            if(frase[i] != ' ' and shouldCapitalize == true){
                shouldCapitalize = false;
                frase[i] = toupper(frase[i]);
            }
            else if(frase[i] != ' ' and shouldCapitalize == false){
                shouldCapitalize = true;
                frase[i] = tolower(frase[i]);
            }
        }
        for(std::size_t i = 0; i < frase.length(); i++){
            std::cout << frase[i];
        }
        std::cout << '\n';
    }
    return 0;
}
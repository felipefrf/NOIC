#include <iostream>
#include <string>

int main(){
    int rounds;
    std::cin >> rounds;
    std::string str;
    std::size_t half;
    std::getline(std::cin, str);
    for(int i = 0; i < rounds; i++){
        std::getline(std::cin, str);
        for(std::size_t n = 0; n < str.length(); n++){
            if(isalpha(str[n])) {
                str[n] += 3;
            }
        }
        half = str.length() / 2 ;
        for(std::size_t j = 0; j < half; j++){
            std::swap(str[j], str[str.length()-1-j]);
        }
        for(std::size_t j = half; j < str.length(); j++){
            str[j] -= 1;
        }
        std::cout << str << '\n';
    }
    return 0;
}
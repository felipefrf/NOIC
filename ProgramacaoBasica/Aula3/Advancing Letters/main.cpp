#include <iostream>

int main(){
    int rounds;
    std::cin >> rounds;
    std::string str1;
    std::string str2;
    int sum = 0;
    int difference;
    for(int i = 0; i < rounds; i++){
        std::cin >> str1 >> str2;
        for(std::size_t n = 0; n < str1.length(); n++){
            difference = str2[n] - str1[n];
            if(difference < 0) difference += 26;
            sum += difference;
        }
        std::cout << sum << '\n';
        sum = 0;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main(){
    double matrix[12][12];
    char operation;
    std::cin >> operation;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            std::cin >> matrix[j][i];
        }
    }
    double sum = 0;
    for(int j = 11; j > 6; j--){
        for(int i = 12 - j; i < j; i++){
            sum += matrix[j][i];
        }
    }
    if(operation == 'S') std::cout << std::fixed << std::setprecision(1) << sum << '\n';
    else std::cout << std::fixed << std::setprecision(1) << (sum/30) << '\n';
}
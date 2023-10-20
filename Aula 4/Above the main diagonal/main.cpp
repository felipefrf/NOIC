#include <iostream>
#include <iomanip>

int main(){
    double matrix[12][12];
    char operation;
    std::cin >> operation;
    double sum = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            std::cin >> matrix[j][i];
        }
    }
    for(int i = 0; i < 12; i++){
        for(int j = i + 1; j < 12; j++){
            sum += matrix[j][i];
        }
    }
    if(operation == 'S') std::cout << std::fixed <<std::setprecision(1) << sum << '\n';
    else std::cout << std::fixed << std::setprecision(1) << (sum/66) << '\n';
    return 0;
}
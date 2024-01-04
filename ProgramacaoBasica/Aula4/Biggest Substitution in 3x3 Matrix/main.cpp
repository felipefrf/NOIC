#include <iostream>

int main(){
    int matrix[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> matrix[j][i];
        }
    }
    int value = matrix[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[j][i] > value){
                value = matrix[j][i];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[j][i] == value) matrix[j][i] = -1;
            std::cout << matrix[j][i] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
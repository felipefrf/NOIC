#include <iostream>

int sumLine(int matrix[3][3], int number){
    int sum = 0;
    for(int j = 0; j < 3; j++){
        sum += matrix[j][number];
    }
    return sum;
}

int sumColumn(int matrix[3][3], int number){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += matrix[number][i];
    }
    return sum;
}

int sumPlusDiagonal(int matrix[3][3]){
    int sum = matrix[0][0] + matrix[1][1] + matrix[2][2];
    return sum;
}

int sumMinusDiagonal(int matrix[3][3]){
    int sum = matrix[0][2] + matrix[1][1] + matrix[2][0];
    return sum;
}

int main(){
    int matrix[3][3];
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> matrix[j][i];
            if(j == 0) sum += matrix[j][i];
        }
    }
    bool isMagic = true;
    for(int i = 0; i < 3; i++){
        if(sumLine(matrix, i) != sum){
            isMagic = false;
            break;
        }
    }
    if(isMagic == true){
        for(int i = 0; i < 3; i++){
            if(sumColumn(matrix, i) != sum){
                isMagic = false;
                break;
            }
        }
    }
    if(sumPlusDiagonal(matrix) != sum or sumMinusDiagonal(matrix) != sum) isMagic = false;
    if(isMagic == false) std::cout << "NAO\n";
    else std::cout << "SIM\n";
    return 0;
}
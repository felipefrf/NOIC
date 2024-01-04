#include <iostream>

int main(){
    int size;
    std::cin >> size;
    int table[1000][1000];

    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std::cin >> table[i][j];
        }
    }

    int rowSum[1000];
    int columnSum[1000];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            rowSum[i] += table[i][j];
            columnSum[i] += table[j][i];
        }
    }

    int value;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            value = 0;
            value = rowSum[j] + columnSum[i] - 2 * table[j][i];
            if(value > sum) sum = value;
        }
    }
    
    std::cout << sum;
    return 0;
}
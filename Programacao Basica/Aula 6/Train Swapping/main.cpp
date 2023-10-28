#include <iostream>
#include <vector>

int counter;

void bubbleSort(std::vector<int>& vec){
    bool swapped = false;

    for(int i = 0; i < vec.size()-1; i++){
        if(vec[i] > vec[i+1]){
            std::swap(vec[i], vec[i+1]);
            counter++;
            swapped = true;
        }
    }

    if(swapped) bubbleSort(vec);
}

int main(){
    int cases;
    std::cin >> cases;

    int wagons;
    int number;
    std::vector<int>vec;

    while(cases != 0){
        std::cin >> wagons;

        for(int i = 0; i < wagons; i++){
            std::cin >> number;
            vec.push_back(number);
        }

        counter = 0;
        bubbleSort(vec);

        std::cout << "Optimal train swapping takes " << counter << " swaps.\n";

        cases--;
        vec.clear();
    }
}
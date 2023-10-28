#include <iostream>
#include <vector>

/**
 * Bubble Sort
*/
void bubbleSort(std::vector<long long>& vec){
    long long x;
    for(int i = 0; i < 10; i++){
        std::cin >> x;
        vec.push_back(x);
    }
    bool swapped = true;
    long long n = vec.size() - 1;
    while(swapped == true){
        swapped = false;
        for(int i = 0; i < n; i++){
            if(vec[i] > vec[i+1]) {
                std::swap(vec[i], vec[i+1]);
                swapped = true;
            }
        }
        n--;
    }
    for(int i = 0; i < 10; i++){
        std::cout << i << "- " << vec[i] << '\n';
    }
}

/**
 * Merge Sort
*/
void mergeSort(std::size_t init, std::size_t end, std::vector<long long>& vec){
    if(init == end) return;

    std::size_t mid = (end + init) / 2;
    mergeSort(init, mid, vec);
    mergeSort(mid + 1, end, vec);

    std::vector<long long> aux;
    std::size_t j = mid + 1;
    
    for(std::size_t i = init; i <= mid; i++){
        while(j <= end and vec[j] < vec[i]){
            aux.push_back(vec[j]);
            j++;
        }
        aux.push_back(vec[i]);
    }

    while(j <= end){
        aux.push_back(vec[j]);
        j++;
    }

    for(std::size_t i = 0; i <= end-init; i++){
        vec[i+init] = aux[i];
    }
}



int main(){
    std::vector<long long> vec;
    long long number;
    while(std::cin >> number){
        vec.push_back(number);
    }
    mergeSort(0, vec.size()-1, vec);
    for(std::size_t i = 0; i < vec.size(); i++){
        std::cout << vec[i] << ' ';
    }
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

std::vector<std::string> names;

bool compare(std::string x, std::string y){
    return x.size() > y.size();
}

void mergeSort(std::size_t init, std::size_t end){
    if(init == end) return;
    
    std::size_t mid = (init+end) / 2;
    mergeSort(init, mid);
    mergeSort(mid+1, end);

    std::size_t j = mid + 1;
    std::vector<std::string> aux;

    for(std::size_t i = init; i <= mid; i++){
        while(j <= end and compare(names[j], names[i])){
            aux.push_back(names[j]);
            j++;
        }
        aux.push_back(names[i]);
    }

    while(j <= end){
        aux.push_back(names[j]);
        j++;
    }

    for(std::size_t i = 0; i <= end-init; i++){
        names[i+init] = aux[i];
    }
    
    aux.clear();
}

int main(){

    int rounds;
    std::string line;
    std::getline(std::cin, line);
    std::stringstream entrada(line);
    entrada >> rounds;
    
    std::string name;
    while(rounds > 0){

        std::getline(std::cin, line);
        std::stringstream entrada(line);
        while(entrada >> name){
            names.push_back(name);
        }

        mergeSort(0, names.size()-1);
        
        for(std::size_t i = 0; i < names.size() - 1; i++){
            std::cout << names[i] << ' ';
        }
        std::cout << names[names.size()-1] << '\n';

        names.clear();
        rounds--;
    }
}
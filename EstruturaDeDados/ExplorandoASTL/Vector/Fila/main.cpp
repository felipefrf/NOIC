#include <iostream>
#include <vector>

int search(std::vector<int>& vec, int value){
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] == value) return i;
    }
    return -1;
}

int main(){
    int people;
    std::cin >> people;

    std::vector<int>vec(people+1);

    for(int i = 1; i <= people; i++){
        std::cin >> vec[i];
    }

    int sairam;
    std::cin >> sairam;

    int saida;
    int posicao;
    for(int i = 1; i <= sairam; i++){
        std::cin >> saida;
        posicao = search(vec, saida);
        vec.erase(vec.begin() + posicao);
    }

    for(int i = 1; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }

}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Polo{
    std::string color;
    char size;
    std::string name;
};

bool compare(const Polo& a, const Polo& b){
    if(a.color == b.color){
        if(a.size == b.size){
            return a.name < b.name;
        }
        else{
            return a.size > b.size;
        }
    }
    else
        return a.color < b.color;
}

int main(){
    int number;
    int counter = 0;
    std::vector<Polo>vec;
    std::string ignore;
    while(std::cin >> number and number != 0){
        if(counter != 0) std::cout << '\n';
        counter++;
        std::getline(std::cin, ignore);
        Polo add;

        for(int i = 0; i < number; i++){
            std::getline(std::cin, add.name);
            std::cin >> add.color >> add.size;
            std::getline(std::cin, ignore);
            vec.push_back(add);
        }

        std::sort(vec.begin(), vec.end(), compare);

        for(Polo shirt : vec){
            std::cout << shirt.color << ' ' << shirt.size << ' ' << shirt.name << '\n';
        }
        vec.clear();
    }
}
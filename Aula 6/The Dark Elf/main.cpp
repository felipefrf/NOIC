#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Reindeer{
    int weight;
    int age;
    double height;
    std::string name;
};

bool compare(const Reindeer& a, const Reindeer& b){
    if(a.weight == b.weight){
        if(a.age == b.age){
            if(std::abs(a.height - b.height) < 0.00001){
                return a.name < b.name;
            }
            else
                return a.height < b.height;
        }
        else
            return a.age < b.age;
    }
    else
        return a.weight > b.weight;
}

int main(){
    int cases;
    std::cin >> cases;

    int totalNumber;
    int beingUsed;
    Reindeer read;
    std::vector<Reindeer> vec;
    int counter = 0;

    while(cases != 0){
        counter++;
        std::cin >> totalNumber >> beingUsed;
        while(totalNumber != 0){
            std::cin >> read.name >> read.weight >> read.age >> read.height;
            vec.push_back(read);
            totalNumber--;
        }

        std::sort(vec.begin(), vec.end(), compare);

        std::cout << "CENARIO {" << counter << "}\n";
        for(int i = 1; i <= beingUsed; i++){
            std::cout << i << " - " << vec[i-1].name << '\n';
        }

        cases--;
        vec.clear();
    }
}
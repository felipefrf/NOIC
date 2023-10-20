#include <iostream>
#include <vector>
#include <algorithm>

struct Country{
    int gold;
    int silver;
    int bronze;
    int id;
};

bool compare(const Country& a, const Country& b){
    if(a.gold == b.gold){
        if(a.silver == b.silver){
            if(a.bronze == b.bronze){
                return a.id < b.id;
            }
            else
                return a.bronze > b.bronze;
        }
        else
            return a.silver > b.silver;
    }
    else
        return a.gold > b.gold;
}

int main(){
    int countries;
    int sports;

    int first, second, third;

    std::cin >> countries >> sports;

    std::vector<Country>vec(countries+1);

    for(int i = 1; i <= countries; i++){
        vec[i].gold = 0;
        vec[i].silver = 0;
        vec[i].bronze = 0;
        vec[i].id = i;
    }

    for(int i = 1; i <= sports; i++){
        std::cin >> first >> second >> third;
        vec[first].gold++;
        vec[second].silver++;
        vec[third].bronze++;
    }

    std::sort(vec.begin() + 1, vec.end(), compare);

    for(int i = 1; i < countries; i++){
        std::cout << vec[i].id << ' ';
    }
    std::cout << vec[countries].id << '\n';
    vec.clear();
}
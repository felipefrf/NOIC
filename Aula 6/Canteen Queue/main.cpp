#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long long> arrivalOrder;
std::vector<long long> gradeOrder;

bool compare(long long x, long long y){
    return x > y;
}

int main(){
    int cases;
    std::cin >> cases;

    int students;
    long long note;
    int sum;
    while(cases > 0){
        sum = 0;
        std::cin >> students;

        for(int i = 0; i < students; i++){
            std::cin >> note;
            arrivalOrder.push_back(note);
            gradeOrder.push_back(note);
        }

        std::sort(gradeOrder.begin(), gradeOrder.end(), compare);

        for(int i = 0; i < students; i++){
            if(arrivalOrder[i] == gradeOrder[i]) sum++;
        }
        std::cout << sum << '\n';

        arrivalOrder.clear();
        gradeOrder.clear();
        cases--;
    }
}
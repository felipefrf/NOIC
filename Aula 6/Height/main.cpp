#include <algorithm>
#include <stdio.h>
#include <vector>

bool compare(int a, int b){
    return a > b;
}

int main(){
    std::vector<int>toOrder;

    int testCases;
    scanf("%d", &testCases);

    int reader;
    int people;
    for(int i = 0; i < testCases; i++){
        scanf("%d", &people);

        for(int j = 0; j < people; j++){
            scanf("%d", &reader);
            toOrder.push_back(reader);
        }

        std::sort(toOrder.begin(), toOrder.end(), compare);

        for(int j = people-1; j > 0; j--){
            printf("%d ", toOrder[j]);
            toOrder.pop_back();
        }
        printf("%d\n", toOrder[0]);
        toOrder.pop_back();
    }
}
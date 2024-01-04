#include <iostream>

bool isInside(int x, int y, int points[100][4], int redes){
    int sum = 0;
    for(int i = 0; i < redes; i++){
        if(sum == 0 and x >= points[i][0] and x <= points[i][1] and y >= points[i][2] and y <= points[i][3]) sum++;
        if(sum == 1 and (x+1) >= points[i][0] and (x+1) <= points[i][1] and (y+1) >= points[i][2] and (y+1) <= points[i][3]) sum++;
        if(sum == 2) return true;
        else sum = 0;
    }
    return false;
}

int main(){
    int redes;
    std::cin >> redes;
    int points[100][4];
    for(int i = 0; i < redes; i++){
        for(int j = 0; j < 4; j++){
            std::cin >> points[i][j];
        }
    }
    int extremePoints[4] = {0,0,0,0};
    for(int i = 0; i < redes; i++){
        if(points[i][0] < points[extremePoints[0]][0]) extremePoints[0] = i;
        if(points[i][1] > points[extremePoints[1]][1]) extremePoints[1] = i;
        if(points[i][2] < points[extremePoints[2]][2]) extremePoints[2] = i;
        if(points[i][3] > points[extremePoints[3]][3]) extremePoints[3] = i;
    }
    int area = 0;
    for(int j = points[extremePoints[2]][2]; j < points[extremePoints[3]][3]; j++){
        for(int i = points[extremePoints[0]][0]; i < points[extremePoints[1]][1]; i++){
            if(isInside(i, j, points, redes) == true) area++;
        }
    }
    std::cout << area << '\n';
    return 0;
}
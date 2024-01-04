#include <iostream>
#include <vector>
#include <algorithm>

struct Team{
    int pointsScored;
    int pointsReceived;
    int registrationNumber;
    int points;
};

int numberTeams;

// Função que retorna se a está na frente de b na colocação
bool compare(const Team& a, const Team& b){
    if(a.points == b.points){
        double avgA = a.pointsScored;
        double avgB = b.pointsScored;

        if(a.pointsReceived != 0) 
            avgA /= a.pointsReceived;
        else 
            avgA /= ((numberTeams*(numberTeams-1))/2);

        if(b.pointsReceived != 0) 
            avgB /= b.pointsReceived;
        else 
            avgB /= ((numberTeams*(numberTeams-1))/2);

        if(std::abs(avgA - avgB) < 0.00001){
            if(a.pointsScored == b.pointsScored) 
                return a.registrationNumber < b.registrationNumber;
            else 
                return a.pointsScored > b.pointsScored;
        }

        else return avgA > avgB;
    }
    else return a.points > b.points;
}


int main(){
    int counter = 0;
    while(std::cin >> numberTeams and numberTeams != 0){
        counter++;
        std::vector<Team>teams(numberTeams + 1);

        // Leitura dos dados da entrada
        int nA;
        int nB;
        int pointsA;
        int pointsB;

        for(int i = 1; i <= numberTeams; i++){
            teams[i].registrationNumber = i;
        }

        for(int i = (numberTeams*(numberTeams-1))/2; i > 0; i--){
            std::cin >> nA >> pointsA >> nB >> pointsB;
            if(pointsA > pointsB){
                teams[nA].points += 2;
                teams[nB].points += 1;
            }
            else{
                teams[nA].points += 1;
                teams[nB].points += 2;
            }
            teams[nA].pointsScored += pointsA;
            teams[nA].pointsReceived += pointsB;

            teams[nB].pointsScored += pointsB;
            teams[nB].pointsReceived += pointsA;
        }

        std::sort(teams.begin()+1, teams.end(), compare);

        if(counter == 1) std::cout << "Instancia " << counter << '\n';
        else std::cout << "\nInstancia " << counter << '\n';
        for(int i = 1; i < numberTeams; i++){
            std::cout << teams[i].registrationNumber << ' ';
        }
        std::cout << teams[numberTeams].registrationNumber << '\n';
    }
}
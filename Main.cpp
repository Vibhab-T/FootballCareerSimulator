#include <iostream>
#include <conio.h>

using namespace std;

class Continent{
    public:
        string continentName;
        float permanentContinentCoeff, seasonalContinentCoeff; 

};

class League: public Continent{
    public:
        string leagueName;
        float permanentLeagueCoeff, seasonalLeagueCoeff;
};

class Club: public League{
    public:
        string clubName;
        float permanentClubCoeff, seasonalClubCoeff;
};

class Player: public Club{
    public:
        string playerName;
        int playerNumber, position, playerAge, season[20];

        int goals, assists, cleanSheets, apps, seasonGoals[20], seasonAssists[20], seasonCleanSheets[20];
        float matchRating, averageMatchRating[20], totalAverageMatchRating;
};

int main(){

    return 0;
}
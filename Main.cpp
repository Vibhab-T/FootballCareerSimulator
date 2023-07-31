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
        int playerNumber, position, playerNationality, playerAge, season[20];

        int goals, assists, cleanSheets, apps, seasonGoals[20], seasonAssists[20], seasonCleanSheets[20];
        float matchRating, averageMatchRating[20], totalAverageMatchRating;

        Player(){}

        Player(string pName, int pNat, int pos){
            playerName = pName; 
            playerNationality = pNat;
            position = pos; 
            playerAge = 16;
        }

        void init(string pName, int pNat, int pos){
            playerName = pName;
            playerNationality = pNat;
            position = pos;
            playerAge = 16; 
        }

        void transfer(){
        }
};

int main(){
    string playerName;
    int playerNationality, position;

    cout<<"Please enter your player name: ";
    cin>>playerName;

    cout<<endl<<"1. Asian\n"<<"2. European\n"<<"3. African\n"<<"4. North American\n"<<"5. South American\n"<<endl;
    cout<<"Please enter your nationality (1-5): ";
    cin>>playerNationality;

    cout<<endl<<"1. STRIKER\n2. WINGER\n3. CENTRAL ATTACKING MIDFIELDER\n4. CENTRAL MIDFIELDER\n5. CENTRAL DEFENSIVE MIDFIELDER\n6. CENTRE BACK\n7. FULL BACK\n8. GOALKEEPER\n";
    cout<<endl<<"Please enter your player position (1-8): ";
    cin>>position;

    Player player1; 
    player1.init(playerName, playerNationality, position);

    
    return 0;
}
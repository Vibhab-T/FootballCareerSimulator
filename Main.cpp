#include <iostream>
#include <conio.h>

using namespace std;

class Continent{
    public:
        string continentName;
        float permanentContinentCoeff, seasonalContinentCoeff; 

};

class Nation: public Continent{
    public:
        int playerNationality;
        float nationCoeff;
};

class League: public Nation{
    public:
        string leagueName;
        float permanentLeagueCoeff, seasonalLeagueCoeff;
};

class Club: public League{
    public:
        string clubName;
        float permanentClubCoeff, seasonalClubCoeff;

    int generateClub(float totalAverageMatchRating, float seasonAverageMatchRating){
        /*
        
            Generate 3 options for the players to pick. 
            The average match rating stat will be used to generate clubs(only clubs with equivalent or lower permanentCoeff 
            should be generated as options)

            For the first initialization(picking first club){
                two clubs from the same continent
                one club from foreign continent
            }
        
        */
    }
};

class Player: public Club{
    public:
        string playerName;
        int playerNumber, position, playerAge, season[20];

        int goals, assists, cleanSheets, apps, seasonGoals[20], seasonAssists[20], seasonCleanSheets[20];
        float matchRating, seasonAverageMatchRating[20], totalAverageMatchRating;

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

class Season: public Player{
    public:
        int seasonNumber[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

        void simulateTwoSeasons(){
            /*
            
                I HAVE NO IDEA HOW TO SIMULATE !!!
            
            */
        }

};

int main(){
    string playerName;
    int playerNationality, position;

    cout<<"Please enter your player name: ";
    cin>>playerName;

    cout<<endl<<"1. Asian\n"<<"2. European\n3. African\n4. North American\n5. South American\n"<<endl;
    cout<<"Please enter your nationality (1-5): ";
    cin>>playerNationality;

    cout<<endl<<"1. STRIKER\n2. WINGER\n3. CENTRAL ATTACKING MIDFIELDER\n4. CENTRAL MIDFIELDER\n5. CENTRAL DEFENSIVE MIDFIELDER\n6. CENTRE BACK\n7. FULL BACK\n8. GOALKEEPER\n";
    cout<<endl<<"Please enter your player position (1-8): ";
    cin>>position;

    Player player1; 
    player1.init(playerName, playerNationality, position);

    
    return 0;
}
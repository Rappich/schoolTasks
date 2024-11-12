#include <iostream>
#include <string>
using namespace std;

class TeamPlayer

{
    private:
    string playerId;
    string name;
    string position;
    int age;
    int gamesPlayed;

    public:

    TeamPlayer(string playerId, string name, string position, int age, int gamesPlayed)
    {
        this->playerId = playerId;
        this->name = name;
        this->position = position;
        this->age = age;
        this->gamesPlayed = gamesPlayed;
    }
    void addGamesPlayed(int gp)
    {
        if(gp >= 0)
        {
        gamesPlayed += gp;
        std::cout << gp << ": Games added to "<< name << " history." << std::endl;
        }
        else 
        {
        std::cout << "Error: cannot add a negative integer" << std::endl;
        }
    }
    void getPlayerInfo()
    {
        std::cout << "Player ID: " << playerId << std::endl 
                  << "Name: " << name << std::endl
                  << "Position: " << position << std::endl
                  << "Age: " << age << std::endl
                  << "Games played: " << gamesPlayed << std::endl<< std::endl<< std::endl;
    }
    
    void resetGamesPlayed()
    {
        if (gamesPlayed < 0)
        {
            cout << "Amount of games can't be negative!" << endl;
        }
        else
        {
            gamesPlayed = 0;
            cout << "Games played is reset to ZERO!" << endl;
        }
    }
};

int main()

{
    TeamPlayer player1("15", "Ronny Edstrom", "Forward", 15, 6);
    TeamPlayer player2("9", "Benny Edstrom", "Backward", 9, 2);

    cout << "Starting team: " << endl;
    player1.getPlayerInfo();
    player2.getPlayerInfo();

    cout << "Dude played some games" << endl;
    player1.addGamesPlayed(2);
    player2.addGamesPlayed(16);

    cout << "season ended, they played " << endl;
    player1.getPlayerInfo();
    player2.getPlayerInfo();

    cout << "reset" << endl;
    player1.resetGamesPlayed();
    
    cout << "last" << endl;
    player1.getPlayerInfo();
    player2.getPlayerInfo();

    
    return 0;

}
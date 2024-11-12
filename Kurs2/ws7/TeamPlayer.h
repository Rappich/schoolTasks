#ifndef TEAMPLAYER_H
#define TEAMPLAYER_H

#include <string>

class TeamPlayer
{
private:
    std::string player_id;
    std::string name;
    std::string position;
    int age;
    int games_played;
    int scored_goals;

public:
    // Constructor to initialize player details
    TeamPlayer(const std::string& id, const std::string& playerName, int playerAge, const std::string& playerPosition);

    // Methods to manage the player's data
    void addGamePlayed();                   // Increment games played by 1
    void resetGamesPlayed();                // Reset games played to 0
    void updateScoredGoals(int goals);     // Update number of goals scored
    std::string getPlayerInfo() const;     // Return the player's information as a string
    int getScoredGoals() const;            // Return the number of scored goals
    
    // Getter methods to access private variables
    std::string getPlayerId() const;
    std::string getName() const;
    std::string getPosition() const;
    int getAge() const;
    int getGamesPlayed() const;
};

#endif // TEAMPLAYER_H

#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
#include "TeamPlayer.h"

class Team
{
private:
    std::string team_name;           // Team's name
    std::vector<TeamPlayer> players; // Vector to store TeamPlayer objects

public:
    // Constructor to initialize the team with a name
    Team(const std::string& name);

    // Methods to manage team
    void addPlayer(const TeamPlayer& player);              // Add a player
    TeamPlayer* findPlayerById(int playerId);              // Find a player by their ID
    bool updatePlayerStats(int playerId, int gamesPlayed, int goalsScored); // Update player stats
    void displayRoster() const;                            // Display the team roster
};

#endif // TEAM_H

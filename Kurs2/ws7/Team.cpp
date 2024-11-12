#include "Team.h"
#include <iostream>

Team::Team(const std::string& name) : team_name(name) {}

void Team::addPlayer(const TeamPlayer& player) 
{
    players.push_back(player);
}

TeamPlayer* Team::findPlayerById(int playerId) 
{
    for (auto& player : players) {
        if (player.getPlayerId() == playerId) 
        {
            return &player;
        }
    }
    return nullptr;
}

bool Team::updatePlayerStats(int playerId, int gamesPlayed, int goalsScored) 
{
    TeamPlayer* player = findPlayerById(playerId);
    if (player != nullptr) {
        player->setGamesPlayed(gamesPlayed);
        player->setScoredGoals(goalsScored);  // Update goals scored
        return true;  // Return true if stats were successfully updated
    }
    return false;  // Return false if player not found
}

// Display the entire team roster
void Team::displayRoster() const {
    std::cout << "Team: " << team_name << std::endl;
    for (const auto& player : players) {
        std::cout << "Player ID: " << player.getPlayerId()
                  << ", Name: " << player.getName()
                  << ", Position: " << player.getPosition()
                  << ", Games Played: " << player.getGamesPlayed()
                  << ", Goals Scored: " << player.getScoredGoals() << std::endl;
    }
}

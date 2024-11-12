#include "TeamPlayer.h"
#include <iostream>

TeamPlayer::TeamPlayer(const std::string& id, const std::string& playerName, int playerAge, const std::string& playerPosition)
{
    this->player_id = id;           
    this->name = playerName;        
    this->age = playerAge;          
    this->position = playerPosition;
    this->games_played = 0;        
    this->scored_goals = 0;         
}

void TeamPlayer::addGamePlayed() 
{
    this->games_played++;
}

void TeamPlayer::resetGamesPlayed() 
{
    if (this->games_played <= 0) 
    {
        std::cout << "Error: Cannot have a negative games played count." << std::endl;
        return;
    }
    this->games_played = 0;
}

void TeamPlayer::updateScoredGoals(int goals) 
{
    if (goals > 0) 
    {
        this->scored_goals += goals;
    } else 
    {
        std::cout << "Error: Number of goals must be positive." << std::endl;
    }
}

std::string TeamPlayer::getPlayerInfo() const
{
    return "Player ID: " + this->player_id +
           "\nName: " + this->name +
           "\nAge: " + std::to_string(this->age) +
           "\nPosition: " + this->position +
           "\nGames Played: " + std::to_string(this->games_played) + "\n";
}

int TeamPlayer::getScoredGoals() const 
{
    return this->scored_goals;  
}

std::string TeamPlayer::getPlayerId() const 
{
    return this->player_id;
}

std::string TeamPlayer::getName() const
{
    return this->name;
}

std::string TeamPlayer::getPosition() const
{
    return this->position;  
}

int TeamPlayer::getAge() const 
{
    return this->age;
}

int TeamPlayer::getGamesPlayed() const 
{
    return this->games_played;
}

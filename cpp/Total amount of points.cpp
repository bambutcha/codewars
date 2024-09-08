#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

int points(array<string, 10> games) {
    int totalPoints = 0;

    for(string game : games){
        int ownScore = stoi(game.substr(0,1));
        int opponentScore = stoi(game.substr(2,1));

        if (ownScore > opponentScore){
            totalPoints += 3;
        } else if (ownScore == opponentScore) {
            totalPoints += 1;
        }
    }

    return totalPoints;
}

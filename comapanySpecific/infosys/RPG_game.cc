/*
While playing an RPG game, you were assigned to complete one of the hardest quests in this game. There are n monsters you’ll need to defeat in this quest. Each monster i is described with two integer numbers – poweri and bonusi. To defeat this monster, you’ll need at least poweri experience points. If you try fighting this monster without having enough experience points, you lose immediately. You will also gain bonusi experience points if you defeat this monster. You can defeat monsters in any order.

The quest turned out to be very hard – you try to defeat the monsters but keep losing repeatedly. Your friend told you that this quest is impossible to complete. Knowing that, you’re interested, what is the maximum possible number of monsters you can defeat?

Input		
2
123
78
130
10
0	

Output
2	


Output Description
Initial experience level is 123 points.
Defeat the first monster having power of 78 and bonus of 10. Experience level is now 123+10=133.
Defeat the second monster.
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    int nMon, nExp;
    cin >> nMon >> nExp;
    map<int, int> monster;

    // Reading monster powers and bonuses
    int power, bonus;
    for (int i = 0; i < nMon; ++i) {
        cin >> power;
        cin >> bonus;
        monster[power] = bonus;
    }

    int counter = 0;
    // Iterate through the sorted map
    for (auto iter = monster.begin(); iter != monster.end(); ++iter) {
        int requiredPower = iter->first;
        int bonusExperience = iter->second;

        if (nExp >= requiredPower) {
            nExp += bonusExperience;
            ++counter;
        } else {
            break;
        }
    }

    cout << "OUTPUT: " << counter << endl;

    return 0;
}

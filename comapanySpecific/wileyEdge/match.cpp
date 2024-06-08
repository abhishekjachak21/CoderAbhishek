/*
Problem Statementt :
The number of goals achieved by two football teams in matches in a league is given in the form of two lists. For each match of team B. Compute the total number of matches of team A where team A has scored less than or equal to the number of goals scored by team B in that match.

Example : 
team A =[ 1,2,3]
team B =[ 2,4]
Team A has played three matches and has scored team A =[1,2,3] goals in each match respectively. Team B has played two matches and has scored team B = [2,4] goals in each match respectively. For 2 goals scored by team B in its first match, team A has 2 matches with scores 1,2 and 3 hence , the answer is [2,3].
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> ans( vector<int>& teamA, vector<int>& teamB) {
    // Create an unordered map to store the frequency of goals scored by team A
    unordered_map<int, int> frequency;
    for (int goals : teamA) {
        frequency[goals]++;
    }

    // Vector to store the result
    vector<int> result;

    // Iterate through the goals scored by team B
    for (int goals : teamB) {
        int count = 0;
        // Iterate through the frequency map and count matches where team A has scored less than or equal to goals by team B
        for (auto it = frequency.begin(); it != frequency.end(); it++) {
            if (it->first <= goals) {
                count += it->second;
            }
        }
        result.push_back(count);
    }

    return result;
}

int main() {
    // Example input
    vector<int> teamA = {1, 4, 2, 4};
    vector<int> teamB = {3, 5};

    // Calculate the result
    vector<int> result = ans(teamA, teamB);

    // Print the result
    cout << "Result: ";
    for (int matches : result) {
        cout << matches << " ";
    }
    cout << endl;

    return 0;
}

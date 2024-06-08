/*
Problem Statement  :
Anirudh loves to play games but his father is very strict. But one day his father agreed to get him a new game if he solves the following problem –
Given an array of Integers, determine the number of moves to make all elements equal. Each move consists of choosing all but 1 element and Incrementing their values by 1. Can you help Anirudh?

Example :
numbers= [3, 4, 6, 6, 3]
Choose 4 of the 5 elements during each move and Increment each of their values by one. Indexing begins at 1. It takes 7 moves as follows:
*/
#include<bits/stdc++.h>
using namespace std;

int minMovesToMakeElementsEqual(vector<int>& numbers) {
    int n = numbers.size();
    int maxElement = *max_element(numbers.begin(), numbers.end());
    int sum = 0;
    
    for (int num : numbers) {
        sum += num;
    }
    
    // Number of moves required
    int moves = (maxElement * n) - sum -1;
    return moves;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int result = minMovesToMakeElementsEqual(numbers);
    cout << result << endl;

    return 1;
}

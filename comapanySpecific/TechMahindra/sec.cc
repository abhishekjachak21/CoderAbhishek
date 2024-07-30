#include <iostream>
#include <vector>
#include <algorithm> // I added this later
using namespace std;

vector<int> maxRevenue(vector<vector<int>>& salesRecord) {
    vector<int> answer;
    
    // Iterate over each day's sales record
    for (const auto& daySales : salesRecord) {
        // Find the maximum revenue for the current day
        int maxRevenueDay = *max_element(daySales.begin(), daySales.end());
        answer.push_back(maxRevenueDay); // Store the maximum revenue
    }

    return answer;
}

int main() {
    int salesRecord_row, salesRecord_col;

    // Input for salesRecord
    cin >> salesRecord_row >> salesRecord_col;

    vector<vector<int>> salesRecord;

    for (int idx = 0; idx < salesRecord_row; idx++) {
        vector<int> temp_vector;
        for (int jdx = 0; jdx < salesRecord_col; jdx++) {
            int temp;
            cin >> temp;
            temp_vector.push_back(temp);
        }
        salesRecord.push_back(temp_vector);
    }

    // Call maxRevenue to get the result
    vector<int> result = maxRevenue(salesRecord);
    
    // Output the result
    for (int idx = 0; idx < result.size(); idx++) {
        cout << result[idx] << " ";
    }
    cout << endl;

    return 0;
}




/*
//Question

Question

A company has a sales record of N products for M days. The company wants to know the maximum revenue received from a given product among the N products each day. Write an algorithm to find the highest revenue received each day.

Input

The first line of the input consists of two space-separated integers days and products, representing the days (M) and the products in the sales record (N), respectively. The next M lines consist of N space- separated integers - salesRecord, representing the grid of sales revenue (can be positive or negative) received from each product each day.

Output

Print M space-separated integers representing the maximum revenue received each day.

Example

Input:

3 4
100 198 333 323
122 232 221 111
223 565 245 764

Output:

333 232 764

Explanation:

The maximum revenue received on the first day is 333, followed by a maximum revenue of 232 on the second day and a maximum revenue of 764 on the third day.

*/
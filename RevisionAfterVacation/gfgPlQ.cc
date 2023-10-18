// #include<iostream>
// using namespace std;

// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     int weightsArr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>weightsArr[i];
//     }
//     Solution ob;
//     cout<<ob.MinCost(n,weightsArr)<<endl;
// }
// }


//     class Solution{
// public:
//     long long MinCost(int n, int weightsArr[]){
        
//         nth_element(weightsArr, weightsArr + n / 2, weightsArr + n);
//         int k = weightsArr[n / 2];

//         long long minCost = 0;

//         // Calculate the cost using the chosen k
//         for (int i = 0; i < n; i++) {
//             minCost += static_cast<long long>(weightsArr[i]) * abs(k - i);
//         }

//         return minCost;
//     }
// };
    







/* vector<int> possiblePathSum(int n, int m, vector<vector<int>> &grid, int q, vector<int> &queries) {
        vector<vector<vector<int>>> dynPro(n, vector<vector<int>>(m, vector<int>(2)));
    
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dynPro[i][j][0] = INT_MAX;
                dynPro[i][j][1] = INT_MIN;
            }
        }
        
        dynPro[0][0][0] = grid[0][0];
        dynPro[0][0][1] = grid[0][0];
        
        for(int i = 1; i < n; i++) {
            dynPro[i][0][0] = grid[i][0] + dynPro[i - 1][0][0];
            dynPro[i][0][1] = grid[i][0] + dynPro[i - 1][0][1];
        }
        
        for(int j = 1; j < m; j++) {
            dynPro[0][j][0] = grid[0][j] + dynPro[0][j - 1][0];
            dynPro[0][j][1] = grid[0][j] + dynPro[0][j - 1][1];
        }
        
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                dynPro[i][j][0] = grid[i][j] + min(dynPro[i - 1][j][0], dynPro[i][j - 1][0]);
                dynPro[i][j][1] = grid[i][j] + max(dynPro[i - 1][j][1], dynPro[i][j - 1][1]);
            }
        }
        
        int k = abs(grid[0][0]);
        vector<int> ans(queries.size());
        
        for(int i = 0; i < queries.size(); i++) {
            int x = queries[i];
            
            if(x % k != 0) {
                ans[i] = 0;
            } else {
                if(dynPro[n - 1][m - 1][0] > x || dynPro[n - 1][m - 1][1] < x) {
                    ans[i] = 0;
                } else {
                    ans[i] = (((x - dynPro[n - 1][m - 1][0]) / k) % 2 == 0 ? 1 : 0);
                }
            }
        }
        
        return ans;
 */










long long MinCost(int n, int arr[]){
        long long a=0;
        long long b=n-1;
        while(a<b){
            int mid = a + (b-a)/2;
             int sumMiddle = 0;
             int sumMiddleplusone = 0;
             int hello;
             for(int i=0;i<n;i++){
                 long long diffMid = abs(mid-i);
                 long long diffMidplusone = abs(mid + 1 -i);
                 sumMiddle=sumMiddle+ arr[i] * diffMid;
                 sumMiddleplusone=sumMiddleplusone+ arr[i] * diffMidplusone;
             }
             if(sumMiddle <= sumMiddleplusone){
                 hello = mid;
                 b=hello;
             }else{
                 a = mid+1;
             }
             }
             int k =a;
             long long result=0;
             for(int i=0;i<n;i++){
                 int diff = abs(k-i);
                 result=result+ (arr[i] * diff);
             }
             return result;}
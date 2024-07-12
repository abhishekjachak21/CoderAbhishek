#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string trim(string);

vector<int>getDivisors(int num){
    vector<int>divisors;
    for(int i=1;i*i <= num; ++i){
         if(num%i ==0){
            divisors.push_back(i);
            if(i != num/i){
                divisors.push_back(num/i);
            }
         }
    }
    return divisors;
}


int get_ans(int N, const vector<int>& A) {
    // Write your code here

     vector<int>GCDs;
     for(int num:A){
        vector<int>divisors = getDivisors(num);
        for(int div: divisors){
            if(div>1 && find(GCDs.begin(), GCDs.end(), div) == GCDs.end()){
                GCDs.push_back(div);
            }
        }

     }
     int maxLen = 0;

     for(int g: GCDs){
        vector<int>dp(N,0);
        int currMax = 0;

         for(int i=0;i<N;++i){
            if(A[i] % g ==0){
                dp[i] =1;
                for(int j=0; j<i ; ++j){
                    if(A[j] <= A[i] && A[j]%g ==0){
                        dp[i] = max(dp[i],dp[j]+1);                 
                    }
                }
                currMax = max(currMax, dp[i]);
            }
         }

         maxLen = max(maxLen, currMax);

     }

     return maxLen;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string inputline;

    getline(cin, inputline);
    int N = stoi(trim(inputline));
    
    vector<int> A(N);
    for(int j=0; j<N; j++) {
        getline(cin, inputline);
        A[j] = stoi(trim(inputline));
    }

    int result = get_ans(N, A);

    cout << result << "\n";

    return 0;
}


/* Utility functions. Don't modify these */
string trim(string str){
  if(str.empty())
      return str;

  size_t firstScan = str.find_first_not_of(' ');
  size_t first     = firstScan == string::npos ? str.length() : firstScan;
  size_t last      = str.find_last_not_of(' ');
  return str.substr(first, last-first+1);
}







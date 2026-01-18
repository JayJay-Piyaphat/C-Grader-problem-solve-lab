#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool Pair(char a, char b) {
    return (a == 'A' && b == 'U') || (a == 'U' && b == 'A') ||
           (a == 'C' && b == 'G') || (a == 'G' && b == 'C');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int n = s.length();
    
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int len = 5; len < n; len++) {
        for (int i = 0; i + len < n; i++) {
            int j = i + len;
            
            dp[i][j] = dp[i][j-1];
            
            for (int k = i; k < j - 4; k++) {
                if (Pair(s[k], s[j])) {
                    int val = 1;
                    if (k > i) val += dp[i][k-1];
                    if (k + 1 < j) val += dp[k+1][j-1];
                    dp[i][j] = max(dp[i][j], val);
                }
            }
        }
    }
    
    cout << dp[0][n-1] << '\n';
    
    return 0;
}
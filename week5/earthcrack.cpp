#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    vector<long long> results;
    while (T--) {
        int M, N;
        cin >> M >> N;
        
        vector<vector<int>> energy(M, vector<int>(N));
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> energy[i][j];
            }
        }
        
        vector<vector<long long>> dp(M, vector<long long>(N, 1e18));
        
        for (int j = 0; j < N; j++) {
            dp[0][j] = energy[0][j];
        }
        
        for (int i = 1; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (j > 0 && dp[i-1][j-1] != 1e18) {
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1] + energy[i][j]);
                }
                if (dp[i-1][j] != 1e18) {
                    dp[i][j] = min(dp[i][j], dp[i-1][j] + energy[i][j]);
                }
                if (j < N-1 && dp[i-1][j+1] != 1e18) {
                    dp[i][j] = min(dp[i][j], dp[i-1][j+1] + energy[i][j]);
                }
            }
        }
        
        long long result = 1e18;
        for (int j = 0; j < N; j++) {
            result = min(result, dp[M-1][j]);
        }
        
        results.push_back(result);
    }
        for (long long r : results) {
            cout << r << '\n';
        }
    return 0;
}
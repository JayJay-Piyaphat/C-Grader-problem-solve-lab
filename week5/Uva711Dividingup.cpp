#include <iostream>
#include <vector>
#include <array>
using namespace std;

bool subsetsum(array<int, 6> counts, int target){
    if (target < 0) {
        return false;
    }
    
    vector<int> dp(target + 1, -1);
    dp[0] = 0;
    
    for (int weight = 1; weight <= 6; weight++) {
        int count = counts[weight - 1];
        if (count == 0) continue;
        
        for (int j = 0; j <= target; j++) {
            if (dp[j] >= 0) {
                dp[j] = count;
            } else if (j >= weight && dp[j - weight] > 0) {
                dp[j] = dp[j - weight] - 1;
            }
        }
    }
    
    return dp[target] >= 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<array<int, 6>> results;
    vector<int> targets;
    
    while (true) {
        int a[6] = {0};
        int sum = 0;
        
        for (int i = 0; i < 6; ++i) {
            cin >> a[i];
            sum += a[i] * (i + 1);
        }   
        
        results.push_back({a[0], a[1], a[2], a[3], a[4], a[5]});
        
        if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0) {
            break;
        }
        
        if (sum % 2 == 0) {
            targets.push_back(sum / 2);
        } else {
            targets.push_back(-1);
        }
    }
    
    for (int i = 0; i < results.size() - 1; i++) {
        cout << "Collection #" << i + 1 << ":" << '\n';
        
        if (targets[i] == -1 || !subsetsum(results[i], targets[i])) {
            cout << "Can't be divided." << '\n';
        } else {
            cout << "Can be divided." << '\n';
        }
        cout << '\n';
    }

    return 0;   
}
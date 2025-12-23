#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pass[n];
    bool visited[n] = {false};
    
    for (int i = 0; i < n; i++) {
        int give;
        cin >> give;
        pass[i] = give - 1;
    }
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int len = 0, curr = i;
            
            while (!visited[curr]) {
                visited[curr] = true;
                curr = pass[curr];
                len++;
            }
            
            if (len > ans) {
                ans = len;
            }
        }
    }
    
    cout << ans;
    return 0;
}
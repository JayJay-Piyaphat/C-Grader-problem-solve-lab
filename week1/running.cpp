#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long N = 0, K = 0;
    double fastest = 1e18;
    cin >> N >> K;

    long long left = 0;
    double runtime[N];

    for (int i = 0; i < N; i++) {
        cin >> runtime[i];
        double total = runtime[i] * K;
        if (total < fastest) {
            fastest = total;
        }
    }

    for (int i = 0; i < N; i++) {
        double laps = fastest / runtime[i];
        if (laps > (K - 1) - 1e-9) {
            left++;
        }
    }

    cout << left;
    return 0;
}

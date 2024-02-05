#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int p[20];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    long sumWeights = 0;
    for(int i = 0; i < n; i++) {
        sumWeights += p[i];
    }

    long ans = sumWeights;
    for(int i = 0; i < ((1 << n)-1); i++) {
        long csum = 0;
        for(int j = 0; j < n; j++) {
            if(i&(1<<j)) {
                csum += p[j];
            }
        }
        ans = min(ans, abs(sumWeights - 2*csum));
    }
    cout << ans << "\n";
    return 0;
}
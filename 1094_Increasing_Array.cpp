#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int prev;
    long long ans = 0;
    cin >> prev;
    for(int i = 1; i < n; i++) {
        int cur;
        cin >> cur;
        if(cur > prev) {
            prev = cur;
        }
        else {
            ans += (prev-cur);
        }
    }
    cout << ans << endl;
    return 0;
}
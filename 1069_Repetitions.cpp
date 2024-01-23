#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    const int n = s.size();
    int curCount = 1;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) {
            curCount++;
        }
        else {
            ans = max(ans, curCount);
            curCount = 1;
        }
    }
    ans = max(ans, curCount);
    cout << ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0) {
        ans += (n / 5);
        n = n / 5;
    }
    cout << ans << "\n";
    return 0;
}
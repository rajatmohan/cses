#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int total = (1 << n);
    for(int i = 0; i < total; i++) {
        int prevDigit = 0;
        for(int d = n-1; d >= 0; d--) {
            int dthDigit = ((i & (1<<d))>>d);
            int curDigit = (prevDigit^dthDigit);
            cout << curDigit;
            prevDigit = dthDigit;
        }
        cout << "\n";
    }
    return 0;
}

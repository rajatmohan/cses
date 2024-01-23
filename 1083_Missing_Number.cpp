#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int xored = 0;
    int total = n;
    for(int i = 1; i <= n-1; i++) {
        int cur;
        cin >> cur;
        xored = xored^cur;
        total = total^i;
    }
    cout << (total^xored) << "\n";
    return 0;
}
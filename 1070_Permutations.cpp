#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n == 1) {
        cout << 1;
    }
    else if(n <= 3) {
        cout << "NO SOLUTION";
    }
    else {
        for(int cur = 2; cur <= n; cur = cur + 2) {
            cout << cur << " ";
        }
        for(int cur = 1; cur <= n; cur = cur + 2) {
            cout << cur << " ";
        }
    }
    cout << endl;
    return 0;
}
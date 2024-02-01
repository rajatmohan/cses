#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << "0" << "\n";
    for(ll i = 2; i <= n; i++) {
        cout << ((i*i)*((i*i)-1) - 8*(i-1)*(i-2)) / 2 << "\n";
    }
    return 0;
}
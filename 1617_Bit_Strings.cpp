#include <iostream>
#define ll long long
using namespace std;

long moduloPower(long base, long exponent, long modulo) {
    long ans = 1;
    while(exponent) {
        if(exponent&1) {
            ans = (ans * base) % modulo;
        }
        base = (base * base) % modulo;
        exponent = (exponent >> 1);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << moduloPower(2, n, 1e9+7) << "\n";
    return 0;
}
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[200005];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
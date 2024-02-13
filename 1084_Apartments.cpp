#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int applicant[200005];
    int apartment[200005];
    for(int i = 0; i < n; i++) {
        cin >> applicant[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> apartment[i];
    }
    sort(applicant, applicant+n);
    sort(apartment, apartment+m);

    int ans = 0;
    int i = 0;
    int j = 0;
    while(i < n && j < m) {
        if(applicant[i] < apartment[j] - k) {
            i++;
        }
        else if(applicant[i] > apartment[j] + k) {
            j++;
        }
        else {
            i++;
            j++;
            ans++;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
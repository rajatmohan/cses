#include <algorithm>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int count[26] = {0};
    int n = s.size();
    for(int i = 0; i < n; i++) {
        count[s[i] - 'A']++;
    }
    string left;
    int middle = -1;
    int oddCount = 0;
    for(int i = 0; i < 26; i++) {
        if(count[i] % 2 != 0) {
            oddCount++;
            middle = i;
        }
        for(int j = 0; j < count[i] / 2; j++) {
            left += (char)(i + 'A');
        }
    }
    if(oddCount > 1) {
        cout << "NO SOLUTION";
    }
    else {
        string ans = left;
        if(middle != -1) {
            ans += (char)(middle + 'A');
        }
        reverse(left.begin(), left.end());
        ans += left;
        cout << ans;
    }
    cout << "\n";
    return 0;
}
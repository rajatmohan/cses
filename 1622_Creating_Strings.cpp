#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#define ll long long
using namespace std;
void find(int i, int& n, string s, set<string>& ans) {
    if(i == n) {
        ans.insert(s);
        return;
    }
    for(int j = i; j < n; j++) {
        swap(s[i], s[j]);
        find(i+1, n, s, ans);
        swap(s[i], s[j]);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    set<string> ans;
    find(0, n, s, ans);
    cout << ans.size() << "\n";
    for(string s: ans) {
        cout << s << "\n";
    }
    return 0;
}
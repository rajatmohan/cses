#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int y, x;
        cin >> y >> x;
        // cell layer is the maximum of row no and column no
        ll layer = max(y, x);
        ll alreadyPassedCount = (layer-1)*(layer-1);
        if(layer % 2 == 0) {
            // if layer no is even then layer is starting from 
            // first row and column no x
            alreadyPassedCount += y;
            alreadyPassedCount += (layer-x);
        }
        else {
            // if layer no is odd then layer is starting from 
            // first column and row no y
            alreadyPassedCount += x;
            alreadyPassedCount += (layer-y);
        }
        cout << alreadyPassedCount << "\n";
    }
    return 0;
}
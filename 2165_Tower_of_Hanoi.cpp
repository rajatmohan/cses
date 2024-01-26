#include <iostream>
#define ll long long
using namespace std;

void find(int n, int leftStack, int middleStack, int rightStack) {
    if(n == 1) {
        cout << leftStack << " " << rightStack << "\n";
        return;
    }
    find(n-1, leftStack, rightStack, middleStack);
    cout << leftStack << " " << rightStack << "\n";
    find(n-1, middleStack, leftStack, rightStack);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    // 1) transfer n-1 disks from leftStack to middleStack using rightStack as 
    // temporary stack
    // 2) tranfer last disk from leftStack to rightStack
    // 3) tranfer n-1 disk from middleStack to rightStack using leftStack as 
    // temporary stack
    // T(n) = T(n-1) + 1 + T(n-1)
    // T(n) = 2*T(n-1) + 1
    // T(n) = 2^n - 1
    int numMoves = (1 << n) - 1;
    cout << numMoves << "\n";
    find(n, 1, 2, 3);
    return 0;
}
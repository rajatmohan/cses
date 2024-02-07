#include <iostream>
using namespace std;

const int n = 8;
bool isValid(int rowNo, int colNo, string chessBoard[n]) {
    // check in colNo column
    for(int i = 0; i < n; i++) {
        if(chessBoard[i][colNo] == 'Q') {
            return false;
        }
    }
    {
        // move upwards and leftwards
        int i = rowNo;
        int j = colNo;
        while(i >= 0 && j >= 0) {
            if(chessBoard[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }
    }
    {
        // move upwards and rightwards
        int i = rowNo;
        int j = colNo;
        while(i >= 0 && j < n) {
            if(chessBoard[i][j] == 'Q') {
                return false;
            }
            i--;
            j++;
        }
    }
    return true;
}

void find(int rowNo, string chessBoard[n], int& ans) {
    if(rowNo == n) {
        ans++;
        return;
    }
    for(int colNo = 0; colNo < n; colNo++) {
        if(chessBoard[rowNo][colNo] != '*' && isValid(rowNo, colNo, chessBoard)) {
            chessBoard[rowNo][colNo] = 'Q';
            find(rowNo+1, chessBoard, ans);
            chessBoard[rowNo][colNo] = '.';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string chessBoard[n];
    for(int i = 0; i < n; i++) {
        cin >> chessBoard[i];
    }
    int ans = 0;
    find(0, chessBoard, ans);
    cout << ans << "\n";
    return 0;
}
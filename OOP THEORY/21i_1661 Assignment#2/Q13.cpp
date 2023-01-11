#include<iostream>
using namespace std;

bool SafeToPlace(int ** board, int x, int y, int n) {
	int row=0, col=0;
    while(row < x) {
        if (board[row][y] == 1) {
            return false;
        }
        row++;
    }
    
    for(row=x,col=y; row >= 0 && col >= 0; row--,col--) {
        if (board[row][col] == 1)
            return false;
    }
    
    for(row=x,col=y; row >= 0 && col >= 0; row--,col++) {
        if (board[row][col] == 1)
            return false;
    }
    	return true;
}

bool solveQueen(int ** board, int Number, int col) { //Since this is backtracking the first element of the array represents the columns 
    if (col >= Number)
        return true;
    
    int row = 0;
    while(row < Number) { //Running loop uptill our entered board.
        if (SafeToPlace(board, col, row, Number)) {	//If it is safe to enter value then print one.
            board[col][row] = 1;

            if (solveQueen(board, Number, col+1)) {
                return true;
            }
            board[col][row] = 0;
        }
        row++;
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter size of the board: ";
    cin>>n;
    int ** board = new int * [n];
    for (int i = 0; i < n; i++) {
        board[i] = new int[n];
        int j = 0;
        while ( j < n) {
            board[i][j] = 0;
            j++;
        }
    }
    
    if (solveQueen(board, n, 0)){
    	cout<<"This represents where you can place the queen without it attacking any of the other queens."<<endl;
        for (int i = 0; i < n; i++){
          int j = 0;
          while ( j < n){
                cout << board[i][j] << " ";
                j++;
            }
            cout << endl;
        }
    }
    
    	else	cout<<"Enter more than 3...";
	
return 0;
}

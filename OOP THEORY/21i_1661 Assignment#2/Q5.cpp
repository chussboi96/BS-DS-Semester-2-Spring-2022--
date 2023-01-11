#include <iostream>
using namespace std;
int equal(int** matrix1, int** matrix2, int row, int col) {
    if(col < 0) {
        col = row;
        row = row - 1;
    }
    if(row < 0) 
        return 1;
    
    if(matrix1[row][col] == matrix2[row][col]) 
        return equal(matrix1, matrix2, row, col-1);
    
    else 
        return 0;
    
}

int main() {

    int **ptr1 = new int*[3];
    int **ptr2 = new int*[3];
    for(int i=0; i<3; i++) {
        ptr1[i] = new int[3];
        ptr2[i] = new int[3];
    }
    
     cout<<"Array 1: ";
    
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		while (j < 3)
		{
			cout << "Enter value at ptr1[" << i << "][" << j << "]: ";
			cin>>ptr1[i][j];
			j++;
		}
	}
		
	cout<<"Array 2: ";
	for (int i = 0; i < 3; i++){
		int j = 0;
		while (j < 3){
			cout << "Enter value at ptr2[" << i << "][" << j << "]: ";
			cin>>ptr2[i][j];
			j++;
		}
	}

    cout <<"The array returns value : " << equal(ptr1, ptr2, 2, 2);

    return 0;
}

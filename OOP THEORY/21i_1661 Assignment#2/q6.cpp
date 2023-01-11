#include<iostream>
using namespace std;
void sum( int **array, int row, int column, int &evenSum, int &oddSum );

int main(){
	int row, col, evenSum = 0, oddSum = 0;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"Enter number of columns: ";
	cin>>col;
	
	int **arr = new int*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	cout<<"Enter values of array: ";
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++)
			cin>>arr[i][j];		
	}
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}
	
	sum(arr, row-1, col-1, evenSum, oddSum );
	cout<<"The Sum of Even elements is: "<<evenSum<<endl;
	cout<<"The Sum of Odd elemnts is: " <<oddSum;
}
void sum(int **array, int row, int column, int &evenSum, int &oddSum ){
	
	if ( array[row][column] % 2 == 0)
		evenSum +=  array[row][column];
	
	else
	  oddSum += array[row][column];	
	
	if (row > 0)
		return sum(array, row-1, column, evenSum, oddSum);
		
	if (column > 0)
		return sum(array, row, column-1, evenSum, oddSum);

	return;
}

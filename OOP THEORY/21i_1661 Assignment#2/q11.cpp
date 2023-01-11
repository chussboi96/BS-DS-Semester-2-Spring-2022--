#include<iostream>
using namespace std;
void printTriangle ( int arr[] /*initial array*/, int size, int **sumTriangle /*sum triangle*/,
					 int row /*row size of sum triangle*/ , int column /*column size of sum triangle*/ );
int main(){
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	
	int arr[size];
	cout<<"Enter elements of array: "<<endl;
	for(int i= 0; i< size; i++)
	cin>>arr[i];
	int **sumTriangle = new int*[size];
	for(int i= 0; i< size; i++)
	sumTriangle[i] = new int[size];
	
	
	printTriangle(arr, size, sumTriangle, size, size);
	
	return 0;
}
void printTriangle(int arr[] , int size , int **sumTriangle , int row , int column ){
	if(row==1)
		return;
	

	if(column==1){
		sumTriangle[row-1]= arr;
		printTriangle(sumTriangle[row-2], size-1, sumTriangle, row-1, size-1);
		return;
	}

	int sum = arr[column-1]+arr[column-2];
	sumTriangle[row-2][column-2] = sum;
	printTriangle(arr, size, sumTriangle, row, column-1);
	
	for (int i=0; i<size; i++){
			cout<<sumTriangle[row-size][i]<<" ";
		}
		cout<<endl;
	
  return;
}



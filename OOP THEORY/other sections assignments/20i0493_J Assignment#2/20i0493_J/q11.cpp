
void printSumTriangle(int arr[] , int size , int **sumTriangle , int row , int column )
{
	if(row==1){
		return;
	}

	if(column==1){
		sumTriangle[row-1]=arr;
		printSumTriangle(sumTriangle[row-2],size-1,sumTriangle,row-1,size-1);
		return;
	}

	int sum = arr[column-1]+arr[column-2];
	sumTriangle[row-2][column-2] = sum;
	printSumTriangle(arr,size,sumTriangle,row,column-1);
	
	return;
  
}


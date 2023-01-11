
void sum(int **array, int row, int column, int &evenSum, int &oddSum, int size)
{
	if(row < 0){
		return;
	}
	
	if(column < 0){
		sum(array, row-1, size, evenSum, oddSum,size);
		return;
		
	}
	
	if(array[row][column] % 2 == 0){
		evenSum += 1;
	}else{
		oddSum += 1;
	}
	
	
	sum(array, row, column-1, evenSum, oddSum, size);
	return;

}


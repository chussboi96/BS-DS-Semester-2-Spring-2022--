
bool equal(int ** matrix1, int** matrix2, int row, int column,int size)
{
	if(row < 0){
		return true;
	}
	if(column < 0){
		//int cols = sizeof (matrix1[0]) / sizeof(int);
		return equal(matrix1,matrix2, row-1,size,size);

	}	
	
	if(matrix1[row][column] != matrix2[row][column]){
		return false;
	}

	return equal(matrix1,matrix2, row,column-1,size);

}


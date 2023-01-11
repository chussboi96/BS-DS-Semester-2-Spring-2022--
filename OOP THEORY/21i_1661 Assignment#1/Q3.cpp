#include <iostream>
using namespace std ;
int ** magicSquare ( int size ){
	int **array = new int*[size];
	
	for (int i=0; i<size; i++)
		array[i] = new int[size];
	
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++)
			array[i][j] = 0;
	}
	
	int num = 1;
	int current_row = 0;
	int current_col = size/2;
	array[current_row][current_col] = num;
	
	//cout<<array[current_row][current_col] <<endl<<endl;
	while (num < (size*size))
	{
		if (current_row == 0 && current_col != (size-1) )
		{
			current_row += (size-1);
			current_col++;
			if (array[current_row][current_col] == 0)
			{
			num++;
			array[current_row][current_col] = num;
			}
			else
			{
				current_row -= (size-1);
				current_col--;
				current_row++;
				num++;
				array[current_row][current_col] = num;
			}
		}
		else if (current_row != 0 && current_col == (size-1))
		{
			current_row--;
			current_col -= (size-1);
			if (array[current_row][current_col] == 0)
			{
			num++;
			array[current_row][current_col] = num;
			}
			else
			{
				current_row++;
				current_col += (size-1);
				current_row++;
				num++;
				array[current_row][current_col] = num;
			}
		}
		else if (current_row == (size-1) && current_col == (size-1))
		{
			current_row--;
			current_col -= (size-1);
			if (array[current_row][current_col] == 0)
			{
			num++;
			array[current_row][current_col] = num;
			}
			else
			{
				current_row++;
				current_col += (size-1);
				current_row++;
				num++;
				array[current_row][current_col] = num;
			}
		}
		else if (current_row==0 && current_col == (size-1)) 
		{
			current_col -= (size-1);
			current_row += (size-1);
			
			if (array[current_row][current_col] == 0){
			num++;
			array[current_row][current_col] = num;
			}
			
		else{
				current_col += (size-1);
				current_row -= (size-1);
				current_row++;
				num++;
				array[current_row][current_col] = num;
			}
		}
		
	else{
			current_row--;
			current_col++;
			
		if (array[current_row][current_col] == 0){
			num++;
			array[current_row][current_col] = num;
		}
		
		else{
			current_row++;
			current_col--;
				
			current_row++;
			num++;
			array[current_row][current_col] = num;
			}
		}
		
	}
	
	return array;
}

int main(){
	int n = 5;
	int **ptr = magicSquare(n);
	
	for (int i=0; i<n; i++){
		for (int j= 0; j< n; j++)
		cout<<ptr[i][j]<< "         ";
		cout<<endl;
	}
	
	for (int i=0; i<n; i++)
		delete [] ptr[i];
	
	delete [] ptr;
	return 0;	
}

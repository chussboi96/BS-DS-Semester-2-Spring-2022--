

int sumArray(int *array, int size)
{
	if(size == -1){
		return 0;
	}
	return array[size-1] + sumArray(array, size-1);
}

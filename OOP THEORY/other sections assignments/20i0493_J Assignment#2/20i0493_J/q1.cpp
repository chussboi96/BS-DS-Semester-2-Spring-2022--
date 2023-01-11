
int Find(int array[], int length, int target)
{
	if(length != 0){
		if(target == array[length-1]){
			return length-1;
		}else{
			Find(array, length-1, target);
		}
	}else{

	return -1;
	
	}

}

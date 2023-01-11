#include <iostream>
using namespace std;
int Find(int array[], int length, int target);
int main(){
	
	int target, length = 6;
	int array[length] = {0, 1, 2, 3, 4, 5};
	
	cout<<"Enter the value you want to find in array: "<<endl;
	cin>>target;
	cout<<"Value is at position "<<Find(array, 6, target)+1;
	
	return 0;
}
int Find(int array[], int length, int target){

	if(length != 0){
		if( target == array[length-1] ){
			return length-1;
		}
	else{
		Find(array, length-1, target);
		}
	}

	else 
		return -1;
}

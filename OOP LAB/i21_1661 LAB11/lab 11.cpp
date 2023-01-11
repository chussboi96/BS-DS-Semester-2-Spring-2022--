#include <iostream>
using namespace std;

class IntegerList{
	private:
		int *list;		// Pointer to integer
		int numElements;

	public:
		IntegerList(int);
		IntegerList(const IntegerList & intList);
		bool isValid(int);
		void setElement(int, int);
		int getElement(int);
		
};

IntegerList :: IntegerList (int element){

	numElements = element;
	list = new int [element];

	for (int i=0; i<element; i++)
		 list[i] = 0;

	cout << endl;
}

IntegerList :: IntegerList (const IntegerList & intList){
	list = intList.list;
	numElements = intList.numElements;
}

bool IntegerList :: isValid (int index){

	bool flag = true;

	if (index>=0 && index<(numElements-1)){
		return flag;
	}

	else {
		flag = false;
		return flag;
	}
	
}

void IntegerList :: setElement (int index, int value){

	if (index>=0 && index<numElements){
		list[index] = value;
		cout <<" Overwriting was successful ";
	}

	else{
		cout<<" Invalid index entered!";
		exit(0);
	}
	
}

int IntegerList :: getElement (int index){

	if ( isValid(index) == false ){
		cout<<"Invalid index entered!";
		return (0);
	}

	else {
		cout<<"Element at index "<<index<<" is :";
		return list[index];
	}
	
}

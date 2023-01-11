#include <iostream>
using namespace std;

char * SubStr (char *s1, int pos, int len){
	
	char *temp = new char[len+1];
	
	int i= 0;
	for (; i<len; i++){
		temp[i] = s1[pos+i];
	}
	
	temp[i] = '\0';
	return temp;
}

int main(){
	char * name = "Hello there";
	char * ptr = SubStr(name, 2,3);
	cout<<ptr;
	
	delete [] ptr;
}

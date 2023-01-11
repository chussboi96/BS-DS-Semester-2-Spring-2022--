#include <iostream>
using namespace std;
char * StrCat (char *s1 , const char *s2){
	int len1 = 0, len2 = 0;
	
	for (int i=0; s1[i] != '\0'; i++)
		len1++;
	
	for (int i=0; s2[i] != '\0'; i++)
		len2++;
	
	int len3= len1+len2;
	char *temp = new char[len3];
	
	int i=0;
	for (i=0; i<len1; i++)
		temp[i] = s1[i];
	
	for (int j=0; ; j++){
		if (i>=len3){
			break;
	}
	else 
		temp[i] = s2[j];
		i++;
	}
	
	//give pointer of a new position to s1
	s1 = new char[len3];
	
	for (int i=0; i<len3; i++)
		s1[i] = temp[i];
	
	return s1;
}

int main(){

	char * n1 =(char *) "Object Oriented ";
	char * n2 =(char *) "Programming";
	
	char * ptr = StrCat(n1, n2);
	
	cout<<ptr;
	
	delete [] ptr;
}

#include <iostream>
using namespace std;

char * Strcpy (char *s1, const char *s2, int n){
	int len1 = 0, len2 = 0;
		
	for (int i=0; s1[i] != '\0'; i++)
		len1++;
	
	for (int i=0; s2[i] != '\0'; i++)
		len2++;
	
	s1 = new char[n];
	for (int i=0; i<len2; i++){		
		if (i<n)
		s1[i] = s2[i];
	}

return s1;
}

int main(){

	char s1[] = "Hello World";
	char s2[] = "Test String";
	
	int num= 12;
	
	char * ptr = Strcpy(s1, s2, num);
	cout<<ptr;
	
	delete [] ptr;
} 

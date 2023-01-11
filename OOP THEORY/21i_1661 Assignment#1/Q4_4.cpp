#include <iostream>
using namespace std;

char * StrnCat(char *s1, const char *s2, int n){

	int len1= 0, len2 =0;
	for(int i=0; s1[i]!=0; i++)
	len1++;
	
	for(int i=0; s2[i]!=0; i++)
	len2++;
	
	for(int i=0; s1[i]!=0; i++){
	s2[0]=s1[6];
	cout<<s2[0];
}
	
}

int main(){
	char * n1 = "Hammad ";
	char * n2 = "Javaid";
	
	char * ptr = StrnCat(n1, n2, 6);
	cout<<ptr;
	
	delete [] ptr;
} 

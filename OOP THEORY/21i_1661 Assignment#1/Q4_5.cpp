#include <iostream>
using namespace std;
int StrCmp(const char * s1, const char * s2){
	int len1 = 0, len2 = 0;
	
	for (int i=0; s1[i] != '\0'; i++)
		len1++;
	
	for (int i=0; s2[i] != '\0'; i++)
		len2++;
	
	if (len1 > len2){
		return -1;
	}
	else if (len2 > len1){
		return 1;
	}
	
	else{
	int same = 1, s1_is_greater = 1;
		for (int i=0; i<len1; i++){
			if (s1[i] != s2[i]){
				same = 0;
				if (s1[i] < s2[i]){
					s1_is_greater = 0;
					break;
				}
			}	
		}
		   
		   	if (same == 1){
		   		return 0;
			}
			else if (s1_is_greater == 1){
				return -1;
			}
		else
		return 1;
	}
	
}

int main(){
	char * n1 = "Hello";
	char * n2 = "Hola";
	
	int i = StrCmp(n1, n2);
	cout<<i;
	
} 

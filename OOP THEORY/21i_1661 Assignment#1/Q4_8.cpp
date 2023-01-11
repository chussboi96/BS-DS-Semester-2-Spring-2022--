#include <iostream>
using namespace std;

int StrFind(char *s1, char *s2){
	int len1 = 0, len2 = 0;
	
	for (int i=0; s1[i] != '\0'; i++){
		len1++;
	}
	
	for (int i=0; s2[i] != '\0'; i++){
		len2++;
	}
	
	int flag= 1, index = 0;
	
	for (int i=0; i<len1; i++)
	{
		if (i+2 < len1 && s1[i] == s2[0] && s1[i+1] == s2[1] && s1[i+2] == s2[2])
		{	index = i;
			break;  //break out of loop as soon as found
		}
	}
	
	for (int i=index, j=0; i<(index+len2); i++, j++)
{
		if (s1[i] != s2[j])
			flag = 0;
}
	
	if (flag != 0)
		return index;
		
	else	
	return -1;
}

int main()
{
	char *n1 = "Hello World";
	char *n2 = "World";
	
	cout<<StrFind(n1, n2);
}

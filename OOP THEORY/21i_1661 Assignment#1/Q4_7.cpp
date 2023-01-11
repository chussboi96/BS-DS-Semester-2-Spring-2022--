#include <iostream>
using namespace std;

char ** StrTok(char *s1, const char s2){
	int len = 0;
	for (int i=0; s1[i] != '\0'; i++){
		len++;
	}
	
	int i, space_count=0;
	for (i=0; i<len; i++){
		if (s1[i] == s2)
		space_count++;
	}
	
	int word_count = space_count +1;

	char **ptr_1 = new char*[word_count];
	for (int i=0; i<word_count; i++){
		ptr_1[i] = new char[20];
	}
	
	int word= 0, count=0;
	for (int i=0, j=0; count<=len; j++)
{
		
		ptr_1[word][i] = s1[j];
		i++;
		
		if (s1[j] == s2)
	{
			word++;
			i=0;
	}
	
	count++;
}

	return ptr_1;	
}

int main()
{
	char * name = "Hello World";
	char **ptr = StrTok(name, ' ');
	
	cout<<endl<<endl<<ptr[1][1];
	
}

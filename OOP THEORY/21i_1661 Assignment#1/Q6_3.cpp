#include <iostream>
using namespace std;

void countingUniqueWords (char *string, char **&uwords, int*&array, int &size)
{
	int words = 40;
	for (int i=0; string[i] != '\0'; i++)
	{
		if (string[i] == 32)
		{
			words++;
		}
	}
	words++;
	char **temp = new char*[words];
	int *word_count = new int[words];
	
	for (int i=0; i<words; i++)	
		word_count[i] = 0;

	int j=0;
	for (int i=0; string[i] != '\0'; i++){
		if (string[i] != 32 && string[i]!='\n'){
			word_count[j]++;
		}
		else if (string[i] == 32)	{
			j++;
		}
	}
	
	for (int i=0; i<words; i++)
		temp[i] = new char[word_count[i]];
	
}

int main(){
	int s = 10;
	int *array;
	char **words;
	char str[] ="To be or not to be";
	countingUniqueWords(str, words, array, s);
}


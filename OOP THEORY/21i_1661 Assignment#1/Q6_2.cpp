#include <iostream>
using namespace std;

void countWordsBasedOnLength(char *string, int* &array, int &size)
{
	
	size = 0;
	int calc_len=0;
	int max=-1;
	
	//finding max length in the give set of words
	for (int i=0; string[i] !='\0'; i++)
	{
		if (string[i] == 32) 
		{
			if (max<calc_len)
			{
				max = calc_len;
			}
			
			calc_len=0;
		}
		else if (string[i+1] == '\0')
		{
			calc_len++;  
			if (max<calc_len)
			{
				max = calc_len;
			}
			calc_len = 0; 
		}
		else
		{
			calc_len++;
		}
	}
	
	size = max+1;

	int len=0;
	array = new int[size];
	
	for (int i=0; i<size; i++)
	{
		array[i] = 0;
	}	
	
	for (int i=0; string[i] !='\0'; i++)
	{
		if (string[i] == 32)
		{
			array[0]++;
			//cout<<len;
			array[len]++;
			len = 0; 
		}
		else if (string[i+1] == '\0')
		{
			len++;
			array[len]++;   
			len = 0; 
		}
		else
		{
			len++;
		}
	}
	for (int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	} 
}
 
int main()
{
	int s ;
	int *array;
	char str[] ="This is a test String \n New Line";
	countWordsBasedOnLength(str, array, s);
} 

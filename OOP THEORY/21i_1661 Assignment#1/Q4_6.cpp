#include <iostream>
using namespace std;
int StrnCmp(const char * s1, const char * s2, int n)
{
	int len1 = 0;	
	for (int i=0; s1[i] != '\0'; i++){
		len1++;
	}
	
	if (n > len1)
    	return 1;
	
		else
	{
			int same = 1, s1_is_greater = 1;
			for (int i= 0; i< n; i++)
			{
				if (s1[i] != s2[i])
				{
					same = 0;
					if (s1[i] < s2[i]){
					s1_is_greater = 0;
					}
					break;
				}	
		   }
		   
		   	if (same == 1)
		   		return 0;
		   		
			else if (s1_is_greater == 1)
			{
				return -1;
			}
			
		else
		return 1;
	}	

}	

int main(){
	char * n1 = "Hello";
	char * n2 = "Mello";
	int num = 3;
	int i = StrnCmp(n1, n2, num);
	cout<<i;
	 
} 

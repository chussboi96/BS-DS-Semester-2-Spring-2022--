#include <iostream>
using namespace std ;
int Strlen (char * s1 ){

	int count_len = 0, index = 0;  	     //counter for the length
       							         //index of accessing elements in char array
	while ( s1[index] != '\0'){
		count_len++;
		index++;
}
	count_len++; 	
	
	return count_len;
}
int main(){
	
	char * name = "THE ANSWER IS 18!";
	
	int len = Strlen(name);
	cout<<len;
	
	return 0;
} 



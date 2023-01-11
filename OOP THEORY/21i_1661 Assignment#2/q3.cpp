#include <iostream>
using namespace std;
/*	char findUppercase( char *str ){
    if (str[0] == '\0') {
        return '\0';
    }
    if (str[0] >= 'A' && str[0] <= 'Z') {
        return str[0];
    }

    return findUppercase(str+1);	} */
char findUppercase( char * str, int index){
	
	if( str[index] >= 64 && str[index] <= 92)
		return str[index];
	
	else
		return findUppercase( str, index + 1 );
	
	return ' ';
}
int main() {
	
    char str[] = "yoyo Hello World";
    cout<<"The first uppecase letter is "<<findUppercase(str, 0);

    return 0;
}

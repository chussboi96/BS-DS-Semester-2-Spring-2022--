#include <fstream>
#include <iostream>

void print_space_sep(char c, int n,fstream &output){
	if(n==0){
		return;
	}
	output<<c<<" ";
	print_space_sep(c,n-1,output);

}

void printPattern2(int mline, int startLine, int space,fstream &output){
	
	print_space_sep(' ', space,output);
	print_space_sep('*',(startLine*2)-1,output);
	output<<endl;
	if(mline==startLine)
		return;

	printPattern2(mline,startLine+1,space-1,output);
	print_space_sep(' ', space,output);
	print_space_sep('*',(startLine*2)-1,output);
	output<<endl;


}

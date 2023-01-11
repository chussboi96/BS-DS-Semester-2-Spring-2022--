#include<fstream>
#include<iostream>
using namespace std;

void print_spaces(int n,fstream &output){
	if(n==0){
		return;
	}
	output << " ";
	print_spaces(n-1,output);
}



void printPattern3(int sp, int mLine, fstream &output)
{
	int total_spaces = (mLine*2)+(2*(sp-1));
	int starting_spaces = (mLine*2)-1-((sp-1)*2);
	print_spaces(starting_spaces,output);
	output<<'*';
	print_spaces(total_spaces-starting_spaces,output);
	output<<'*'<<endl;

	if(sp == mLine){
		return;
	}	
	printPattern3(sp+1,mLine,output);

	total_spaces = (mLine*2)+(2*(sp-1));
	starting_spaces = (mLine*2)-1-((sp-1)*2);
	print_spaces(starting_spaces,output);
	output<<'*';
	print_spaces(total_spaces-starting_spaces,output);
	output<<'*'<<endl;
}


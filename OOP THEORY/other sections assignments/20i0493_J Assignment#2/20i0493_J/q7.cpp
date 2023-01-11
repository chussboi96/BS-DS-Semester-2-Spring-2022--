#include <iostream>
#include <fstream>
using namespace std;

void print_line(char c, int n,fstream &output){
	if(n==0){
		return;
	}
	output<<c;
	print_line(c,n-1,output);

}

void printPattern1(int start, int end, fstream &output){
	print_line(' ',start,output);
	print_line('*',1,output);
	output<<endl;
	 if(start == end-1){
		 return;
	 }
	printPattern1(start+2,end,output);
	print_line(' ',start,output);
	print_line('*',1,output);
	output<<endl;	


}

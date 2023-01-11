#include <iostream>
#include <fstream>
using namespace std;
void print_line(char c, int n);
void printPattern1(int start, int end);

int main(){
	int start,end;
	cout<<"Enter the starting value : "<<endl;
	cin>>start;
	cout<<"Enter the ending value : "<<endl;
	cin>>end;
	
	cout<<endl<<endl;
	printPattern1(start, end);
}

void print_line(char c, int n){
	
	if( n == 0)
		return;
	
	cout<<c;
	print_line(c, n-1);
}

void printPattern1(int start, int end){
	
	print_line( ' ', start );
	print_line( '*', 1) ;
	cout<<endl;
	
	if(start == end - 1)
		 return;
	 
	printPattern1( start+2, end );
	print_line( ' ', start );
	print_line( '*', 1 );
	cout<<endl;	

	return;
}

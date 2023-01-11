#include <iostream>
using namespace std;
void print_space( char c, int n );
void PrintPattern3(int mline, int startLine, int space );

int main(){
	int start,end;
	cout<<"Enter the starting value : "<<endl;
	cin>>start;
	cout<<"Enter the ending value : "<<endl;
	cin>>end;
	PrintPattern3(end, start, 5);
}

void print_space( char c, int n ){
	if(n == 0)
		return;
	
	cout<<c<<" ";
	print_space( c, n-1 );
}
void PrintPattern3(int mline, int startLine, int space ){
	
	print_space( ' ', space );
	print_space( '*', (startLine *2) -1 );
	cout<<endl;
	if ( mline == startLine )
		return;

	PrintPattern3( mline, startLine+1, space-1 );
	print_space( ' ', space );
	print_space( '*', (startLine *2) -1 );
	cout<<endl;

}

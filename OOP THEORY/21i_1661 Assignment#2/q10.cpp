#include<iostream>
using namespace std;
long fact(int n ){
	
	if (n<=1)
		return 1;
	
	else 
		return n*fact(n-1);
}

long permutate (int n, int r){
	
	int p = fact(n)/fact(n-r);
	return p;
}

int main (){
	
    int n, r;
    
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of r: ";
    cin>>r;
    
	cout<<permutate( n, r);
}

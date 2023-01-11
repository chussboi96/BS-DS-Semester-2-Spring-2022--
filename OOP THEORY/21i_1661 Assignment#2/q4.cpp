#include<iostream>
#include <cmath>
using namespace std;
float PiValue(int n){

	float pi =  (4 * (1.0/(1+((n-1)*2))) * pow(-1,n+1));
			   	// (4 * (1.0/(1+((n-1)*2))) * pow(-1,n+1));
			   	//  4 * ( pow (1,n) * ( 1 /(2 * n-1) ) ); 
	if (n == 1)
    return 4;

    else
    return pi + PiValue( n-1 );
}
int main(){
	
    int num;
  	cout<<"Enter the odd number  "<<endl;    
   	cin>>num;
	cout<<PiValue( num );
	
   return 0;
}

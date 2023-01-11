#include <iostream>
using namespace std;
bool isPrime(int n, int index);
int main(){

    int n;
    cout<<"Enter Number: ";
    cin>>n;

    if( isPrime(n, 2) == 0)
        cout<<"It is not a Prime Number. ";

    else
        cout<<"It is a Prime Number.";

}
bool isPrime(int n, int index = 2){

	if(n == index)
		return true;
	
	else{
	if(n % index == 0)
		return false;
	
    	else
			isPrime(n, index+1);
	}
}

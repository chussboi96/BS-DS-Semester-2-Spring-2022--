#include <iostream>
using namespace std;
int counter(int choc, int wrap){ 	// counter function
    if (choc < wrap)
        return 0;
 
    int new_Choc = choc/wrap;
 
    return new_Choc + counter(new_Choc + choc % wrap, wrap);
}
 
int countMaxChoco(int money, int price, int wrap){
    int choc = money/price;
 
    return choc + counter(choc, wrap);
}

int main(){
	
   int money , price, wrap; 
 	cout<<"Enter the values of money, price and wrap: ";
 	cin>>money>>price>>wrap;
 	
    cout << countMaxChoco(money, price, wrap);
    return 0;
}

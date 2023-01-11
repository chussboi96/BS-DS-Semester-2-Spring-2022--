#include <iostream>
using namespace std;
void printer( int jugaar, char p, int jugaar2 ){
    	   
    if( jugaar == 0)	
	    return;
	    
    else{
        static int x= 0;
        cout << p;
    	    if( jugaar2 == 29){
    	       cout << endl;
    	       return;        
 	}
    	    if(p == '*'){
    	       x = x +1;    
    	    if( x == 2){
    	    cout << endl; 
            x= 0;   
            return;
    	       }
    }
    	printer( jugaar-1, p, jugaar2 );
    }
}
void PrintPattern2(int space, int start, int last){

	if (last != 0){
		
    		  	if(last == 1){
    	   	    printer( (2*start) -1, ' ', 0);
    	  	    printer( 0, ' ', 29);
   		   	    printer( 1, '*', 29);

     	    return;   		    	    
    		}

    		   	printer(2*start-1,' ',0);
    		   	printer(1 , '*',0);

    		   	printer( (4*last) -5, ' ', 0 );
    		   	printer(1 , '*',0);
    		    	
    		PrintPattern2(1, start + 1 , last-1 );
    	}
    		
    	if(start!=0){
            printer(2*start-1,' ',0);
     	  	printer(1 , '*',0);
        	printer( (4*last) -5, ' ', 0 );
   	    	printer(1 , '*',0);
			}
}

int main(){
	int space, last, start;
	cout<<"Enter your values: ";
	cin>>space>>start>>last;
	
	cout<<endl;
    PrintPattern2( space, start, last);
    
    return 0;
}

/* 
 
1 					11 		(start+1) start=1, end=11; (end-1)
  2               10
    3           9
	  4       8
		5   7
		  6 						start == end
		5   7				(start-1) start=1, end=11; (end+1)
	  4      8
	3          9
  2              10
1                   11 
	
							*/



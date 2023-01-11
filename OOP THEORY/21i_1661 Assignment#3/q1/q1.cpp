#include <iostream>
using namespace std;
class Arrays{
private:
        float * arr;
public:
        Arrays(int n){	// constructor
            arr = new float[n];
        }
    
        float storeNumber(float num, int index){
            arr[index]=num;
        }
        float retrieveNumber(int index){
            return arr[index];
        }
        float highestNum(int n){
            int max = arr[0];
            for(int i= 0; i< n; i++){
                if ( arr[i] > max)
                    max = arr[i];
        }
         return max;
    }
        float lowestNum(int n){
            int min = arr[0];
            for(int i= 0; i< n; i++){
                if ( arr[i] < min)
                    min = arr[i];
        }
         return min;
    }
        float avgNum(int n){
            float sum = 0;
            for(int i= 0; i< n; i++){
                sum = sum + arr[i];
        }
        return (sum/n);
    }
        
         ~Arrays(){	// destructor
            delete [] arr;
        }
};
int main(){
	int find;
    Arrays wow(5);
    wow.storeNumber(44, 0);
    wow.storeNumber(42, 1);
    wow.storeNumber(67, 2);
    wow.storeNumber(33, 3);
    wow.storeNumber(78, 4);
    
    cout<<"From which index number do you wish to retrieve number?: ";
    cin>>find;
    cout<<"Array number at index "<<find<<" is: "<<wow.retrieveNumber(find);
    cout<<"\nHighest : "<<wow.highestNum(5);
    cout<<"\nLowest : "<<wow.lowestNum(5);
    cout<<"\nAverage : "<<wow.avgNum(5);
    return 0;
}

#include<iostream>
#include <string>
using namespace std;
void countLetters(char *string, int *&array, int & size){
    
    for(int i = 0 ; i< size; i++){
        array[ string[i] - 'a']++;
    }
}
int main(){
    char str[] = "To be, or not to be: that is the question";
    int size = sizeof(string)/sizeof(char);
    int array[26] = {0};
    int* p = array;
    countLetters(str, p, size);
    for(int i = 0;i< 26; i++){
        char c='a'+i;
        if(array[i]!=0)
        cout<<c<<": "<<array[i]<<endl;
    }
}

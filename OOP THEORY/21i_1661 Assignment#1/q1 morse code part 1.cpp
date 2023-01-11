#include <iostream>
#include <string>
using namespace std;
string morsecoding(char a){
   
    switch (a){
        case 'A':
        case 'a':
        return ".-";
        break;
        case 'B':
        case 'b':
        return "-...";
        break;
        case 'C':
        case 'c':
        return "-.-.";
        break;
        case 'D':
        case 'd':
        return "-..";
        break;
        case 'E':
        case 'e':
        return ".";
        break;
        case 'f':
        case 'F':
        return "..-.";
        break;
        case 'G':
        case 'g':
        return "--.";
        break;
        case 'H':
        case 'h':
        return "....";
        break;
        case 'I':
        case 'i':
        return "..";
        break;
        case 'J':
        case 'j':
        return ".---";
        break;
        case 'K':
        case 'k':
        return "-.-";
        break;
        case 'L':
        case 'l':
        return ".-..";
        break;
        case 'M':
        case 'm':
        return "--";
        break;
        case 'N':
        case 'n':
        return "-.";
        break;
        case 'O':
        case 'o':
        return "---";
        break;
        case 'P':
        case 'p':
        return ".--.";
        break;
        case 'Q':
        case 'q':
        return "--.-";
        break;
        case 'R':
        case 'r':
        return ".-.";
        break;
        case 'S':
        case 's':
        return "...";
        break;
        case 'T':
        case 't':
        return "-";
        break;
        case 'U':
        case 'u':
        return "..-";
        break;
        case 'V':
        case 'v':
        return "...-";
        break;
        case 'W':
        case 'w':
        return ".--";
        break;
        case 'X':
        case 'x':
        return "-..-";
        break;
        case 'Y':
        case 'y':
        return "-.--";
        break;
        case 'Z':
        case 'z':
        return "--..";
    }
}
void morsecode(string s){
    for(int i= 0; s[i] ; i++)
    cout<<morsecoding(s[i]);
    cout<<endl;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    morsecode(s);
    
    return 0;
}

#include<iostream>
using namespace std;
class Rational{
private:
    double numerator;
    double denominator;
public:
    Rational(){	// default constructor
        numerator= 0;
        denominator= 0;
    }
     Rational(double a, double b){	// parametarised constructor
        numerator = a;
       denominator= b;
    }
    
    double getNumerator(){
        return numerator;
    }							// GETTERS
    double getDenominator(){
        return denominator;
    }
    
    void setNumerator(double x){
        numerator = x;
    }							// SETTERS
    void setDenominator(double y){
        denominator = y;
    }

    double n_add_result;
    double d_add_result;

    double Add(double a, double b){

        if( this->denominator == b){
            d_add_result = this->denominator;
          n_add_result = this->numerator + a;
        }

        else{
            d_add_result= this->denominator * b;
        	n_add_result= (b* this->numerator) + (a* this->denominator);
        }
    }

     double n_sub_result;
     double d_sub_result;

     double Subtract(double a,double b){

        if( this->denominator == b){
            d_sub_result = this->denominator;
            n_sub_result = this->numerator-a;
        }

        else{
            d_sub_result = this->denominator *b;
            n_sub_result = (b* this->numerator) - (a* this->denominator);
        }
    }

    double n_multiply_result;
    double d_multiply_result;
    double Multiply(double a,double b){
        n_multiply_result = numerator*a;
        d_multiply_result = denominator*b;
    }
    
    double n_divide_result;
    double d_divide_result;
    double Divide(double a,double b){
        n_divide_result = numerator *b;
        d_divide_result = denominator*a;
    }

    void PrintRationalFormat(){		// for printing in rational format
        cout<<"In Rational Format..."<<endl;
        cout<<"After Addition: "<<n_add_result<<"/"<<d_add_result<<endl;
        cout<<"After Subtraction: "<<n_sub_result<<"/"<<d_sub_result<<endl;
        cout<<"After Multiplication: "<<n_multiply_result<<"/"<<d_multiply_result<<endl;
        cout<<"After Division: "<<n_divide_result<<"/"<<d_divide_result<<endl;
    }

    void PrintFloatFormat(){	// printing in floating point format
        cout<<"\n\nIn Float Format..."<<endl;
        cout<<"After Addition: "<<n_add_result/d_add_result<<endl;
        cout<<"After Subtraction: "<<n_sub_result/d_sub_result<<endl;
        cout<<"After Multiplication: "<<n_multiply_result/d_multiply_result<<endl;
        cout<<"After Division: "<<n_divide_result/d_divide_result<<endl;
    }
};

int main(){
    
	Rational number(5,3);
    number.Add(6,4);
    number.Subtract(6,4);
    number.Multiply(6,4);
    number.Divide(6,4);
    
	number.PrintRationalFormat();
    number.PrintFloatFormat();

}





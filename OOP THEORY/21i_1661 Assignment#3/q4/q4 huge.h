#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

#define ARRAY_SIZE 40
class HugeInteger{
private:
	 int size;
	 int hugenumber[ARRAY_SIZE];
public:
 HugeInteger();
 HugeInteger( char[] );
 void InputNumber();
 void Results();
 HugeInteger add(const HugeInteger&,const HugeInteger&);	      // THESE
 HugeInteger sub(const HugeInteger&,const HugeInteger&);		   // ARE
 HugeInteger mul(const HugeInteger&,const HugeInteger&);			// THE
 bool EqualTo(const HugeInteger&,const HugeInteger&);				 // FUNCTION
 bool NotEqualTo(const HugeInteger&,const HugeInteger&);			  // PROTOTYPES
 bool GreaterThan(const HugeInteger&,const HugeInteger&);
 bool LessThan(const HugeInteger&,const HugeInteger&);
 bool GreaterThanOrEqualTo(const HugeInteger&,const HugeInteger&);
 bool LessThanOrEqualTo(const HugeInteger&,const HugeInteger&);
 bool isZero();
};

HugeInteger::HugeInteger()		// default constructor
{
 size=0;
 for (int i=0;i<ARRAY_SIZE;i++)
  hugenumber[i]=0;
}

HugeInteger::HugeInteger(char value[])		// paramterized constructor	
{
 int i=0,j=9;
 size=strlen(value);
 for (i=(ARRAY_SIZE-1),j=(size-1);j>=0;i--,j--)
  hugenumber[i]=value[j]-48;
 for (j=i;j>=0;j--)
  hugenumber[j]=0;
}
void HugeInteger::InputNumber()		//input function
{
 size=0;
 int i=0,j=0,temp;;
 char InputNumber;
 cout<<"\nEnter Number terminated by (-) : ";
 for (i=(ARRAY_SIZE-1);i>=0;i--)
 {
  InputNumber=getche();
  if(InputNumber=='-')
   break;
  size++;
  hugenumber[i]=InputNumber-48;
 }
 if(InputNumber=='-')
  for (j=i;j>=0;j--)
   hugenumber[j]=0;
 for (i=(ARRAY_SIZE-1)-(size-1),j=(ARRAY_SIZE-1);i<j;i++,j--)
 {
  temp=hugenumber[i];
  hugenumber[i]=hugenumber[j];
  hugenumber[j]=temp;
 }
}

void HugeInteger::Results()				// results function
{
 bool check=1;
 for (int i=0;i<ARRAY_SIZE;i++)
 {
  if(check==1 && hugenumber[i]==0)
   continue;
  else
  {
   check=0;
   cout<<hugenumber[i];
  }
 }
 if(check==1)
  cout<<"0";
 cout<<endl;
}


// This is the function used to add huge integers
HugeInteger HugeInteger::add(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 HugeInteger h;
 int mod,div=0;
 for (int i=(ARRAY_SIZE-1);((i>=ARRAY_SIZE-h_FirstNumber.size)||(i>=ARRAY_SIZE-h_SecondNumber.size));i--)
 {
  h.hugenumber[i]=h_FirstNumber.hugenumber[i]+h_SecondNumber.hugenumber[i]+div;
  h.size++;
  if(h.hugenumber[i]>9)
  {
   mod=h.hugenumber[i]%10;
   div=h.hugenumber[i]/10;
   h.hugenumber[i]=mod;
  }
  else
   div=0;
 }
 cout<<endl<<"Addition:";
 return h;
}

// The function used to subtract huge integers
HugeInteger HugeInteger::sub(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
HugeInteger h;
 int i=0,j=0,sub,decr=0;
 bool check;
 check=GreaterThanOrEqualTo(h_FirstNumber,h_SecondNumber);
 if(check==1)
 {
  for (i=(ARRAY_SIZE-1);i>=(ARRAY_SIZE-h_FirstNumber.size);i--)
  {
   h.size++;
   if(i==(ARRAY_SIZE-h_FirstNumber.size))
   {
    h.hugenumber[i]=h_FirstNumber.hugenumber[i]-h_SecondNumber.hugenumber[i]-decr;
    break;
   }
   if((h_FirstNumber.hugenumber[i]-decr)>=h_SecondNumber.hugenumber[i])
   {
    h.hugenumber[i]=h_FirstNumber.hugenumber[i]-h_SecondNumber.hugenumber[i]-decr;
    decr=0;
   }
   else
   {
    sub=(h_FirstNumber.hugenumber[i]-decr)+10;
    h.hugenumber[i]=sub-h_SecondNumber.hugenumber[i];
    decr=1;
   }
  }
 }
 else
 {
  for (i=(ARRAY_SIZE-1);i>=(ARRAY_SIZE-h_SecondNumber.size);i--)
  {
   h.size++;
   if(i==(ARRAY_SIZE-h_SecondNumber.size))
   {
    h.hugenumber[i]=h_SecondNumber.hugenumber[i]-h_FirstNumber.hugenumber[i]-decr;
    break;
   }
   if((h_SecondNumber.hugenumber[i]-decr)>=h_FirstNumber.hugenumber[i])
   {
    h.hugenumber[i]=h_SecondNumber.hugenumber[i]-h_FirstNumber.hugenumber[i]-decr;
    decr=0;
   }
   else
   {
    sub=(h_SecondNumber.hugenumber[i]-decr)+10;
    h.hugenumber[i]=sub-h_FirstNumber.hugenumber[i];
    decr=1;
   }
  }
  if(h.hugenumber[ARRAY_SIZE-h.size]!=0)
   h.hugenumber[ARRAY_SIZE-h.size]=-h.hugenumber[ARRAY_SIZE-h.size];
  else
   h.hugenumber[(ARRAY_SIZE-h.size)+1]=-h.hugenumber[(ARRAY_SIZE-h.size)+1];
  
 }
 cout<<endl<<"Subtraction:";
 return h;
}

// EQUAL TO FUNCTION
bool HugeInteger::EqualTo(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 cout<<endl<<" = = :";
 int i=0;
 for (i=0;i<ARRAY_SIZE;i++)
  if(h_FirstNumber.hugenumber[i]!=h_SecondNumber.hugenumber[i])
   return 0;
 return 1;
}
bool HugeInteger::NotEqualTo(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 cout<<endl<<" != :";
 int i=0;
 for (i=0;i<ARRAY_SIZE;i++)
  if(h_FirstNumber.hugenumber[i]!=h_SecondNumber.hugenumber[i])
   break;
 if(i<ARRAY_SIZE)
  return 1;
 return 0;
}

// GREATER THAN FUNCTION
bool HugeInteger::GreaterThan(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 cout<<endl<<" > :";
 int i=0;
 for (i=0;i<ARRAY_SIZE;i++)
 {
  if(h_FirstNumber.hugenumber[i]<h_SecondNumber.hugenumber[i])
   return 0;
  if(h_FirstNumber.hugenumber[i]>h_SecondNumber.hugenumber[i])
   return 1;
 }
 return 0;
}

// LESS THAN FUNCTION
bool HugeInteger::LessThan(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 cout<<endl<<" < :";
 int i=0;
 for (i=0;i<ARRAY_SIZE;i++)
 {
  if(h_FirstNumber.hugenumber[i]<h_SecondNumber.hugenumber[i])
   return 1;
  if(h_FirstNumber.hugenumber[i]>h_SecondNumber.hugenumber[i])
   return 0;
 }
 return 0;
}


bool HugeInteger::GreaterThanOrEqualTo(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber)
{
 cout<<endl<<" >= :";
 int i=0;
 for (i=0;i<ARRAY_SIZE;i++)
 {
  if(h_FirstNumber.hugenumber[i]<h_SecondNumber.hugenumber[i])
   return 0;
  if(h_FirstNumber.hugenumber[i]>h_SecondNumber.hugenumber[i])
   return 1;
 }
 return 1;
}


bool HugeInteger::LessThanOrEqualTo(const HugeInteger &h_FirstNumber,const HugeInteger &h_SecondNumber){
	cout<<endl<<" <= :";
 	int i=0;
 	for (i=0;i<ARRAY_SIZE;i++){
 	 if(h_FirstNumber.hugenumber[i]<h_SecondNumber.hugenumber[i])
 	  return 1;
 	 else
 	  return 0;
 }
 	return 1;
}


bool HugeInteger::isZero(){
	 cout<<endl<<"== 0 :";
	for (int i=(ARRAY_SIZE-size);i<ARRAY_SIZE;i++)
	  if(hugenumber[i]!=0)
	   return 0;
 return 1;
}

int main(){
	 HugeInteger h;
	 HugeInteger h_FirstNumber;
	 HugeInteger h_SecondNumber;
	 HugeInteger ha;
	 HugeInteger hs;
 
 h_FirstNumber.InputNumber();
 h_FirstNumber.Results();
 h_SecondNumber.InputNumber();
 h_SecondNumber.Results();
 
 ha = h.add(h_FirstNumber,h_SecondNumber);
 ha.Results();
 hs = h.sub(h_FirstNumber,h_SecondNumber);
 hs.Results();
 
 cout<<h_SecondNumber.isZero()<<endl;
 cout<<h.EqualTo(h_FirstNumber, h_SecondNumber)<<endl;
 cout<<h.LessThanOrEqualTo(h_FirstNumber, h_SecondNumber)<<endl;
 cout<<h.NotEqualTo(h_FirstNumber, h_SecondNumber)<<endl;
 cout<<h.LessThan(h_FirstNumber, h_SecondNumber)<<endl;
 cout<<h.GreaterThanOrEqualTo(h_FirstNumber, h_SecondNumber)<<endl;
 cout<<h_FirstNumber.isZero()<<endl;
 cout<<h.GreaterThan(h_FirstNumber, h_SecondNumber)<<endl;
 
 return 0;
}

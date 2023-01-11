#include<iostream>
#include<cmath>
using namespace std;


class ExtendedCharacter {
	// think about the private data members...
	char input;
	int  num;
	string extended;
public:
	//include all the necessary checks before performing the operations in
	//the functions
    ExtendedCharacter()// a default constructor
	{
		input = '\0';
		extended = "\0";
		num = -1;
	}

	ExtendedCharacter(int num)// a parametrized constructor
	{
		input = '\0';
		extended = "\0";
		this->num = num;
	}
	
	ExtendedCharacter(char input) // a parametrized constructor
	{
		input = input;
		extended = "\0";
		num = -1;
	}

	void set(char input)//set value
	{
		this->input = input;
	}

	string toString(char input)//write your own function that converts a character into its binary equivalentand return it as string, you can use this function		in the parameterized constructor when constructing the object
	{
		this->input = input;
		int n = input;
		char* a = new char[16];
	

		for (int i = 15 ;i>=0 ; i--)
		{
			if (n > 0)
			{
				a[i] = n % 2;
				a[i] += 48;
				n = n / 2;
			}
			else
				a[i] = '0';
			
		}
		


		string b = a;
		return b;

	}

	ExtendedCharacter& operator=(const ExtendedCharacter& right)
	{
		ExtendedCharacter ec;
		
		ec.extended = right.extended;
		ec.input = right.input;
		ec.num = right.num;

		return ec;
	}
	
	ExtendedCharacter& operator+(const ExtendedCharacter& right) //
	{
		int n = this->num + right.num;

		ExtendedCharacter ec;
		ec.toString(n);
		ec.num = n;
		ec.extended = toString(n);

		return ec;
	}

	ExtendedCharacter& operator-(const ExtendedCharacter& right) //
	{
		int n = this->num - right.num;

		ExtendedCharacter ec;
		ec.toString(n);
		ec.num = n;
		ec.extended = toString(n);

		return ec;
	}

	bool operator==(const ExtendedCharacter& right)
	{
		this->operator int();

		if (right.num == this->num)
		{
			return 1;
		}

		else
			return 0;

	}
	
	bool operator!=(const ExtendedCharacter& right) //
	{
		
		if (!operator==(right))
			return 1;
		else
			return 0;
	}

	bool operator<=(const ExtendedCharacter& right) //
	{
		this->operator int();

		if (num <= right.num)
			return 1;
		else
			return 0;
	}

	bool operator>=(const ExtendedCharacter& right) //
	{
		this->operator int();

		if (num >= right.num)
			return 1;
		else
			return 0;
	}

	bool operator<(const ExtendedCharacter& right) //
	{
			this->operator int();

			if (num < right.num)
				return 1;
			else
				return 0;
	}

	bool operator>(const ExtendedCharacter& right) //
	{
		this->operator int();

		if (num > right.num)
			return 1;
		else
			return 0;

	}

	ExtendedCharacter& operator++() 
	{
		int n = this->num;
		++n;

		ExtendedCharacter ec(n);
		ec.toString(n);
		
		return ec;
	}

	ExtendedCharacter& operator++(int) //
	{
		int n = this->num;
		n++;

		ExtendedCharacter ec(n);
		ec.toString(n);

		return ec;
	}

	ExtendedCharacter& operator--() //
	{
		int n = this->num;
		--n;

		ExtendedCharacter ec(n);
		ec.toString(n);

		return ec;
	}

	ExtendedCharacter& operator--(int) //
	{
		int n = this->num;
		n--;

		ExtendedCharacter ec(n);
		ec.toString(n);

		return ec;
	}
	operator int() //converts the ExtendedCharacter into an integer
	{

		for (int i = 0; i<16 ; i++)
		{
			num += (extended[i]-48) * pow(2, i);
		}
	}

	operator short() //converts the ExtendedCharacter into an integer
	{
		for (int i = 0; i < 16; i++)
		{
			num += (extended[i] - 48) * pow(2, i);
		}
	}

	void operator()(int start, int end) //Given a range in integers determine if the character is an alphabet(lower or upper), number
	{
		if (start >= 48 && end <= 57)
		{
			cout << "NUMBER" << endl;
		}

		else if (start >= 65 && end <= 90)
		{
			cout << "ALPHABET UPPER CASE" << endl;
		}

		else if (start >= 97 && end <= 122)
		{
			cout << "ALPHABET LOWER CASE" << endl;
		}
	}
};










int main()
{

	return 0;
}

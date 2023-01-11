#include <cmath>

float PiValue(int n)
{
	//π =4 * ( 1 −1/3+1/5 −1/ 7+1 /9− 1/ 11+1/13+... )
	if(n==1)
		return 4;
    else
		return (4 * (1.0/(1+((n-1)*2))) * pow(-1,n+1)) + PiValue(n-1);

}

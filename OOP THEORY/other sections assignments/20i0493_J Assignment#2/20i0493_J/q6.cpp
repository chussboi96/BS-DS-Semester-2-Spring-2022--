
int calculatePower(int base, int pow)
{
	if(pow == 1){
		return base;
	}else{
		return base * calculatePower(base, pow-1);
	}
}


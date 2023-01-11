
bool checkPrime(int n, int i = 2)
{
	if(n == i){
		return true;
	}else{

		if(n % i == 0){
			return false;
		}else{

			checkPrime(n,i+1);
		}
	
	}
}

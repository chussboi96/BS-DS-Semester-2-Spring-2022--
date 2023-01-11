
int countConsonants(char * str)
{
	if(str[0] != '\0'){
		if(str[0] != 'a' && str[0] != 'e' && str[0] != 'i' && str[0] != 'o' && str[0] != 'u'){
			return 1 + countConsonants(str+1);	
		}else{
			return countConsonants(str+1);	
		}
	}else{
		return 0;
	}

}

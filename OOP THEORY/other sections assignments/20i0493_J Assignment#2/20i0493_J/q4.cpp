
char findFirstUppercase(char * str)
{
	if(str[0] > 64 && str[0] < 91){
		return str[0];
	}else{
		return findFirstUppercase(str+1);
	}
	return ' ';
}


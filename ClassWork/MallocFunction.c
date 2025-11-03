char* mystrdup(char*);
void main()
{
	char str[]="firstbit";
	printf("\n%s",str);
	char* res=mystrdup(str);
	printf("\n%s",res);
	
	printf("\n Address in str %u and address in res %u",str,res);
	
	res[0]='x';
	printf("\n%s",str);
	printf("\n%s",res);
	
}
char* mystrdup(char* str)
{
	int len=strlen(str)+1; // +1 is used to store null value(\0)
//	char dup[len];
	char* dup=(char*)malloc(sizeof(char)*len);
//	printf("\n in fun address of dup=%u",dup);
	for(int i=0;i<len;i++)
		dup[i] = str[i];
//		printf("\n in fun after copy dup =%u",dup);
	return dup;
	
}

#include<stdio.h>
// not fullcompleted this code. hint when word starts increase word count not after space.
void main()
{
	char str[]="    this is   a    string  firstbit solutions pune     ";
	int i=0;
	int wordcount=0;
	while(str[i]!='\0')
	{
		if(str[i]!=' ' && str[i+1]==' ')
		wordcount++;
		i++;
	}
	printf("No of words %d",wordcount+1);
}

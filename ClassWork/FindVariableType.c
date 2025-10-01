#include<stdio.h>
// Q.3 Find enter charater is alphabet , digit or special character.
void main()
{
	char ch='$';  // we can only give single value to it.
	
	if(ch>='A' && ch<='B' || ch>='a' && ch<='b' )
	{
		printf(" Alphabet.");
	}
	else
	{
		if(ch>='0' && ch<='9')
		{
			printf(" Digit.");
		}
		else
		{
				printf("Special Symbol.");
		}
	}
}

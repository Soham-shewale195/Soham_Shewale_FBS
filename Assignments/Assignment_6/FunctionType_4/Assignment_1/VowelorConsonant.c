#include<stdio.h>
//4. Write a program to check whether a given character is a vowel or consonant.
// functioon type 3 ,(with para without return type).
char chara(char);
void main()
{
	char alpha;
	printf("Enter a Character or Alphabet :");
	scanf("%c",&alpha);
	char al=chara(alpha);
	if(al=='V')
	{
		printf("Its a Vowel .");
	}
	else
	{
		printf("Its a Consonant .");
	}
}
char chara(char alpha)
{
//	|| alpha=='e' || alpha=='i'|| alpha='o'|| alpha=='u'
	if(alpha=='a'|| alpha=='A'|| alpha=='e' ||alpha=='E'|| alpha=='i'|| alpha=='I'||alpha=='o'|| alpha=='O'|| alpha=='u'|| alpha=='U')
	{
		return 'V';
	}
	else
	{
		return 'C';
	}
}

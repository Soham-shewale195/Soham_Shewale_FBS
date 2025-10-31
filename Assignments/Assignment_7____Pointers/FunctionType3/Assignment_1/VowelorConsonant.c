#include<stdio.h>
//4. Write a program to check whether a given character is a vowel or consonant.
// functioon type 3 ,(with para without return type).
void chara(char);
void main()
{
	char alpha;
	printf("Enter a Character or Alphabet :");
	scanf("%c",&alpha);
	chara(alpha);
}
void chara(char alpha)
{
//	|| alpha=='e' || alpha=='i'|| alpha='o'|| alpha=='u'
	if(alpha=='a'|| alpha=='A'|| alpha=='e' ||alpha=='E'|| alpha=='i'|| alpha=='I'||alpha=='o'|| alpha=='O'|| alpha=='u'|| alpha=='U')
	{
		printf("Its a Vowel .");
	}
	else
	{
		printf("Its a Consonant .");
	}
}

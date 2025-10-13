#include<stdio.h>
//4. Write a program to check whether a given character is a vowel or consonant.
int chara();
void main()
{
	int c=chara();
	if(c==0)
		{
			printf("Its a Vowel .");
		}
		else
		{
			printf("Its a Consonant .");
		}
}
int chara()
{
	char alpha;
	int flag=0;
	printf("Enter a Character or Alphabet :");
	scanf("%c",&alpha);
//	|| alpha=='e' || alpha=='i'|| alpha='o'|| alpha=='u'
	if(alpha=='a'|| alpha=='A'|| alpha=='e' ||alpha=='E'|| alpha=='i'|| alpha=='I'||alpha=='o'|| alpha=='O'|| alpha=='u'|| alpha=='U')
	{
		flag=0;
		return flag;
	}
	else
	{
		flag++;
		return flag;
	}
}

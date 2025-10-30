#include<stdio.h>
// Find the Number is Palindrome or not?
//A palindrome is a word, number, phrase, or sequence that reads the
//same forward and backward (ignoring spaces, punctuation, and capitalization in some cases).

//Examples of palindromes:
//1)Words = madam, level, radar, civic
//Numbers = 121, 1331, 12321
//Phrases = nurses run, never odd or even
int palin(int);
void main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
	
	int palin1 =palin(num);
	
     if (palin1==1)
        printf("It's a palindrome number.\n");
    else
        printf("It's not a palindrome number.\n");
     
}
int palin(int num)
{
	 int originalNum, reversedNum = 0, remainder;
	 
	 originalNum = num; // Store original number
	 while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversedNum = reversedNum * 10 + remainder; // Build reversed number
        num = num / 10;                    // Remove last digit
    }

    // Check palindrome condition
    if (originalNum == reversedNum)
        return 1;
    else
        return 0;
}

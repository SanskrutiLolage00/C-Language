#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	
	printf("\nascii value is=%i",ch);
	printf("\nprevious character is=%c",ch-1);
	printf("\nnext character is=%c",ch+1);
}

#include<stdio.h>
#include<string.h>
void main()
{
	int n,i;
	char  str[20];
	printf("enter any string: ");
	scanf("%[^\n]",str);
	n=strlen(str);
	printf("the string in reverse order is: ");
	for(i=n-1;i>=0;i--)
		printf("%3c",str[i]);
}

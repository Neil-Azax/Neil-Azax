#include<stdio.h>
int main()
{
	int n,i,sum=0,rev=0,temp;
	printf("Enter the Number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0) //loop control for sum of the digit
	{	sum=sum+n%10;
		n=n/10;
	}
	i=sum;//coping sum value
	while(i>0)//loop for reversing the sum
	{	rev=rev*10+(i%10);
		i=i/10;
	}
	if(sum*rev==temp)
		printf("The Number %d is a Magic Number",temp);
	else
		printf("%d is not a Magic Number",temp);
		
	return 0;
}


//Write a menu driven program to take a number for user and perform operations as follows.
#include <stdio.h>
void main () {
	int num;
	printf("Enter your choice ");
	scanf("%d",&num);
	int no;
	printf("Enter the number ");
	scanf("%d",&no);
	if (num==1) {
		if (no%2==0)
			printf("Even");
		else if (num%2!=0)
			printf("Odd");
		else
			printf("Invalid");
	} else if (num==2) {
		int count=1,i=2;

		while (i<no) {
			if (no%i==0) {
				count=0;
				break;
			}
			i++;
		}
		if (count==0)
			printf("Not Prime");
		else
			printf("Prime");
	} else if (num==3) {
		int n1,rev=0,temp;
		temp=no;
		while(no>0) {
			n1=no%10;
			rev=n1+(rev*10);
			no=no/10;
		}
		if (temp==rev)
			printf("Palindrome");
		else
			printf("Not palindrome");
	} else if (num==4) {
		if (no>0)
			printf("Positive");
		else if(no<0)
			printf("Negative");
		else if (no==0)
			printf("Neutral");
		else
			printf("Invalid");
	} else if (num==5) {
		int n1,rev=0,temp;
		temp=no;
		while(no>0) {
			n1=no%10;
			rev=n1+(rev*10);
			no=no/10;
		}
		printf("Reverse =%d",rev);
	} else if (num==6) {
		int sum=0,rem,i;
		for (i=no; i>0; i=i/10) {
			rem=i%10;
			sum=sum+rem;
		}
		printf("Sum of given number is = %d",sum);
	} else if (num>6)
		printf("You have entered Invalid option");
}


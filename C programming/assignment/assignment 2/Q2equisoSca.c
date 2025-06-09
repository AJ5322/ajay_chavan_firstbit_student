#include<stdio.h>
void main(){
	int a =10, b=101, c=100;
	
	 
	if(a==b && b==c){
		printf("Equilateral");
			}
			else if (a==b || b==c || a==c){
				printf("Isosceles");
			}
			else{
				printf("Scalene");
			}
			
}
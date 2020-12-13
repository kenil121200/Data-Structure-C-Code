#include<stdio.h>

long double factorial(int n) 
{ 
    if (n == 1) 
      return 1;
    else 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    	int num;
	
	printf("enter the number ::");
	scanf("%u",&num); 
    	printf("\nFactorial of %d is %.0Lf", num, factorial(num)); 
	    	
	return 0; 
} 

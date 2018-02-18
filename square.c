#include <stdio.h>
int square(int x);

int main(void) {
	int x1;
	int x2;
	printf("What to square...");
	scanf("%d",&x1);
	x2=square(x1);
	printf("Square is %d", x2);
return(0);} 

int square(int x)
{int square_of_x;
square_of_x=x * x;
return square_of_x;
}
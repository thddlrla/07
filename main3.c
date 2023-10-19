#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int i = 10;
	printf("함수 호출전 i = %d\n", i);
     i =inc(i); 
	printf("함수 호출 후 i = %d\n", i);
	
	
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}

//call by value 라는 특성 때문에 
 

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
   int i;
    
   for(i=0;i<5;i++)
   {
    static int temp = 1;
   	printf("temp = %d\n", temp);
   	temp++; 
   }
	
	return 0;
}
// int temp 앞에 staic을 넣으면 헤결 가능
//바깣에 int temp 를 전역변수로 놓기   

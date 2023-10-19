#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int auto_count = 0;
	static int static_count = 0;
	auto_count++;
	static_count++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
	return 0;
}

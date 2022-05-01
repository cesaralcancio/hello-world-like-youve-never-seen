#include <stdio.h>

void f2(char hello[]){
	printf("from f2: %d\n", &hello);
}

void f1(char hello[], int i){
	printf("from f1: %x\n", &hello);
	printf("i: %d\n", i);
	f1(hello, i + 1);
}

void main() {
	char hello[] = "Hello World";
	printf("%s\n", hello);
	printf("from main: %d\n", &hello);
	f1(hello, 0);
	return;
}

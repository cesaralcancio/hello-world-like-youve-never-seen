#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char a[] = "a";
	char hello[] = "Hello World";
	printf("from main: %d\n", hello);
	printf("from main: %d\n", &hello);

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(hello));

	char *hello2 = malloc(sizeof(hello));
	strcpy(hello2, hello);
	printf("hello2: %d\n", hello2);
	printf("hello2: %d\n", *hello2);

	char *hello3 = hello2 + 6;
	printf("from hello2: %s\n", hello2);
	printf("from hello3: %s\n", hello3);

	printf("from hello2: %d\n", &hello2);
	printf("from hello3: %d\n", &hello3);


	return;
}

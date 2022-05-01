#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person {
	char nome[10];
	uint8_t age;
	uint8_t height;
};

void createPerson(char name[], 
	uint8_t age, 
	uint8_t height,
	void(*function_pointer)(struct Person)){
		struct Person person;
		strcpy(person.nome, "Cesar");
		person.age = 30;
		person.height = 180;
		(*function_pointer)(person);
}

void printPerson(struct Person person){
	printf("person: %s %d %d\n", 
		person.nome, person.age, person.height);
}

void main(){
	struct Person person;
	strcpy(person.nome, "Cesar");
	person.age = 30;
	person.height = 180;
	printf("person: %x\n", person);

	createPerson("Cesar Augusto", 31, 180, &printPerson);
	return;
}

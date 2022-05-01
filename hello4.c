#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct

Class Person {
	char nome[10];
	uint8_t age;
	uint8_t height;
	void(*show)(struct Person *);
};

void person_print(struct Person *self) {
	printf("nome: %s age: %d height: %d\n", 
		self->nome, self->age, self->height);
}

Class Person * newPerson(char name[], 
	uint8_t age, 
	uint8_t height) {
		struct Person *self = 
			(struct Person *) malloc(sizeof(struct Person));
		strcpy(self->nome, "Cesar");
		self->age = 30;
		self->height = 180;

		self->show = &person_print;
		return self;
}

void main(){
	struct Person *person =
	 (struct Person *) newPerson("Cesar", 30, 180);
	person->show(person);
	return;
}

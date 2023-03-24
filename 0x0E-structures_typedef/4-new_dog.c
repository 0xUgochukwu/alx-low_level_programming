#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initializes a variable of type struct dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *dog = (dog_t *) malloc(sizeof(dog_t));
    if (dog == NULL) {
        return NULL;  
    }

    dog->name = (char *) malloc(strlen(name) + 1);
    dog->owner = (char *) malloc(strlen(owner) + 1);
    if (dog->name == NULL || dog->owner == NULL) {
        free(dog->name);
        free(dog->owner);
        free(dog);
        return NULL;
    }

    strcpy(dog->name, name);
    strcpy(dog->owner, owner);

    dog->age = age;

    return dog;
}

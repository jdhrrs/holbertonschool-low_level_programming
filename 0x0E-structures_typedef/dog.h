#ifndef _dog_H_
#define _dog_H_
/**
 * struct dog - dog's information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog's information
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>


struct Person{
    char * name;
    int age;
    int height;
    int weight;
};

struct Person *person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who !=NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;
    
    return who;
}

void person_destroy(struct Person *who)
{
    assert(who != NULL);
    free(who->name);
    free(who);
}


void person_print(struct Person *who)
{
    printf("Name:%s\n", who->name);
    printf("Age:%d \n", who->age);
    printf("Height:%d \n", who->height);
    printf("weight:%d \n", who->weight);

}


int main(int argc, char *argv[])
{
    struct Person *joe = person_create("joe", 32, 64, 140);
    
    struct Person *frank = person_create("frank", 20, 62,180);

    printf("Joe is at memory location %p:\n",joe);

    person_print(joe);
    printf("Frank is at the location of %p\n", frank);
    person_print(frank);


    joe->age +=20;

    person_print(joe);

    person_destroy(joe);
    person_destroy(frank);

    return 0;
}



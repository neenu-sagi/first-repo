#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main(void) {

    struct Person person1;

    strcpy(person1.name, "Sagi");
    person1.age = 25;
    person1.height = 175.5;

    // Print the values stored in the struct
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}


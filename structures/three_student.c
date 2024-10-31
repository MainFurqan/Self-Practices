#include <stdio.h>
#include <stdio.h>

struct students {
    char name[50];
    float roll_num;
    int age;
};

void print_info(struct students *s) {
    strcpy(s->name, "Anas");
    printf("Name: %s", s->name);
}


int main() {
    struct students S = {"Ali", 4211, 20};
    struct students *s = &S;
    // strcpy(S.name, "Anas");
    print_info(s);
    printf("\nName: %s", s->name);    
}
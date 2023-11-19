// #include <cs50.h>
#include <stdio.h>

int main(void) {
    char name[20];
    printf("What is your name? ");
    fgets(name,20,stdin);

    // string answer = get_string("What's your name? ");
    printf("Hello, %s\n", name);
    // printf("Hello world!\n");
    
    return 0;
}

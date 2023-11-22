#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // declares a pointer
    printf("%p\n", p); // prints out address of n in hexadecimal format
    printf("%i\n", *p); // de-reference the pointer (go-to the actual address)

    // Strings variables are pointers.
    char *s = "HI!";
    printf("%p\n", s); // print out address of s which is the address of the first character in the string
    // printf("%p\n", &s[0]); // prints address of first character in the string which is the same address as above
    // printf("%p\n", &s[1]); // address one byte away from above
    // printf("%p\n", &s[2]); // address one byte away from above
    // printf("%p\n", &s[3]); // address one byte away from above

    // Accessing string character without square brackets
    printf("\n");
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));

    printf("\n");
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
}

#include <stdio.h>
#include <string.h>
#include <cs50.h>

// User Defined Data structure
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // string names[] = {"Tommy", "Kimber"};
    // string numbers[] = {"+1-617-945-1000", "+1-949-468-2750"};
    person people[2];

    people[0].name = "Camilla";
    people[0].number = "+1-617-945-1000"

    people[1].name = "Jeffery";
    people[1].number = "+1-949-468-2750"

    string name = get_string("Name: ");

    // Implementing Linear search - O(n)
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

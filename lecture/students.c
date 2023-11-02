#include <stdio.h>
#include <cs50.h>

typedef struct {
    string firstname;
    string secondname;
    int year;
} students;

int main() {
    int count = get_int("How many students: ");
    students array[count];

    for(int i = 0; i < count; i++) {
        array[i].firstname = get_string("First name: ");
        array[i].secondname = get_string("Second name: ");
        array[i].year = get_int("Year: ");
    }

    for(int j = 0; j < count; j++) {
        printf("%s %s, %i\n", array[j].firstname, array[j].secondname, array[j].year);
    }


    return 0;
}
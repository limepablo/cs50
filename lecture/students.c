#include <stdio.h>
#include <cs50.h>

typedef struct {
    string firstname;
    string secondname;
    int year;
} students;

int main() {
    int count = get_int("How many students: \n");

    return 0;
}
students* get_data(int count) {
    students array[count];

    for(int i = 0; i < count; i++) {
        array[i].firstname = get_string("First name: \n");
        array[i].secondname = get_string("Second name: \n");
        array[i].year = get_int("Year: \n");
    }

    
}

 void end() {
    printf("%d\n", array[i].firstname, array[i].secondname, array[i].year);

    return 0;
 }
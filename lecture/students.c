#include <stdio.h>
#include <cs50.h>

typedef struct {
    string firstname;
    string secondname;
    int year;
} students;

students* get_data(int count);
void printstudents(students* array, int count);

int main() {
    int count = get_int("How many students: ");
    students* array = get_data(count);
    printstudents(array, count);

    return 0;
}
students* get_data(int count) {
    students array[count];

    for(int i = 0; i < count; i++) {
        array[i].firstname = get_string("First name: \n");
        array[i].secondname = get_string("Second name: \n");
        array[i].year = get_int("Year: \n");
    }

    return array;
}

void printstudents(students* array, int count) {
    for(int j = 0; j < count; j++) {
        printf("%s %s, %i", array[j].firstname, array[j].secondname, array[j].year);
    }
}


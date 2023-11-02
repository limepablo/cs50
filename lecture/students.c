#include <stdio.h>
#include <cs50.h>

typedef struct {
    char firstname[10];
    char secondname[10];
    int year;
} students;

int main() {
    int count = get_int("How many students:\n");

    return 0;
}
students* get_data(int count) {
    students array[count];

    for(int i = 0; i < count; i++) {
        array[0].firstname;
    }
}

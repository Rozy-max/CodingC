#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    struct Student students[5] = {
        {"Joseph", 90},
        {"Janet", 85},
        {"Peter", 78},
        {"Denis", 95},
        {"Ann", 82}
    };
    FILE *fp;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), 5, fp);
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fread(students, sizeof(struct Student), 5, fp);
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n\n", students[i].name, students[i].marks);
    }
    fclose(fp);
    return 0;
}

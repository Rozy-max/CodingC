#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int marks;
};
int main()
 {
    struct Student students[5];
    FILE *fp;
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), 5, fp);
    fclose(fp);
    printf("Student information written to file.\n");
    return 0;
}
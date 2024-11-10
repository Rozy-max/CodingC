#include <stdio.h>
#include <string.h>
struct Student
{
	char name[50];
	int marks;
};
int main()
{
	int n;
	struct Student students[100];
	FILE *fp;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter name of student %d: ", i + 1);
		scanf("%s", students[i].name);
		printf("Enter marks of student %d: ", i + 1);
		scanf("%d", &students[i].marks);
	}
	fp = fopen("students.txt", "ab");
	if (fp == NULL)
	{
		printf("Error opening file.\n");
		return 1;
	}
	fwrite(students, sizeof(struct Student), n, fp);
	fclose(fp);
	printf("Student information written to file.\n");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
void writeToFile(const char *filename) {
    FILE *fp;
    char sentence[100];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, 100, stdin);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(fp, "%s", sentence);
    fclose(fp);
}
void readFromFile(const char *filename) {
    FILE *fp;
    char ch;
    fp = fopen(filename, "r"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}
void appendToFile(const char *filename) {
    FILE *fp;
    char sentence[100];
    printf("Enter a sentence to append: ");
    fgets(sentence, 100, stdin);

    fp = fopen(filename, "a"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(fp, "%s", sentence);
    fclose(fp);
}
int main() {
    writeToFile("data.txt");
    readFromFile("data.txt");
    appendToFile("data.txt");
    readFromFile("data.txt");
    return 0;
}
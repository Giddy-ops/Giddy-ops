#include <stdio.h>
#include <stdlib.h>

void writeSentenceToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence written to file.\n");
}

void readFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

void appendSentenceToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[101];
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence appended to file.\n");
}

int main() {
    writeSentenceToFile();
    readFile();
    appendSentenceToFile();
    readFile();

return 0;
}

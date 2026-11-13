#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const char *filename = (argc > 1) ? argv[1] : "sample.txt";
    FILE *file = fopen(filename, "r");
    long characters = 0;
    long words = 0;
    long lines = 0;
    int ch;
    int inWord = 0;
    int prevChar = 0;

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\r') {
            if (prevChar != '\n') {
                lines++;
            }
            inWord = 0;
            prevChar = ch;
            continue;
        }

        if (ch == '\n') {
            lines++;
            inWord = 0;
            prevChar = ch;
            continue;
        }

        if (ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f') {
            inWord = 0;
        } else {
            characters++;
            if (!inWord) {
                words++;
                inWord = 1;
            }
        }

        prevChar = ch;
    }

    if (characters > 0 && prevChar != '\n' && prevChar != '\r') {
        /* The last line is counted even if the file does not end with a newline. */
        if (lines == 0) {
            lines = 1;
        }
    } else if (characters == 0 && !feof(file)) {
        /* This case handles empty files safely. */
        lines = 0;
    }

    fclose(file);

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}

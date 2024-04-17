// c program to show importance of write file function

#include <stdio.h>

void writeFile() {
    FILE *fp;
    fp = fopen("output.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "This is written to a file.\n");
        fclose(fp);
        printf("Data written to file successfully.\n");
    } else {
        printf("Failed to open file.\n");
    }
}

int main() {
    writeFile();
    return 0;
}

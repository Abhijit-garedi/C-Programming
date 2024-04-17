// Program to Read from a File

 #include <stdio.h>

void readFile() {
    FILE *fp;
    char buffer[100];
    fp = fopen("input.txt", "r");
    if (fp != NULL) {
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
        fclose(fp);
    } else {
        printf("Failed to open file.\n");
    }
}

int main() {
    readFile();
    return 0;
}

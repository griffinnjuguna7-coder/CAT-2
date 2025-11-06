//simple c programming
/*
name: Griffin Waruinge Njuguna 
Reg: CT101/G/26480/25
Description: CAT 2
*/

#include <stdio.h>

void writeInputFile() {
    FILE *f = fopen("input.txt", "w");
    if (f == NULL) {
        printf("Error opening input.txt for writing.\n");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(f, "%d\n", num);
    }

    fclose(f);
}

void processFile() {
    FILE *f = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (f == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    float avg = (count > 0) ? (float)sum / count : 0;
    fprintf(out, "Sum: %d\nAverage: %.2f\n", sum, avg);

    fclose(f);
    fclose(out);
}

void displayFiles() {
    FILE *f = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "r");

    if (f == NULL || out == NULL) {
        printf("Error opening files for display.\n");
        return;
    }

    printf("\nContents of input.txt:\n");
    int num;
    while (fscanf(f, "%d", &num) == 1) {
        printf("%d ", num);
    }

    printf("\n\nContents of output.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }

    fclose(f);
    fclose(out);
}

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}
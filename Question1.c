#include <stdio.h>

int main()
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++)
    {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d, ", i);
        } else {
            fprintf(oddFile, "%d, ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    evenFile = fopen("even_file.txt", "r");
    oddFile = fopen("odd_file.txt", "r");

    printf("Even numbers from even_file.txt:\n");
    char ch;
    while ((ch = fgetc(evenFile)) != EOF)
    {
        putchar(ch);
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt:\n");
    while ((ch = fgetc(oddFile)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(evenFile);
    fclose(oddFile);

    return 0;
}

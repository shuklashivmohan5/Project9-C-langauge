#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    struct Student students[NUM_STUDENTS];
    int i;

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf(" %[^\n]", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = total / 3.0;

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total);
        printf("Percent => %.2f%%\n", percentage);
        printf("\n");
    }

    return 0;
}

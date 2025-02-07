#include <stdio.h>

int main() {
    int a[4][6], total = 0, i, j;

    printf("Enter the marks:\n");
    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 6; j++) 
		{
            printf("Enter marks for student %d, subject %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) 
	{
        total += a[i][3];
    }

    printf("Total marks in the 3rd subject: %d\n", total);
}


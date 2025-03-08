#include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of List: ");
    scanf("%d", &n);
    char grs[n][100];
    FILE *file = fopen("Groceries.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter item %d: ", i + 1);
        scanf("%s", grs[i]);
    }
    for (i = 0; i < n; i++) {
        fprintf(file, "%s\n", grs[i]);
    }
    fclose(file);
    printf("Data written to file successfully!\n");
    return 0;
}

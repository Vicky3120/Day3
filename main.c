#include <stdio.h>

int main() {
    FILE *file = fopen("banking.txt", "w");
    if (file == NULL) {
        printf("Error!");
        return 1;
    }

    fseek(file, 0, SEEK_SET);
    fprintf(file, "Bank details: \n");
    fprintf(file, "First Name: Vicky \n");
    fprintf(file, "Last Name: M R\n");
    fprintf(file, "Bank ID: 152648\n");
    fprintf(file, "Your Bank Details: xxxxxxx\n");
    fprintf(file, "Savings account: 542600\- \n");

    fclose(file);
    return 0;
}

#include <stdio.h>
#include<string.h>
void swapData(char str1[], char str2[], float *num1, float *num2) {
    char tempStr[100];
    strcpy(tempStr, str1);
    strcpy(str1, str2);
    strcpy(str2, tempStr);

    float tempNum = *num1;
    *num1 = *num2;
    *num2 = tempNum;
}

int main() {
    char companyName[4][100];
    float capital[4], tax[4];
    
    // Read company data
    for (int i = 0; i < 4; i++) {
        printf("Enter capital for company %d: ", i + 1);
        scanf("%f", &capital[i]);
        getchar();  // consume the newline character
        printf("Enter company name %d: ", i + 1);
        fgets(companyName[i], sizeof(companyName[i]), stdin);
    }

    // Calculate taxes
    for (int i = 0; i < 4; i++) {
        if (capital[i] <= 300000) {
            tax[i] = 0.1 * capital[i];
        } else if (capital[i] <= 1000000) {
            tax[i] = 0.175 * capital[i] - 22500;
        } else {
            tax[i] = 0.31 * capital[i] - 157500;
        }
    }

    // Sort companies based on capital (descending order)
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (capital[i] < capital[j]) {
                swapData(companyName[i], companyName[j], &capital[i], &capital[j]);
                // Also swap tax amounts accordingly
                float tempTax = tax[i];
                tax[i] = tax[j];
                tax[j] = tempTax;
            }
        }
    }

    // Display results
    printf("\nCompany\t\tCapital\t\tTax\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\t\t%.2f\t\t%.2f\n", companyName[i], capital[i], tax[i]);
    }

    return 0;
}


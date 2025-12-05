#include <stdio.h>

int main() {
    int startYear, endYear;

   
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    
    for (int year = startYear; year <= endYear; year++) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }

    return 0;
}
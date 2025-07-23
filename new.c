#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter the date in DD/MM/YYYY format: ");
    // Use %d/%d/%d to match the integer values separated by slashes
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered: Day = %d, Month = %d, Year = %d\n", day, month, year);

    return 0;
}
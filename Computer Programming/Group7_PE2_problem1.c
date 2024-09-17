#include <stdio.h>

int main() {
    // Declaration of variables
    int total_seconds, hours, minutes, seconds, remaining_seconds;

    // Input: Prompting user for total seconds
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    // Processing: Compute hours, minutes, and seconds
    hours = total_seconds / 3600;  // Calculate hours
    remaining_seconds = total_seconds % 3600;  // Calculate remaining seconds
    minutes = remaining_seconds / 60;  // Calculate minutes
    seconds = remaining_seconds % 60;  // Calculate seconds

    // Output: Display the result
    printf("That is %d hours, %d minutes and %d seconds.\n", hours, minutes, seconds);

    return 0;
}

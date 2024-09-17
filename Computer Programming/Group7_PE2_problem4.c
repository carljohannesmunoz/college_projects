#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Ask user for the Earth weight*/
    float earth_weight;
    printf("Enter weight on Earth (in kg): ");
    scanf("%f", &earth_weight);

   float mars_weight = earth_weight*0.38;
   float moon_weight = earth_weight*0.165;
   float jupiter_weight = earth_weight*2.34;

    printf(" Weight in Mars: %.2f kg \n", mars_weight);
    printf(" Weight in Moon: %.2f kg \n", moon_weight);
    printf(" Weight in Jupiter: %.2f kg \n", jupiter_weight);


    return 0;
}

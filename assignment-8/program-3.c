#include<stdio.h>
#include<math.h>

int main()
{
    /* write a program to check if the roots of a given quadratic equation
      are real, distinct & equal or immaginary roots
    */
   float a, b, c , discriminant;

   printf("Enter coerfficients (a, b, c) of a quadratic equation: ");
   scanf("%f %f %f", &a, &b, &c);

   // calculate discriminant
   discriminant = (b * b) - (4 * a * c);

   // check nature of roots using discriminant
   if(discriminant > 0) {
    printf("Roots are real and distinct \n");
    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("Root 1 = %.2f\nRoot 2 = %.2f", root1, root2);
   } else if(discriminant == 0) {
    printf("Roots are real and equal\n");
    float root = -b / (2*a);
    printf("Root = %.2f\n", root);
   } else {
    printf("Roots are immaginary\n");
    float realPart = -b/(2*a);
    float imagPart = sqrt(-discriminant) / (2 * a);
    printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
    printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
   };
   return 0;


};

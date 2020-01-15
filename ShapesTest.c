/*******************************************************************
@Title Header File
@Purpose Geometrical Objects Request - Main
@(Byrd, Jessica)
@Date 04/12/2019
@Version 1.0
*******************************************************************/
#include "Shapes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 
//Sphere
float radiusSphere;
float surfaceSphere;
float volumeSphere;

//Cylinder
float radiusCylinder;
float heightCylinder;
float volumeCylinder;

//Sine
float angle;
float sineAngle;

//sumFloat
int numberSorted;
float sumSort;

//Radius of the Sphere
printf("\nEnter the radius of the Sphere\n");
scanf("%f", &radiusSphere);
printf("%f\n", radiusSphere);

//Sphere Function
sphere(radiusSphere, &surfaceSphere, &volumeSphere);

//Print the Radius, Surface Area & Volume of the Sphere
printf("\nThe Sphere has a radius of: %f\n", radiusSphere);
printf("\nThe Surface Area of the Sphere is: %f\n", surfaceSphere);
printf("\nThe Volume of the Sphere is: %f\n\n", volumeSphere);

//Volume of the Cylinder
printf("\nEnter the radius of the Cylinder:\n");
scanf("%f", &radiusCylinder);
printf("%f", radiusCylinder);

//Height of the Cylinder
printf("\nEnter the Height of the Cylinder: \n");
scanf("%f", &heightCylinder);
printf("%f", heightCylinder);

//Cylinder Function
volumeCylinder = volCylinder(radiusCylinder, heightCylinder);

//Print The Volume & Height of the Cylinder
printf("\nThe Volume of the Cylinder is: %f\n\n", volumeCylinder);

//sumFloat
printf("\nEnter how many numbers you would like to sort: \n");
scanf("%d", &numberSorted);
printf("%d\n", numberSorted);

float x[numberSorted];

for(int i = 0; i < numberSorted; i++)
{
  printf("Enter a floating point number: ");
  scanf("%f", &x[i]);
  printf("%f\n",x[i]); 
}

  sumSort = sumFloats(x, numberSorted);

//Print Sum of the floating point number
printf("The sum of your floating point number: %d is: %f\n\n", numberSorted, sumSort);

//Sine
for(int i = 0; i < 3; i++)
{
   printf("\nEnter the angle in degrees to compute its sine: \n");
   scanf("%f", &angle);
   printf("%f", angle);

   sineAngle = sine(angle);

   printf("\nThe sin of the angle is: %f\n\n", sineAngle); 

}

   return 0;

}

//End of Program




/*******************************************************************
@Title Header File
@Purpose Geometrical Objects Request - Functions
@(Byrd, Jessica)
@Date 04/12/2019
@Version 1.0
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Compute the Surface Area and Volume of a Sphere
void sphere(float radius, float *surface, float *volume)
{

  //Surface Area of a Sphere
  *surface = 4 * M_PI *(pow(radius, 2));
  
  //Volume of a Sphere
  *volume = (4.0 / 3.0) * M_PI *(pow(radius, 3));

	return;

}

//Compute the volume of a Sphere
float volCylinder(float radius, float height)
{
   //Volume 
   float volume;

   volume = (M_PI *(pow(radius, 2)) * height);

	return(volume);

}

//sumFloats
float sumFloats(float x[], int numFloats)
{
   
//Declaration & Initilization
int j;
int pT;
int k;
int temp;
float sum = 0;
	
	//Flow chart
	for(j = 0; j < numFloats - 1; j++)
	{
	   pT = j;
	   k = j + 1;
	
		while(k < numFloats)
		{
			if(x[pT] > x[k])
			{
				pT = k;

			}

				k = k + 1;
		}

		temp = x[j];
		x[j] = x[pT];
		x[pT] = temp;
	}

	printf("\nThe sorted values are: \n");
        //Not calculating to the right of the radix
	//Can't figure this out...spent many hours 
	
	for(int m = 0; m < numFloats; m++)
	{
	   printf("%f\n", x[m]);

	}
	
	    for(int n = 0; n < numFloats; n++)
	      {
    	          sum += x[n];
	      }

		      return(sum);
}

	int fact(int n)
	{
	  if(n == 0 || n == 1)

	    return 1;

		else
                      return n * fact(n-1);
	}


//Sine
double sine(float angle)
{

   const double EPSILON = 0.000001; 

   float radian = angle * (M_PI/180);

   float sine = 0;
   float oldSine = 100;
   int i = 0;

   while(fabs(sine - oldSine) > EPSILON || sine == 0)
   {
      oldSine = sine;
      //Sine summation 
      sine += (pow(-1, i) / fact((2 * i) + 1)) * (pow(radian, (2 * i) + 1));
      i++;	

   }
	return(sine);

}
//End of Program

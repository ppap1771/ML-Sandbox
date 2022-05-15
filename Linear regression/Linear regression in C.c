// linear regression
#include <stdio.h>
#include <stdbool.h>
float sigma(float mat[][2], float a1, float a2, bool flag)
{
 
  float sum = 0;
  for (int i = 0; i < 200; i++)
  {
    if (flag)
    {
      // printf("Equation 1: [ (%f * %f)+%f  -  %f ] * %f\n", a1, mat[i][0], a2, mat[i][1], mat[i][0]);
      sum = sum + (((a1 * mat[i][0] + a2) - mat[i][1]) * mat[i][0]);
    }
    else
    {
      // printf("Equation 2: (%f * %f)+%f  -  %f\n", a1, mat[i][0], a2, mat[i][1]);
      sum = sum + (((a1 * mat[i][0] + a2) - mat[i][1]));
    }
  }
  //printf("Sum: %.2f\n", (sum /200));
  return (sum / 200);
}
int main()
{
  int i, j;
  float mat[200][2], a1 = 10, a2 = 10, temp1 = 0, temp2 = 0, lr = 0.00001, error = 0;
  for (i = 0; i < 200; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%f", &mat[i][j]);
    }
  }
  // displaying the inputs
//  printf("\nInput Matrix: \n\n");
//   for (i = 0; i < 200; i++)
//   {
//     for (j = 0; j < 2; j++)
//     {
//       printf("%.1f\t", mat[i][j]);
//     }
//     printf("\n");
//   }

  // main algorithm
  for (i = 0; i < 1000000; i++)
  {
    temp1 = a1 - lr * sigma(mat, a1, a2 , true);
    temp2 = a2 - lr * sigma(mat, a1, a2 , false);
    a1 = temp1;
    a2 = temp2;
    printf("Temp parameter: %f,%f\n", a1, a2); 
  }
  printf("Final parameter: %f,%f\n", a1, a2); 
  printf("\n-------------------------------------\n\n");
 
  // testing the hypothesis
//   for (i = 180; i < 200; i++)
//   {
//     error = error + ((a1 * mat[i][0] + a2) - mat[i][1]);
//   }
//   printf("Error: %f \n", error);
  return 0;
}
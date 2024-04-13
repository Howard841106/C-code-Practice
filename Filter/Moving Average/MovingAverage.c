#include <stdio.h>
#include <stdlib.h>
//=========Macro========
#define WINDOW 4

//========Function=======
float movingAvg(int *ptrArrNumbers, int *ptrSum, int *pos, int nextNum);



int main(int argc, char *argv[])
{
  // a sample array of numbers.
  int sample[] = {50, 10, 20, 18, 20, 100, 18, 10, 13, 500, 50, 40, 10};

  int *arrNumbers = (int*)calloc(WINDOW,sizeof(int));

  int pos = 0;
  float newAvg = 0;
  int sum = 0;
  int count = sizeof(sample) / sizeof(int);

  for(int i = 0; i < count; i++){
    newAvg = movingAvg(arrNumbers, &sum, &pos, sample[i]);
    printf("sum of window %d\n",(int)(sum*0.01));
    printf("The new average is %f\n", newAvg);
  }

  free(arrNumbers);

  return 0;
}


/// @brief calculate the moving average 
/// @param ptrArrNumbers sample pointer
/// @param ptrSum sum of window
/// @param pos oldest number in filter
/// @param nextNum Next element in sample
/// @return 
float movingAvg(int *ptrArrNumbers, int *ptrSum, int *pos, int nextNum)
{
    nextNum = nextNum * 100;
  //Subtract the oldest number from the prev sum, add the new number
  *ptrSum = *ptrSum - ptrArrNumbers[*pos] + nextNum;
  //Assign the nextNum to the position in the array
  ptrArrNumbers[*pos] = nextNum;
  *pos += 1;
  if (*pos >= WINDOW){
    *pos = 0;
  }
  //return the average
  return (*ptrSum >> 2)*0.01;
}
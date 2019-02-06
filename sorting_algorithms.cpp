/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include <cstdbool>
#include "general.h"
#include <time.h>

void bubble_sort(int numbers[], unsigned long len)
{
  bool swapped = false;
  do
  {
    swapped = false;
    for (unsigned long i = 0; i < len-1; i++)
    {
      if(numbers[i] > numbers[i+1])
      {
        int temp =numbers[i];
        numbers[i] = numbers[i+1];
        numbers[i+1] = temp;
        swapped = true;
      }

    }
  } while(swapped);
}


void init_random(int *array, unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
  {
	   array[i] = random();
  }
}

void insertion_sort(int numbers[], unsigned long len)
{
  int j;
  for (unsigned long  i = 1; i < len; i++)
  {
    j = i;
    while (j> 0 && numbers[j-1]>numbers[j])
    {
      int temp = numbers[i];
      numbers[i] = numbers[i-1];
      numbers[i+1] = temp;
      j--;
    }
  }

}

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
#include "sorting_algorithms.h"
#include <math.h>
#include <unistd.h>
#include "time.h"
void init_random(int array[], unsigned long length)
{
  srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}
void bubble_sort(int small_array[], unsigned long SMALL)
{
  int last_unsorted_element = SMALL - 1;
  bool elements_were_swapped = false;
    do
    {
      elements_were_swapped = false;
      for (int j = 0; j < last_unsorted_element; j++)
      {
        if (small_array[j] > small_array[j + 1])
        {
            int temp = small_array[j];
            small_array[j] = small_array[j+1];
            small_array[j+1] = temp;
            elements_were_swapped = true;
        }
      }
      last_unsorted_element--;
    } while (elements_were_swapped);
}
void insertion_sort(int small_array[], unsigned long SMALL)
{
  int key;
  int i;
    for (int j = 1; j < SMALL; j++) {
      key = small_array[j];
      i = j - 1;
      while (i >= 0 && small_array[i] > key) {
        small_array[i + 1] = small_array[i];
        i--;
      }
      small_array[i + 1] = key;
    }
}

/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

double start;
double end;

void start_stopwatch()
{
    start = clock();
}
double elapsed_time()
{
    if (end < start)
    {
        return (clock() - start) / CLOCKS_PER_SEC;
    }
    return (end - start) / CLOCKS_PER_SEC;
}
void stop_stopwatch()
{
    end = clock();
}

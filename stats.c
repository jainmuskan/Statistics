/**************************************************************************//**
 * @file stats.c
 * @brief C-Program to calculate some statistics
 * 
 * @author Muskan Jain
 * @date 20-06-2020
 *
 * A simple C-Program to calculate some statistics on a set of numbers. It 
 * finds the:
 *     -Maximum
 *     -Minimum
 *     -Mean
 *     -Median
 *
 *****************************************************************************/



#include <stdio.h>
#include "stats.h"



/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes a set of numbers and finds the mean of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Mean of the numbers provided.
 *****************************************************************************/
 int find_mean(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes a set of numbers and finds the median of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Median of the numbers provided.
 *****************************************************************************/
 int find_median(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: find_maximum
 * Description:
 *     This function takes a set of numbers and finds the maximum of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Maximum of the numbers provided.
 *****************************************************************************/
 int find_maximum(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes a set of numbers and finds the minimum of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Minimum of the numbers provided.
 *****************************************************************************/
 int find_minimum(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: sort_array
 * Description:
 *     This function takes a set of numbers and sorts them from largest to 
 *     smallest.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Void.
 *****************************************************************************/
 void sort_array(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function takes a set of numbers and prints the statistics of them
 *     including minimum, maximum, mean, and median.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Void.
 *****************************************************************************/
 void print_statistics(unsigned char * ptr, int size);

 /******************************************************************************
 * Function: print_array
 * Description:
 *     This function takes a set of numbers and prints them on the screen.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Void.
 *****************************************************************************/
  void print_statistics(unsigned char * ptr, int size);

 

 /******************************************************************************
 * 
 * Constants declared
 * 
 *****************************************************************************/
#define SIZE (40)



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

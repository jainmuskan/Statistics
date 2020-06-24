/**************************************************************************//**
 * @file stats.h
 * @brief Header file for statistics
 * 
 * @author Muskan Jain
 * @date 20-06-2020
 *
 * A header file for C-Program to calculate some statistics on a set of numbers.
 * It finds the:
 *     -Maximum
 *     -Minimum
 *     -Mean
 *     -Median
 *
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>

#define SIZE (40)

/**
 * @brief function finds the mean of the set
 * 
 * This function takes a set of numbers and finds the mean of the set.
 *
 * @param v6 Pointer to an unsigned char type and size of int type                                                                                                                                                                                                                                                                                                                                     to an unsigned char type, size of int type
 *
 * @return integer value equal to mean of the data
 */
int find_mean(unsigned char * ptr, int size);

/**
 * @brief function finds the median of the set
 * 
 * This function takes a set of numbers and finds the median of the set.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return integer value equal to median of the data
 */
int find_median(unsigned char * ptr, int);

/**
 * @brief function finds the maximum of the set
 * 
 * This function takes a set of numbers and finds the maximum of the set.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return integer value equal to maximum of the data
 */
int find_maximum(unsigned char * ptr, int);

/**
 * @brief function finds the minimum of the set
 * 
 * This function takes a set of numbers and finds the minimum of the set.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return integer value equal to minimum of the data
 */
int find_minimum(unsigned char * ptr, int);

/**
 * @brief function finds the minimum of the set
 * 
 * This function takes a set of numbers and finds the minimum of the set.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return integer value equal to minimum of the data
 */
int find_minimum(unsigned char * ptr, int);

/**
 * @brief function that sorts the set
 * 
 * This function takes a set of numbers and sorts the set from the largest
 * to the smallest. 
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return void 
 */
void sort_array(unsigned char * ptr, int);

/**
 * @brief function that prints the set
 * 
 * This function takes a set of numbers prints them on the screen.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return void 
 */
void print_array(unsigned char * ptr, int);

/**
 * @brief function that prints the statistics of the set
 * 
 * This function takes a set of numbers and prints the statistics of them
 * including minimum, maximum, mean, and median on the screen.
 *
 * @param v6 Pointer to an unsigned char type size of int type                                                                                                                                                                                                                                                                                                                                      to an unsigned char type, size of int type
 *
 * @return void 
 */
void print_statistics(unsigned char * ptr, int);


#endif /* __STATS_H__ */
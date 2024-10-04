/**************************************************************************
 File name:  listtester.c
 Author:     Computer Science, Pacific University
 Date:
 Class:
 Assignment:
 Purpose:
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "../include/list.h"
#include "../include/driverUtil.h"

/**************************************************************************
 Function: 	 	printList

 Description: Prints a list of integers for debugging purposes.

 Parameters:	psTheList - the list of integers to be printed

 Returned:	 	none
 *************************************************************************/
//static void printIntList (ListPtr psTheList)
//{
  // TODO: write this
//}
/**************************************************************************
 Function: 	 	printCharList

 Description: Prints a list of chars for debugging purposes.

 Parameters:	psTheList - the list of chars to be printed

 Returned:	 	none
 *************************************************************************/
//static void printCharList (ListPtr psTheList)
//{
  // TODO: write this
//}
/**************************************************************************
 Function: 	 	main

 Description: test all the functionality of the list

 Parameters:	none
 Returned:	 	none
 *************************************************************************/

int main ()
{
	List sTheList;
	int i;
	int numValues;
	int count;

	puts ("Program Start");

	// run everything twice so you call
	// create after terminate!
	for (count = 0; count < 2 ; ++count)
	{
		lstCreate (&sTheList, sizeof(int));

		assert( 0 == lstSize (&sTheList), "The list size is 0");


		numValues = 10;
		for (i = 0; i < numValues; ++i)
		{
			lstInsertAfter (&sTheList, &i);

			if( i+1 != lstSize (&sTheList) )
			{
				assert( i+1 == lstSize (&sTheList), "The list size correctly sized");
			}
		}

		assert(lstFirst (&sTheList), "lstFirst after loop");

		for (i = 0; i < numValues; ++i)
		{
			// TODO
			// check that the data is in the correct order in the list
		}


		// For debugging purposes only
		// printIntList (sTheList);

		lstTerminate (&sTheList);
	}


  // B
  lstCreate(&sTheList, sizeof(int));
  i = 7;

	//lstInsertAfter (&sTheList, &i);

  lstTerminate (&sTheList);

	puts ("Program End");
	return EXIT_SUCCESS;
}

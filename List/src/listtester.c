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
#include <math.h>

#define assert(cond, trueMsg, falseMsg) \
checkAssert(cond, trueMsg, falseMsg, __FILE__, __LINE__)


/****************************************************************************
 Function: 	 	success

 Description: print a success message

 Parameters:	szStr - the message to print

 Returned:	 	none
****************************************************************************/
static void success (char* szStr) {
	printf ("SUCCESS: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	failure

 Description: print a failure message

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void failure (char* szStr) {
	printf ("FAILURE: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	checkAssert

 Description: if the expression is true, assert success; otherwise, assert
							failure
							DO NOT CALL THIS FUNCTION DIRECTLY
							use: assert(cond, trueMsg, falseMsg);

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void checkAssert (bool bExpression, char* pTrue, char* pFalse, 
char *szFile, int line) {

	char *pStr;
	int fileAndLineLength;
	const int SPACES = 5; // " - " ':' '\0'

	fileAndLineLength = strlen(szFile) + (int) log(line);

	if (bExpression) {
		pStr = malloc(strlen(pTrue) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pTrue, szFile, line);
		success (pStr);
	}
	else {
		pStr = malloc(strlen(pFalse) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pFalse, szFile, line);
		failure (pStr);
	}
	free(pStr);
	fflush(NULL);
}

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
		success ("List Created");

		assert( 0 == lstSize (&sTheList), "The list size is 0",
				"The list size is not 0");


		numValues = 10;
		for (i = 0; i < numValues; ++i)
		{
			lstInsertAfter (&sTheList, &i);

			if( i+1 != lstSize (&sTheList) )
			{
				assert( i+1 == lstSize (&sTheList), "The list size correctly sized",
					"The list size is wrong");
			}
		}

		lstFirst (&sTheList);

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

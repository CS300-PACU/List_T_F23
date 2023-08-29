#include "../include/list.h"
#include <stdlib.h>
#include <stdio.h>


void processError(const char* szFile, const int line)
{
  fprintf(stderr, "ERROR: %s: %d\n", szFile, line);
  fflush(NULL);
  exit(EXIT_FAILURE);
}

void lstCreate(ListPtr psList, size_t itemSize)
{
}

void lstTerminate(ListPtr psList)
{
}

int lstSize(const ListPtr psList)
{
  return 0;
}


bool lstIsEmpty(const ListPtr psList)
{
  bool bIsEmpty = true;

 
  return bIsEmpty;
}

bool lstHasCurrent(const ListPtr psList)
{
  bool bHasCurrent = true;
 
  return bHasCurrent;
}

bool lstHasNext(const ListPtr psList)
{
  bool bHasNext = true;
 
  return bHasNext;
}

void* lstPeek(const ListPtr psList, void *pBuffer)
{

  return NULL;
}

void* lstPeekNext(const ListPtr psList, void *pBuffer)
{
  return NULL;
}

void lstFirst(ListPtr psList)
{

}

void lstLast(ListPtr psList)
{
}


void lstNext(ListPtr psList)
{
}

void lstInsertAfter(ListPtr psList, const void *pBuffer)
{
}

void lstInsertBefore(ListPtr psList, const void *pBuffer)
{
}

void *lstDeleteCurrent (ListPtr psList, void *pBuffer)
{

  return NULL;
}

void lstUpdateCurrent (ListPtr psList, const void *pBuffer)
{
}

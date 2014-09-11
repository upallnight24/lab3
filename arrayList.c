#include <stdlib.h>
#include <stdio.h>
#include "arrayList.h"
// Martin H. Davis
// CS 3481
// LAb 3
// YESS
// Y 86 Lab
// We are constructing an Struct in C which on.  
// This is used to initialize the type field of the arrayList struct and 
// to figure out how many bytes the dynamically 
// allocated array should be.  Also, notice that array within the struct is 
// declared to be of type void *. This allows us to keep any type of data in the array.
arrayList * initialize(primitiveType type)
{  // this is nothing but a" constructor"
    arrayList *arr;
    //arr = (arrayList *)malloc(sizeof(arrayList));    
    arr = (arrayList *)malloc(getSize(type)*4*4);
    arr->type = type;
    arr->arraySize = 4;
    arr->numElements = 0;
    arr->elementSize = getSize(type); //sets size of array elements to prim type
    return arr;
}

int getSize(primitiveType type)
{

    // takes as input a primitive type value and returns
    // the num of bytes in a variable of that prim type
    // use of the sizeof operator.:
    if (type == charType) return sizeof(char);
    if (type == shortType) return sizeof(short);
    return sizeof(type);      
}

void addElement(arrayList * arylstP, void * element)
{

// In worries of me submitting a late assignment I am sending this file to 
// repository
//this function is one element to add element at end of array
//needs to double size of array 
//
//int element;

   return;
}

void removeElement(arrayList * arylstP, int index)
{
   return;
}
      

void printArray(arrayList * arylstP)
{
   int i;
   printf("array size: %d, num elements: %d contents: ", 
          arylstP->arraySize, arylstP->numElements);
   for (i = 0; i < arylstP->numElements; i++)
   {
      if (arylstP->type == charType)
         //fill in the missing code that gets the element and &s it with 0xff
         printf("%02x ", 0xff);
      else if (arylstP->type == shortType)
         //fill in the missing code that gets the element and &s it with 0xffff
         printf("%04x ", 0xffff);
      else if (arylstP->type == intType)
         //fill in the missing code that gets the element and &s it with 0xffffffff
         printf("%08x ", 0xffffffff);
   }
   printf("\n");
}


 #include <stdio.h>
  #include <stdlib.h>
   
/**
*Write a program that prints the number of arguments passed into it.
*@argc: counter of array.
*@argv: array for string.
*Return: return 0.
*/

   int main (int argc, char** argv)
   {
           int i = 0;
          
	   if (i <= **argv)
          {
          printf("%d\n", argc);
          i++;
          }
          return (0);

      
  }

#include <stdio.h>

// DUET has following grading scheme, write programming code to implement the grading scheme. Marks will be entered by the user;

int main()
{

   int marks;

   printf("Enter your marks :");
   scanf("%d", marks);

   if (marks >=85)
   {
      printf("Grade : 4.0 \n Letter Grade : A+");

   }
   else if (80<=marks && marks <85)
   {
      printf("Grade : 3.7 \n Letter Grade : A");
   }
   else if (75<=marks && marks <80)
   {
      printf("Grade : 3.5 \n Letter Grade : B+");
   }
   else if (70<=marks && marks <75)
   {
      printf("Grade : 3.0 \n Letter Grade : B");
   }
   else if (65<=marks && marks <70)
   {
      printf("Grade : 2.5 \n Letter Grade : C+");
   }
   else if (60<=marks && marks <65)
   {
      printf("Grade : 2.0 \n Letter Grade : C");
   }

   else if (55<=marks && marks <60)
   {
      printf("Grade : 2.0 \n Letter Grade : D+");
   }
   else if (50<=marks && marks <55)
   {
      printf("Grade : 1.5 \n Letter Grade : D");
   }
   else
   {
      printf("Grade : 1.5 \n Letter Grade : F");
   }

   return 0;
}

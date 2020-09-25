//code

#include <stdio.h>

int main()
{
   int ch;
   printf("*****MENU*****\n");
   printf("1:Pizza\n");
   printf("2:Burger\n");
   printf("3:Pasta\n");
   printf("4:French Fries\n");
   printf("5:Sandwich\n");
   
   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
       printf("Food item - Pizza");
       printf("Price - Rs 239");
       break;
       
       case 2:
       printf("Food item - Burger");
       printf("Price - Rs 129");
       break;
       
       case 3:
       printf("Food item - Pasta");
       printf("Price - Rs 179");
       break;
       
       case 4:
       printf("Food item - French Fries");
       printf("Price - Rs 99");
       break;
       
       case 5:
       printf("Food item - Sandwich");
       printf("Price - Rs 149");
       break;

       default:
       printf("Invalid Choice!");
   }
   return 0;
}

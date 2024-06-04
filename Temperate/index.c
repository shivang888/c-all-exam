// Write a program to print all alphabets from a to z by skipping 3 alphabets using do while loop.


// #include <stdio.h>
// int main(){

//     char c='a';
//     do{
//         printf(" %c ",c);
//         c=c+4;
//     }
//     while(c<='z');
//     return 0;
// }

// Q.2 Write a program to count the total number of digits in a number

// #include<stdio.h>
// int main(){
//  int a;
//  int count=0;

//  printf("Enter any number:");
//  scanf("%d",&a);

//  while (a!=0)
//  {
//      a=a/10;
//      count++;
//  }
//  printf("Count is %d\n",count);

//   return 0;
// }




// Q.3

#include<stdio.h>
int main(){
   int first,secod,third;

   printf("Enter your Firstvalue:");
   scanf("%d",&first);

   printf("Enter your Secondvalue:");
   scanf("%d",&secod);

   printf("Enter your Thirdvalue:");
   scanf("%d",&third);

   int sum=first+third;

   printf("%d",sum);

  return 0;
}
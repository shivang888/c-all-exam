// Q.1 Write a program to check Whether a number is even or odd using the ternary operator.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter your any number:");
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("your number is Even");
//     }
//     else{
//         printf("your Number is Odd");
//     }
//     return 0;
// }

// Q.2 Write a program to input elctricity unit charges  and calculate the total electricity bill according to the given

#include <stdio.h>

int main() {
    float units, total_bill, surcharge;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 300) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 150 * 1.20 + (units - 300) * 1.50;
    }

    surcharge = total_bill * 0.20;
    total_bill += surcharge;

    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}

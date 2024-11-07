//writing a program that requests the user to enter the hours worked and hourly wage.
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24 */

#include <stdio.h>

int main(){
    //declaring variables
   float hours;
   float hourlywage;
   float overtime;
   float totalovertime;
   float totalhours;
   float grosspay;
   float taxA, taxB;
   float netpay, totaltax;
//prompting the user to enter the number of hours worked
   printf("Enter the number of hours worked:\n");
   scanf("%d", &hours);
//usig if else statement
   if(hours > 40){
    overtime = hours - 40;

    totalovertime = overtime * 0.5;
    totalhours = totalovertime + 40;

   }
   //prompting the user to enter the hourly wage.
   printf("Enter the hourly wage:");
   scanf("%f", &hourlywage);

   grosspay=totalhours*hourlywage;
   printf("The grosspay is %f\n", &grosspay);

   if(grosspay==600){
    taxB =600*0.15;
    netpay=grosspay -taxA;
    printf("The netpay is %f\n", &netpay);
   }

   if(grosspay > 600){
    taxB =(grosspay - 600)*0.2;
    netpay =grosspay -(taxA + taxB);
    printf("The net pay is %f\n", &netpay);
    totaltax=taxA+taxB;
    printf("The total tax is %f", &totaltax);

   }

  return 0;
}

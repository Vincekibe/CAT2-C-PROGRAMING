//An array structure is a data structure that stores a fixed size sequence of elements of the same data type.
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24 */

#include <stdio.h>

int main(){
    //initializing a 2d array named score
   int scores[2][2][2] = {{{65, 92}, {35, 70}}, {{84, 72}, {59, 67}}};
//declaring variables
   int a, b, c;
//using a for loop
   for(a=0;b<2;a++){
    for(b=0;b<2;b++){
      for(c=0;c<2;c++){
        //printing the initialized variables
        printf("[%d][%d][%d]=%d", a, b ,c,scores[a][b][c]);
        }
        printf("\n");
    }
         printf("\n");
   }
  return 0;
}

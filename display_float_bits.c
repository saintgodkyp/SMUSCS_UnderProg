/* 
 * Display bits to show how to store floating-point numbers in memory 
 * Writer: Y. Kim (ypkim@semyung.ac.kr)
 * Oct. 2020
*/
#include<stdio.h>

void display_binary(float num)
{
     int i;
     int* iNum = (int*)&num;
     for (i = 0; i < 32; i++)
     {
         if (i % 4 == 0 && i != 0) printf(" ");
         printf("%c", ((*iNum >> (31 - i) & 0x01) == 0 ? '0' : '1'));
     }
     printf("\n");
}

int main()
{
    float num[10] = {2.0, -2.0, 4.0, 6.0, 1., .75, 2.5, .1, 0.0, 1e39};
    
    for (int i = 0; i < 10; i++) {
        printf("float %04.4f = ", num[i]);
        display_binary(num[i]);
    }
  
	return 0;
}


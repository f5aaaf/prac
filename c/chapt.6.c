#include <stdio.h>
#include <stdlib.h>

//Chapter 6 practice following the C tutorial from beej.us


// this is a macro, essentially, a short hand defined at the top of compiling,
// this is used to define calculations ahead of time, to prevent duplicate code.
#define ArrSize(x) (sizeof(x)/sizeof((x)[0]))


void arr1(void)
{
    /*
      here, an array of floats is instantiated, in C, an array has to be intantiated with
      an explicit size, here a size of 4.
      the size is then retrieved using the aforementioned macro.
      this is then iterated over, and populated with random numbers.
      then iterated over again, and each position printed.
     */
    float f[4];
    for (int i = 0; i<4 ; i++){
        f[i] = rand();
    };
    printf("length of array: %ld\n",ArrSize(f));
    for(int i = 0; i<ArrSize(f);i++){
        printf("%f\n",f[i]);
    };
}

void arr2(void){
    /*
      arrays can be initialised with values, by using curly braces.
     */

    int a[5] = {1,2,3,4,5};
    for(int i=0;i<ArrSize(a);i++) printf("%d\n",a[i]);

}

void arr3(void){

}


int main(void){

    int exno;
    printf("enter an exercise number:");
    scanf("%d",&exno);

    switch (exno) {
        case 1:
            arr1();
            break;
        case 2:
            arr2();
            break;
        case 3:
            arr3();
            break;
        default:
            printf("not an exercise");
    }
}



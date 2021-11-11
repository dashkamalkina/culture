#include <stdio.h>
#include <malloc.h>


int main()
{
    float arr[4] = {-8.8, 11.2, 64.67, 55.32};
    float *arr_c = arr;
    for(int i=0; i<4 ; i++){
        printf("%lf ", *arr_c++);
    }
    printf("\n");

    float *arr_2 = (float *) malloc(4*sizeof(float));
    arr_2[0] = -8.8;
    arr_2[1] = 11.2;
    arr_2[2] = 64.67;
    arr_2[3] = 55.32;
    for(int i=0; i<4; i++) {
        printf("%f ", arr_2[i]);
    }
    free(arr_2);
}
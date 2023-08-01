#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* logic to reverse the array. */
    int arr2[num];
    for(int i=0;i<num;i++){
        arr2[i]=arr[num-i-1];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}
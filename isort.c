#include <stdio.h>
#include "isort.h"
#define arr_size 50
void shift_element(int* arr, int i){
    for(;i>0;i--){
        *(arr+i)=*(arr+i-1);
    }
}
void insertion_sort(int* arr , int len){
    int i,j,insert;
    for (i=1; i < len; i++)
    {   

        insert=*(arr+i);
        for(j=i;j>0 && *(arr+j-1)>insert;j--);

        shift_element(arr+j,i-j);

        *(arr+j)=insert;
    }
    
}
int main(){
    int i,ar[arr_size];
    for(i=0;i<arr_size;i++){
        scanf("%d",ar+i);
    }
    int* arr=ar;

    insertion_sort(arr,arr_size);
    
    printf("%d",*arr);
    for(i=1;i<arr_size;i++){
        printf(",%d",*(arr+i));
    }
    
    

}
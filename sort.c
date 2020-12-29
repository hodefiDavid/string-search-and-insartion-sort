#include <stdio.h>
#define LENGTH 50
void printArr(int* arr,int length){
    int* ptr= arr;
    for (int i=0;i<length-1;i++){
        printf("%d,",*ptr);
        ptr++;
    }
    printf("%d",*ptr);

    printf("\n");
}

void shift_element(int* arr, int i){
int temp = *arr;
int temp1 = *arr;
for (int j = 0; j < i; ++j) {
        arr++;
        temp1=*arr;
        *arr=temp;
        temp=temp1;
    }
}

void insertion_sort(int *arr , int len){

    int *ptr = arr;
    ptr++;
    int temp=*arr;
    int jumps = 0;
        for (int i = 1; i < len; ++i) {

            jumps = 0;
            for (int j = i-1; j >= 0; j--) {

                if (*ptr<*(arr+j)){
                    jumps++;
                }
            }

            if (jumps>0){
                temp=*ptr;

                shift_element((ptr-jumps),jumps);
                int *temp_ptr = ptr-jumps;

                *temp_ptr=temp;
            }
            ptr++;
        }
}


int main() {

int array[LENGTH] = {};

    for (int i = 0; i < LENGTH; ++i) {
        scanf(" %d",&array[i]);
    }
    insertion_sort(array,LENGTH);
    printArr(array,LENGTH);
    return 0;
}

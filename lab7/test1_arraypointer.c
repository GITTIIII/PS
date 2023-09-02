#include<stdio.h>

void printArray(int *,int);
void getvalue(int *,int);

int main(){
    int arrSize;
    printf("Enter a size of array: ");
    scanf("%d",&arrSize);

    int arr[arrSize];
    int size = sizeof(arr)/sizeof(arr[0]);  //ส่ง array เข้าฟังชั้นจะกลายเป็น pointer ram use = 8 byte not array byte 

    printf("size of array = %llu\n",sizeof(arr));
    printf("each element size =  %llu\n",sizeof(arr[0]));
    printf("lens of array = %d\n",size);

    getvalue(arr,size);
    printArray(arr,size);
    return(0);
}

void printArray(int *arr,int size){
    int x;
    printf("Array = ");
    for(x=0 ; x<size ; x++){
        printf("%d ",arr[x]);
    }
}

void getvalue(int *arr,int size){
    for (int y=0 ; y<size ; y++){
        printf("Enter a number value: ");
        scanf("%d",&arr[y]);
    }
}
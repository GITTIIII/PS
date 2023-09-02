#include<stdio.h>

void printArray(int *,int);
void getvalue(int *,int);

int main(){
    int arr[2][5] = {{1,2,3,4,5},
                    {6,7,8,9,10}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int size = row*col;
    printf("size of array = %llu\n",sizeof(arr));
    printf("each element size =  %llu\n",sizeof(arr[0][0]));
    printf("row = %d\n",row);
    printf("colum = %d\n",col);
    printf("lens of array = %d\n",size);

    //getvalue(arr,size);
    //printArray(arr,size);
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
#include<stdio.h>
#include<conio.h>
#include<windows.h>

void main(){
    int size, flag=0, item,i,count=1;
    printf(":: Enter The Size of Array :");
    scanf("%d", &size);
    int arr[size];
    printf(":: Enter The Array Elements : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(":: Enter The Element to be seached in Array :");
    scanf("%d", &item);
    for(i=0; i<size; i++)
    {
        if(arr[i] == item)
        {
            flag = 1;
            if(arr[i+1] == item)
                count++;
            
        }
        else
            flag = 0;
    }
    if(flag == 1)
    {
        printf("Element found at position %d\n", i);
        printf("Total occurence in array : %d\n", count);
    }
    else if(flag == 0)
    {
        printf("Element not found in the array.");
    }
    
}

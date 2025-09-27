#include <stdio.h>
#include <limits.h>


//Program to find max and min element in a array

int main(){

int size;
printf("Give the size of array : ");
scanf("%d",&size);

int array[size];

printf("Give the elements of array! ");
for(int i = 0; i<size; i++){
    printf("Enter element at index =  %d",i);
    scanf("%d",&array[i]);
}
int maxNum = INT_MIN;
int minNum = INT_MAX;

for(int j = 0; j<size; j++){
    if(maxNum < array[j]){
        maxNum = array[j];
    }
    if(minNum > array[j]){
        minNum = array[j];
    }
}
printf("Maximum element is = %d",maxNum);
printf("Minimum element is = %d",minNum);

}
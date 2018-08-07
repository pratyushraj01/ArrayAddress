#include<stdio.h>

int main(){
    
    int i = 5, arr[i];
    int s = sizeof(i);
    printf("Size of integer for this compiler is %d\n", s);
    
    for(int j=0; j<i; j++){
        printf("The address of array element arr[%d] is %u\n", j, &arr[j]);
    

}

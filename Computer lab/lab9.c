#include <stdio.h>
void findMaximumDistance(int distanceOfCities[], int start, int end, int array[]);






int main() {
    int distanceOfCities[20]={120,200,105,300,295};
    int array[2];
    
    findMaximumDistance(distanceOfCities, 0, 4, array);
    
    printf("max: %d\n",array[0]);
    printf("min: %d\n",array[1]);
    
    
    
    
    
    return 0;
}
/*
 
 I wrote this function to find max and min values of my array...
 
 start: start of my array
 
 end: end of my array
 
 array: my control array
 
 
 */

void findMaximumDistance(int distanceOfCities[], int start, int end, int array[]){
    int mid;
    int result1[2],result2[2];

    mid=(start+end)/2;
    mid++;
    
    if(start==end){
        array[1]=distanceOfCities[start];
        array[0]=distanceOfCities[start];
        return;
    }
    else if(start+1==end){
       array[1]=distanceOfCities[start];
        array[0]=distanceOfCities[end];
        if(distanceOfCities[start]<distanceOfCities[end]){
           array[0]=distanceOfCities[start];
           array[1]=distanceOfCities[end];
            return;
        }
    }
 /*   else{
        array[0]=distanceOfCities[start];
        array[1]=distanceOfCities[start];
        for(int i=start+1;i<=end;i++){
            if(distanceOfCities[i]<array[0]){
                array[0]=distanceOfCities[i];
            }
            if(distanceOfCities[i]>array[1]){
                array[1]=distanceOfCities[i];
            }
        }
    }
*/
    
    /* I found in here max length and min length...*/
    
    if(result1[0]<result2[0] && result1[0]<result2[1]){
        array[0]=result1[0];
    }
    if(result2[0]<result1[0] && result2[0]<result1[1]){
        array[0]=result2[0];
    }
    if(result2[1]<result1[0] && result2[1]<result1[1]){
        array[0]=result2[1];
    }
    if(result1[1]<result2[0] && result1[1]<result2[1]){
        array[0]=result1[1];
    }
    if(result1[0]>result2[0] && result1[0]>result2[1]){
        array[1]=result1[0];
    }
    if(result2[0]>result1[0] && result2[0]>result1[1]){
        array[1]=result2[0];
    }
    if(result2[1]>result1[0] && result2[1]>result1[1]){
        array[1]=result2[1];
    }
    if(result1[1]>result2[0] && result1[1]>result2[1]){
        array[1]=result1[1];
    }
    
    findMaximumDistance(distanceOfCities, start, mid, result1);
    findMaximumDistance(distanceOfCities, mid, end, result2);
    
}

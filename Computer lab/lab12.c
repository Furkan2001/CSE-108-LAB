
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 This is my struct...
 */
typedef struct{
    int *array;
    int currentsize;
}dynamic_array;

/*
 These are my functions...
 */

dynamic_array read_from_file(char *filename,dynamic_array arr);
dynamic_array removeData(dynamic_array arr, int number);
void print_array(dynamic_array arr);
int *resize_array(int *array,int currentsize);


/* it is my main function...*/


int main(){
    dynamic_array arr;
    read_from_file("lab.txt",arr);
    print_array(arr);
    
    return 0;
}


/* I wrote a function to read from file...*/
dynamic_array read_from_file(char *filename,dynamic_array arr){
    arr.array = (int *)calloc(1,sizeof(int));
    FILE* file;
    int i=0;
    file = fopen (filename,"r");
    while(!feof(file)){
        fscanf(file,"%d\n",&arr.array[i]);
        arr.currentsize=i;
        resize_array(arr.array,i+1);
        /* I increase i variable...*/
        i++;
    }
    return arr;
}




dynamic_array removeData(dynamic_array arr, int number){
    return arr;
}

/*
 I wrote function that print my array..
 */
void print_array(dynamic_array arr){
    for(int i=0;i<arr.currentsize;i++){
        printf("%d",arr.array[i]);
    }
}
/*
 I wrote function of expanded array in here...
 */

int *resize_array(int *array,int currentsize){
    int *temp;
    temp = (int *)calloc(currentsize,sizeof(int));
    for(int i=0;i<currentsize;i++){
        temp[i]=array[i];
    }
    /* I increase currentsize...*/
    currentsize++;
    array = (int *)calloc(currentsize,sizeof(int));
    for(int i=0;i<currentsize-1;i++){
       array[i] = temp[i];
    }
    free(temp);
    return array;
}


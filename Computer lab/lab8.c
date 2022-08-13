
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* I describe my header files*/

int count(char* array);
void sort(char* array);
void swap(char x[],int i, char y[],int k);
void reverse(char *str,char *reversed, int k);
int merge(int arr[],int p,int q,int r);
int merge_sort(int arr[],int low,int yuksek);
/* I describe my functions protatype in here...*/

int main() {

    char array[50]="ey edip adanada pide ye";
    char reversed[50];
    char arra[50];
    int a=0;
    int arr[20]; // array to be sorted
    int i;
    strcpy(arra,array);
    reverse(array,reversed,0);
        for(int i=0;i<23;i++){
        printf("%c",reversed[i]);
        }
        printf("\n\n");
    if(strcmp(reversed,arra)==0){
        printf("This is polindrome..\n");
    }
    else{
        printf("This is not a polindrome string..\n");
    }
  //  fputs(array,stdout);

    
    printf("Enter the elements:");
for(i=0;i<6;i++)
    scanf("%d",&arr[i]);
merge_sort(arr,0,5);
    // sort the array
    printf("Sorted array:");
    // print sorted array
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



/*
 
 I change with its revers...
 
 str[] : This is my array..
 
 reversed[] : This is my second array for take reverse....
 
 k : my index..
 
 */

void reverse(char str[],char reversed[], int k)
{
    int i = 0;
    // if the end of the string is reached
    if (str[k] == '\0') {
        return;
    }
    reverse(str,reversed,k - 1);
 
    if (i <= k) {
        swap(str,i,str,k);
    }
    i++;
    strcpy(reversed,str);
}

void swap(char x[],int i, char y[],int k){
    char temp;

    temp= x[i];
    x[i] = y[k];
    y[k] = temp;
}

/*
 it does :
 
 arr[] : arr is my array for mergesort..
 
 low : lower my array..
 
 yuksek : higher my array...
 
 */

int merge_sort(int arr[],int low,int yuksek)
{
    int mid;
    if(low<yuksek)
{
        mid=(low+yuksek)/2;
// Divide and Conquer
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,yuksek);
// Combine
    merge(arr,low,mid,yuksek);
}
        return 0;
}
/*
 
 it does:
 
 arr : it is my array of char..
 
 p : starting of my array..
 
 q : mid of my array..
 
 h : final of my array...
 
 it merge..
 
 
 */
int merge(int arr[],int p,int q,int h)
{
    int arr1[10],arr2[10];
    int n1,n2,i,j,k;
        n1=q-p+1;
        n2=h-q;
    for(i=0;i<n1;i++)
        arr1[i]=arr[p+i];
    for(j=0;j<n2;j++)
        arr2[j]=arr[q+j+1];
        arr1[i]=10009;
        // To mark the end of each temporary array
        arr2[j]=10009;
        i=0;j=0;
    for(k=p;k<=h;k++)
    //process of combining two sorted arrays
{
    if(arr1[i]<=arr2[j])
    arr[k]=arr1[i++];
    else
        arr[k]=arr2[j++];
    }
    return 0;
}





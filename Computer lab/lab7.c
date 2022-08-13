#include <stdio.h>
#include <string.h>
#define MAX_LEN 200
void alphabeticSort(char arr[][MAX_LEN],int choice);
void generateTagParser(char arr[],char temp[]);

int main() {
//my variables..
    int choice;
    char array[100],temp[100];
    
    //I printed in main function...
    printf("Enter the count of how many strings you will enter... \n");
    scanf("%d",&choice);
    
    char arr[choice][MAX_LEN];
    for(int i=0;i<choice;i++){
        //fgets(arr[i],sizeof(arr[i]),stdin);
        scanf("%s",arr[i]);
    }
    //I printed in main function...
    printf("Given array is:\n");
    for(int i=0;i<choice;i++){
        fputs(arr[i],stdout);
        printf("\n");
    }
    //arr array send to function...
    alphabeticSort(arr,choice);

    printf("\n\nSorted array is:\n");
    for(int i=0;i<choice;i++){
        fputs(arr[i],stdout);
        printf("\n");
    }
     
    //I printed in main function...
    printf("Ente your character...\n");
    //I take character for array..
    scanf("%s",array);
    
    //ı called my function as array..
    generateTagParser(array, temp);
    
    
    //I printed in main function...
    printf("%s",temp);
    
        
    return 0;
}

/*I set the my function.. and I will call in main this funtion..
 
it control arrays and decide which is bigger which is smaller..
 
 ıt does:
 
 temp[]: ---- I used it for temporary values..
 
 MAX_LEN---- this is global..
 
 choice--- this is number of my array...
 
 
 returns---- none..
 
 */
void alphabeticSort(char arr[][MAX_LEN],int choice){
    char temp[100];
    //ı maek for loop in here...
    for(int i=0;i<choice;i++){
        for(int j=i+1;j<choice;j++){
            if(strcmp(arr[i],arr[j])>1){
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
}

/*I set the my function.. and
 I will call in main this funtion..
 
 This function control array length and add some characther..

 //I made some change for settings...
 
 it does:
 
 int x---  I used this find the length array
 
 arr--- My array in main funtion...
 
 temp---  I used it for temporary values..
 
 returns---- none..

 */
void generateTagParser(char arr[],char temp[]){
    
    int x;
    x=strlen(arr);
    
    if(x<5){
        //ı maek for loop in here...
        for(int i=x-1;i>=0;i--){
            arr[i+2]=arr[i];
        }
        //I made some change for settings...
        arr[0]='<';
        arr[1]='<';
        arr[x+2]='>';
        arr[x+3]='>';
        strcpy(temp,arr);
      //  printf("%s",temp);
    }
    
    
    if(x>=5 && x<=10){
        //ı made for loop in here...
        for(int i=x-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]='*';
        arr[x+1]='*';
        strcpy(temp,arr);
     //   printf("%s",temp);
    }
    
    
    if(x>10){
        //ı maek for loop in here...
        for(int i=x-1;i>=0;i--){
            arr[i+2]=arr[i];
        }
        arr[0]='/';
        arr[1]='+';
        arr[x+2]='+';
        arr[x+3]='/';
        arr[x+4]='\0';
        strcpy(temp,arr);
     //   printf("%s",temp);
    }
    //ı maek for loop in here...

}

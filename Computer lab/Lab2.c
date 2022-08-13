#include<stdio.h>
#include<math.h>

int gcd(int x,int y);
int lcm(int x,int y);
void file(int result);
void standard_deviation_calculator();

int main() {
    int number,x,y;
    printf("1. GCD Calculator\n");
    printf("2. LCM Calculator via GCD\n");
    printf("3. Standard Deviation Calculator\n");
    scanf("%d",&number);
    switch(number){
        case 1:
            printf("Number 1: ");
            scanf("%d",&x);
            printf("Number 2: ");
            scanf("%d",&y);
            printf("GCD of these two numbers: %d",gcd(x,y));
            file(gcd(x,y));
            break;
        case 2:
            printf("Number 1: ");
            scanf("%d",&x);
            printf("Number 2: ");
            scanf("%d",&y);
            printf("LCM of these two numbers: %d",lcm(x,y));
            file(lcm(x,y));
            break;
        case 3:
            standard_deviation_calculator();
            break;
        default:
            printf("You entered unvalid number..!\n");
            return 404;
            break;
    }
    
    
    
    return 0;
}
int gcd(int x,int y){
    int i,gcd;
    if(x<y){
        for(i=0;i<=x;i++){
            if(x%i==0 && y%i==0){
                gcd=i;
            }
        }
    }
    if(y<x){
        for(i=0;i<=y;i++){
            if(x%i==0 && y%i==0){
                gcd=i;
            }
        }
    }
    return gcd;
}

int lcm(int x,int y){
    int lcm,sayi;
    sayi=gcd(x,y);
    lcm=(x*y)/sayi;
    return lcm;
}

void file(int result){
    FILE* file;
    file = fopen("file.txt","a");
    if(file==NULL){
        printf("File could not be opened..");
    }
    else{
        /* This function write identity_number and password to customeraccount.txt..*/
        fprintf(file,"%d ",result);
    }
    fclose(file);
}

void standard_deviation_calculator(){
    int i,number,total_count=0;
    float ortalama=0,value=0,temp=0;
    FILE* file;
    file = fopen("file.txt","r");
    for(i=0;i<100;i++){
        if(file==NULL){
        printf("File could not be opened..");
    }
    else{
        while (!feof(file)){
        fscanf(file,"%d ",&number);
        total_count++;
        ortalama+=number;
            }
        }
    }
    ortalama=ortalama/total_count;
    fclose(file);
    file = fopen("file.txt","r");
    for(i=0;i<100;i++){
    if(file==NULL){
        printf("File could not be opened..");
    }
    else{
        while (!feof(file)) {
        fscanf(file,"%d ",&number);
      temp+=(number-ortalama)*(number-ortalama);
        }
    }
    }
    value=1.0f/(float)total_count*(temp);
    value=sqrt(value);
    printf("Mean: %f\n",ortalama);
    printf("Total count: %d\n",total_count);
    printf("Standard Deviation: %f\n",value);
    fclose(file);
}

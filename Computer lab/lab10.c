#include <stdio.h>
#include <math.h>

/* I create my structs...*/

typedef struct{
    
    int a;
    int b;
    
}coordinates;

/* I create my structs...*/

typedef struct{
    
    coordinates points[2];
    float radius;
    float perimeter;
    float area;
    
}circle;


void print_struct(circle array[],int a);
int primeNumber(int, int);

int main(void)
{
    int sayi = 0;
    float kordinat1,kordinat2,toplam,perimeter,area;
    
    circle array[10];
    coordinates x1,x2;
    
    printf("\n\n");

    printf("PART 1:\n\n");
    
    printf("Number of circles: ");
    scanf("%d",&sayi);
    
    for(int i=1;i<=sayi;i++){
        printf("Circle %d...\n",i);
        printf("Coordinates of center: ");
        scanf("%d %d",&x1.a,&x1.b);
        printf("Coordinates of point p: ");
        scanf("%d %d",&x2.a,&x2.b);
        
        /* I filled my array of structs...*/
        
        array[i].points[0].a= x1.a;
        array[i].points[0].b= x1.b;
        
        /* I filled my array of structs...*/
        
        array[i].points[1].a= x2.a;
        array[i].points[1].b= x2.b;
        
        kordinat1=(float)((x1.a)-x2.a)*((x1.a)-x2.a);
        kordinat2=(float)((x1.b)-x2.b)*((x1.b)-x2.b);
        if(kordinat2<0){
            kordinat2*=-1;
        }
        if(kordinat1<0){
            kordinat2*=-1;
        }
        toplam=kordinat1+kordinat2;
        toplam=sqrt(toplam);
        
        /* I filled my array of structs...*/
        
        array[i].radius=toplam;
        
        perimeter=2.00*3.14*toplam;
        
        /* I filled my array of structs...*/
        
        array[i].perimeter=perimeter;
        
        area=3.14*toplam*toplam;
        
        /* I filled my array of structs...*/
        
        array[i].area=area;
                
    }
    printf("\n\n");
    printf("\n\n");
    print_struct(array,sayi);

    
    
    printf("PART 2:\n\n");
     
    int number,result;
    printf("Enter a number: ");
    scanf("%d",&number);
    result = primeNumber(number, number / 2);
    if (result == 0)
        printf("%d is not a prime number\n", number);
    else
        printf("%d is a prime number\n", number);
    
    return 0;
}


/*
 
 I sent my array of struct in this function anda number of circle...
 
 I printed in here circle values in screen
 
 i: my number to print in screen...
 
 */

void print_struct(circle array[],int a){
    
    for(int i=1;i<=a;i++){
        
        printf("CİRCLE %d\tRadius: %.2f\tPerimeter: %.2f\tArea: %.2f\n\n",i,array[i].radius,array[i].perimeter, array[i].area);
        
    }
    
}

/*
 
 I controlled number user enter is prime or not..
 
 x: user's number
 
 i: user's number /2
 
 I controlled my numbers in this function how to decreases variable(i) again and again with recursive...
 
 
 */

int primeNumber(int x, int i) {
    if (x < 2)
        return 0;
    if (i == 1)
        return 1;
    if (x % i == 0)
        return 0;
    return primeNumber(x, i - 1);
}


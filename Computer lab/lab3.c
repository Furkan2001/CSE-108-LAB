#include<stdio.h>

int main(){
    int control=1,case1,i,j,height,a,b,height1,sonuc,uygulama=0,gir,sayi;

    while(control){
        printf("OPTİON:");
        scanf("%d",&case1);
        switch(case1){
    
            case 1:
                printf("Enter an odd integer as the height..");
                scanf("%d",&height);
                a=1;
                b=height;
                for(i=1;1<=height;i++){
                    for(j=1;j<=b;j++){
                    if(j==a){
                    printf("*");
                    }
                    else if(j==height){
                        printf("*");
                    }
                    else{
                    printf(" ");
                }
                    }
                    printf("\n");
                    a++;
                    height--;
                }
                break;
            case 2:
                a=0;
                b=0;
                printf("Enter an odd integer as the height..");
                scanf("%d",&height1);
                sonuc=height1;
                height1=height1/2;
                height1++;
                a=height1;
                b=height1;
                for(i=1;uygulama<2;i++){
                    for(j=1;j<=height1;j++){
                        if(a==j && b==j){
                            printf("*");
                        }
                        if(a==j && a!=b){
                            printf("*");
                        }
                        if(b==j && a!=b){
                            printf("*");
                        }
                        if(a!=j && b!=j){
                            printf(" ");
                        }
                    }
                    printf("\n");
                    if(a==b){
                        uygulama++;
                    }
                    a++;
                    b--;
                    if(a==sonuc){
                        a=1;
                        b=sonuc;
                    }
                }
                
                
                
                
                
                
                
                
                break;
            case 3:
                printf("enter an integer as the size");
                scanf("%d",&gir);
                sayi=1;
                a=1;
                printf("\n\n");
                for(i=1;i<=gir;i++){
                    a=sayi;
                    for(j=1;j<=gir;j++){
                        printf("%d ",a);
                        a=a+i;
                    }
                    printf("\n");
                    sayi++;
                }
                
                
                
                break;
            case 4:
                
                
                break;
            case -1:
                control=0;
                break;
    
    
    
        }
    
    }
    
    return 0;
}

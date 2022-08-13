#include<stdio.h>

enum days{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
enum products{
    harddisk=8,
    monitor=25,
    keyboard=27,
    mouse=100
};
enum selections{
    buy,
    orders,
    prices,
    exit
};

int main(){
    int wait=1,j,select,product,day,gun[5],urun[5],i=0,toplam=0,a=0;
    FILE* dosya;
    dosya = fopen("orders.txt","w");
    fclose(dosya);
    do{
        printf("1.Buy Product\n");
        printf("2.Orders\n");
        printf("3.All Orders Prices\n");
        printf("4.EXIT\n");
        printf("CHOICE:");
        scanf("%d",&select);
        printf("\n");
        switch(select){
                
            case 1:
                printf("Select your product:\n");
                printf("0.Harddisk\n");
                printf("1.Monitor\n");
                printf("2.Keyboard\n");
                printf("3.Mouse\n");
                printf("4. GO TO MAIN MENU\n");
                scanf("%d",&product);
                if(product==0){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",product);
                    fclose(dosya);
                }
                if(product==1){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",product);
                    fclose(dosya);
                }
                if(product==2){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",product);
                    fclose(dosya);
                }
                if(product==3){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",product);
                    fclose(dosya);
                }
                printf("Select your arrival day[0-6]:\n");
                printf("Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday\n");
                scanf("%d",&day);
                if(day==0){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==1){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==2){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==3){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==4){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==5){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                if(day==6){
                    dosya = fopen("orders.txt","a");
                    fprintf(dosya,"%d ",day);
                    fclose(dosya);
                }
                break;
            case 2:
                dosya = fopen("orders.txt","r");
                while(!feof(dosya)){
                fscanf(dosya,"%d %d",&urun[i],&gun[i]);
                    i++;
                }
                fclose(dosya);
                i=0;
                for(j=0;j<=5;j++){
                    if(!(urun[j]<=3 && urun[j]>=0)){
                        urun[j]=15;
                    }
                    if(!(gun[j]<=6 && gun[j]>=0)){
                        gun[j]=15;
                    }
                }
                while(i<=5){
                    if(urun[i]!=15 && gun[i]!=15){
                printf("Product ID: %d",urun[i]);
                if(gun[i]==0){
                    printf(",Day: Sunday\n\n");

                }
                if(gun[i]==1){
                    printf(",Day: Monday\n\n");

                }
                if(gun[i]==2){
                    printf(",Day: Tuesday\n\n");

                }
                if(gun[i]==3){
                    printf(",Day: wednwsday\n\n");

                }
                if(gun[i]==4){
                    printf(",Day: Thursday\n\n");

                }
                if(gun[i]==5){
                    printf(",Day: Friday\n\n");

                }
                if(gun[i]==6){
                    printf(",Day: Saturday\n\n");
                    }
                    }
                    i++;
                }
                
                break;
            case 3:
                i=0;
                while(i<=5){
                    if(urun[i]!=15 && gun[i]!=15){
                printf("Product ID: %d",urun[i]);
                        if(urun[i]==0){
                            a=harddisk;
                            toplam+=a;
                        }
                        if(urun[i]==1){
                            a=monitor;
                            toplam+=a;
                        }
                        if(urun[i]==2){
                            a=keyboard;
                            toplam+=a;
                        }
                        if(urun[i]==3){
                            a=mouse;
                            toplam+=a;
                        }
                if(gun[i]==0){
                    printf(",Day: Sunday\n\n");

                }
                if(gun[i]==1){
                    printf(",Day: Monday\n\n");

                }
                if(gun[i]==2){
                    printf(",Day: Tuesday\n\n");

                }
                if(gun[i]==3){
                    printf(",Day: wednwsday\n\n");

                }
                if(gun[i]==4){
                    printf(",Day: Thursday\n\n");

                }
                if(gun[i]==5){
                    printf(",Day: Friday\n\n");

                }
                if(gun[i]==6){
                    printf(",Day: Saturday\n\n");
                    }
                    }
                    i++;
                }
                printf("Total Prices: %d TL\n\n",toplam);
                
                break;
            case 4:
                wait=0;
                break;
                
        }

    }
    while(wait);
    
    return 0;
}



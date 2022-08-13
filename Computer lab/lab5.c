
#include<stdio.h>
void trace(void);
void multiplication(void);
void transpose(void);

int main(){
    /* değişken tanımla*/
    int deger=1,sonuc,i,j;
    int mat[10],first[3][3],second[3][3],thirth[3][3],fourth[3][3],fifth[3][3],sixth[3][3],result[3][3],toplam=0,a=0;
    while(deger){
        printf("1. Convolutional Filter for 1D array\n");
        printf("2. Multiplication\n");
        printf("3. Trace\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("Enter your choise: ");
        scanf("%d",&sonuc);
        switch(sonuc){
            case 1:
                break;
            case 2:
                /* Çarpım fonksiyonumu çağır*/
                multiplication();
                break;
            case 3:
                /* Fonksiyonlarımı çağırdım..*/
                 trace();
                 trace();
                
                break;
            case 4:
                /* Fonksiyonlarımı çağırdım..*/
                transpose();
                transpose();
                break;
            case 5:
                /* While döngüsünden çıkışı gerçekleştir...*/
                /* çıkışı gerçekleştirdim while döngüsünden..*/
                deger=0;
                break;
        }
        
        
    }
    
    
    
    
    return 0;
}
/* Çarpım foksiyonumu yazdım..*/
void multiplication(){
    int first[3][3],second[3][3],i,j,result[3][3],toplam=0;
    printf("Enter the first matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&first[i][j]);
        }
    }
    /* Matrixleri aldım..*/
    printf("Enter the second matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&second[i][j]);
        }
    }
    /* Matrix çarpımı için kendimce döngü yazdım..*/
    /* Matrix çarpımını kullanarak döngü sistemini kafamda kurma amaçlı yazdım ancak süre sıkıntısından dolayı for döngüsüne çevirmeden bıraktım..*/
 
    toplam=((first[0][0])*(second[0][0]))+((first[0][1])*(second[1][0]))+((first[0][2])*(second[2][0]));
    result[0][0]=toplam;
    toplam=0;
    toplam=((first[0][0])*(second[0][1]))+((first[0][1])*(second[1][1]))+((first[0][2])*(second[2][1]));
    result[0][1]=toplam;
    toplam=0;
    toplam=((first[0][0])*(second[0][2]))+((first[0][1])*(second[1][2]))+((first[0][2])*(second[2][2]));
    result[0][2]=toplam;
    toplam=0;
    toplam=((first[1][0])*(second[0][0]))+((first[1][1])*(second[1][0]))+((first[1][2])*(second[2][0]));
    result[1][0]=toplam;
    toplam=0;
    toplam=((first[1][0])*(second[0][1]))+((first[1][1])*(second[1][1]))+((first[1][2])*(second[2][1]));
    result[1][1]=toplam;
    toplam=0;
    toplam=((first[1][0])*(second[0][2]))+((first[1][1])*(second[1][2]))+((first[1][2])*(second[2][2]));
    result[1][2]=toplam;
    toplam=0;
    toplam=((first[2][0])*(second[0][0]))+((first[2][1])*(second[1][0]))+((first[2][2])*(second[2][0]));
    result[2][0]=toplam;
    toplam=0;
    toplam=((first[2][0])*(second[0][1]))+((first[2][1])*(second[1][1]))+((first[2][2])*(second[2][1]));
    result[2][1]=toplam;
    toplam=0;
    toplam=((first[2][0])*(second[0][2]))+((first[2][1])*(second[1][2]))+((first[2][2])*(second[2][2]));
    result[2][2]=toplam;
    toplam=0;
    printf("\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",first[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",second[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

/* Trace fonksiyonu hazırladım..*/
void trace(){
    int i,j,fifth[3][3],a;
    printf("Trace of the  matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&fifth[i][j]);
        }
    }
    /* Yazdırma işlemlerini gerçekleştir...*/
    printf("%d\t%d\t%d\n",fifth[0][0],fifth[0][1],fifth[0][2]);
    printf("%d\t%d\t%d\n",fifth[1][0],fifth[1][1],fifth[1][2]);
    printf("%d\t%d\t%d\n",fifth[2][0],fifth[2][1],fifth[2][2]);
    /* a değişkeni belirlerdim.. Trace bulmak için..*/
    a=(fifth[0][0])+(fifth[1][1])+(fifth[2][2]);
    printf("Trace of matrix is: %d\n",a);
    
}
/* transpose fonksiyonu hazırladım..*/
void transpose(void){
    int i,j,fifth[3][3];
    /* Döngülerimi hazırladım almak için...*/
    printf("Transpopse of the  matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&fifth[i][j]);
        }
    }
    /* Döngülerimi hazırladım yazdırmak için...*/
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",fifth[j][i]);
        }
        printf("\n");
    }
}

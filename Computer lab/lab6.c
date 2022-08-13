#include<stdio.h>
void create(int matrix[3][3]);
void display2d(int matrix[3][3]);
void fonksiyon( char first[26][26]);
void yazdir(char deger[26][26]);


int main(){
    char first[26][26];
/* Fonksiyonları çağırdım...*/
    fonksiyon(first);
    yazdir(first);
   
    
    
    
    return 0;
}

/* Yeni matrix oluşturur...*/
void create(int matrix[3][3]){
int i,j;
printf("Enter the matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&matrix[i][j]);
        }
    printf("\n");
    }
}

/* Matrixi ekrana bastırır...*/
void display2d(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n"); // new line
    }
}
/* Fonksiyonumu oluşturup tablomu çizdim...*/
void fonksiyon( char first[26][26]){
    int i,j;
    first[0][0]='A';
    first[0][1]='B';
    first[0][2]='C';
    first[0][3]='D';
    first[0][4]='E';
    first[0][5]='F';
    first[0][6]='G';
    first[0][7]='H';
    first[0][8]='I';
    first[0][9]='J';
    first[0][10]='K';
    first[0][11]='L';
    first[0][12]='M';
    first[0][13]='N';
    first[0][14]='O';
    first[0][15]='P';
    first[0][16]='Q';
    first[0][17]='R';
    first[0][18]='S';
    first[0][19]='T';
    first[0][20]='U';
    first[0][21]='V';
    first[0][22]='W';
    first[0][23]='X';
    first[0][24]='Y';
    first[0][25]='Z';
    
    for(i=0;i<26;i++){
        for(j=0;j<26;j++){
            if(j==0){
                first[i+1][25]=first[i][j];
            }
            else{
            first[i+1][j-1]=first[i][j];
            }
        }
    }
}


/* Fonksiyon oluşturdum..*/
void yazdir(char deger[26][26]){
    int i,j,a=0;


    /* dÖngülerle bastırma kodumu hazırladım...*/
    for(i=0;i<26;i++){
        printf("  ");
        for(j=0;j<26;j++){
            printf("%c  ",deger[i][j]);
        }
        
        printf("\n");
    }
}















#include<stdio.h>
#define pi 3.14

int main() {
    int x1,y1,x2,y2;
    float midx,midy,slope,length,area;
    printf("iLK KOORDİNAT DEĞERLERİNİZİ GİRİNİZ");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("İKİNCİ KOORDİNAT DEĞERLERİNİZİ GİRİNİZ");
    scanf("%d",&x2);
    scanf("%d",&y2);
    
    midx=(float)(x1+x2)/2;
    midy=(float)(y1+y2)/2;
    printf("(%.2f,%.2f) is coordinates of the midpoint\n",midx,midy);
    
    slope=(float)(y2-y1)/(x2-x1);
    printf("Slope is %.2f\n",slope);
    
    length=(float)(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    area=(float)(length*pi)/4;
    printf("Area is %.3f\n",area);
    
    return 0;
}

/*
all: clean compile run

compile: Lab1.c
    @echo "-------------------------------------------"
    @echo "Compiling..."
    @gcc -o  test Lab1.c

run:
    @echo "-------------------------------------------"
    @echo "Running the tests...."
    @echo "================================================================================="
    ./test
    @echo "================================================================================="
    @echo "Completed tests...."

clean:
    @echo "-------------------------------------------"
    @echo "Removing compiled files..."
    @rm -f *.o
    @rm -f test

*/

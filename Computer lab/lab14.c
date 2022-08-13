#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMOFITEMS 2
#define FILENAME
/*
 I create my structs and unions...
 */

typedef struct{
    int id;
    char name[20];
    int price;
}item_t;


typedef union {
    int phone;
    char mail[30];
}contactInfo_t;


typedef struct{
    item_t a;
    contactInfo_t b;
    
}itemWithCont_t;

/*
 I create my functions in here...
 */
item_t *getItems(item_t *items, int size);
void printItem(item_t item);
int writeItems(char filename[], item_t *items, int size);
item_t readAnItem(FILE *file);


int main()
{
    FILE *fptr;
    int i=0;
    
    item_t items[100];
    item_t asil[100];
    
    /*
        I made loop in here...
     */
    for(i=0;i<100;i++){
        items[i].id=0;
    }
    
    i=0;
    getItems(items,NUMOFITEMS);
    asil[i].id = items[0].id;
    strcmp(asil[i].name,items[0].name);
    asil[i].id = items[0].price;
    i++;
    asil[i].id = items[1].id;
    strcmp(asil[i].name,items[1].name);
    asil[i].id = items[1].price;
    i++;
    writeItems("FILENAME", asil, NUMOFITEMS);
    
    getItems(items,NUMOFITEMS);
    asil[i].id = items[0].id;
    strcmp(asil[i].name,items[0].name);
    asil[i].id = items[0].price;
    i++;
    asil[i].id = items[1].id;
    strcmp(asil[i].name,items[1].name);
    asil[i].id = items[1].price;
    i++;
    writeItems("FILENAME", asil, NUMOFITEMS);
    
    
    printf("Reading from file:\n");
    readAnItem(fptr);

    
    
    
    return 0;
}


/*
 I create my functions in here and ı got items from user...
 */
item_t *getItems(item_t *items, int size)
{
    for(int i=1;i<=size;i++)
    {
        printf("Id => :");
        scanf("%d",&items[i-1].id);
        
        printf("Name => ");
        scanf("%s",items[i-1].name);
    
        printf("Price => ");
        scanf("%d",&items[i-1].price);
    }
    
    printf("\nPRINTING ::\n\n");
    printItem(items[0]);
    printItem(items[1]);
    
    return items;
}


/*
 I create my functions in here and ı print items user enter...
 */
void printItem(item_t item)
{
    printf("ID => %d\n",item.id);
    printf("Name => %s\n",item.name);
    printf("Price => %d\n",item.price);
}





/*
 I create this function to write to binary file...
 */

int writeItems(char filename[], item_t *items, int size)
{
    FILE *fptr;
    if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    for(int n = 0; n < size; n++)
    {
       fwrite(items, sizeof(item_t), 1, fptr);
    }
    
    printf("\nSUCCESFULY wrote data to file..\n\n");
    fclose(fptr);
    return size;
}




item_t readAnItem(FILE *file)
{
    
    item_t tek;
    
    if ((file = fopen("C:\\program.bin","rb")) == NULL){
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    
    while(feof(file))
    {
        fread(&tek, sizeof(item_t), 1, file);
        printf("n1: %d\tn2: %s\tn3: %d\n", tek.id, tek.name, tek.price);
    }
    fclose(file);
    return tek;
}















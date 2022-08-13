#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This is my struct...*/

struct kitap{
    char title[100];
    char author[30];
    char subject[100];
    int year;
};

/* These are my functions...*/

void sortStruct(struct kitap book[100], int s);
void display(struct kitap book[],int i);

int main(){
    
    int control=1,choose1,counter=0,choose2;
    char tit[30],aut[30],sub[100];
    struct kitap *book;
    book = (struct kitap*) calloc(1000,sizeof(struct kitap));
    
    while(control){
        
        printf("\nMENU\n\n");
        printf("1. Add New Book\n");
        printf("2. List Books\n");
        printf("3. EXIT\n\n");
        printf("CHOOSE: ");
        scanf("%d",&choose1);
        printf("******************************\n\n");
        switch(choose1){
                
                /* I create new struct of book in here */
            case 1:
                printf("Please enter book title = ");
                fflush(stdin);
                scanf("%[^\n]%*c",book[counter].title);
                printf("\nPlease enter book author = ");
                fflush(stdin);
                scanf("%[^\n]%*c",book[counter].author);
                printf("\nPlease enter book subject = ");
                fflush(stdin);
                scanf("%[^\n]%*c",book[counter].subject);
                printf("\nPlease enter book year = ");
                fflush(stdin);
                scanf("%d",&book[counter].year);
                counter++;
                break;
            case 2:
                printf("1. Get by Title\n");
                printf("2. Get by Author\n");
                printf("3. Get by Subject\n");
                printf("4. Sorted list by Year\n");
                printf("5. List all Books\n");
                printf("6. Exit submenu\n\n\n");
                printf("CHOOSE: ");
                scanf("%d",&choose2);
                
                switch(choose2){
                        
                        /* I compare my entered words with my structs in here...*/
                        
                    case 1:
                        printf("Enter a books title = ");
                        fflush(stdin);
                        scanf("%[^\n]%*c",tit);
                        for(int i=0;i<20;i++){
                            if(strcmp(book[i].title,tit)==0){
                                printf("Book found");
                                display(book,i);
                            }
                        }
                        break;
                        
                        /* I compare my entered words with my structs in here...*/
                        
                    case 2:
                        printf("Enter a books title = ");
                        fflush(stdin);
                        scanf("%[^\n]%*c",aut);
                        for(int i=0;i<20;i++){
                            if(strcmp(book[i].author,aut)==0){
                                printf("Book found");
                                display(book,i);
                            }
                        }
                        break;
                        
                        /* I compare my entered words with my structs in here...*/
                        
                    case 3:
                        printf("Enter a books title = ");
                        fflush(stdin);
                        scanf("%[^\n]%*c",sub);
                        for(int i=0;i<20;i++){
                            if(strcmp(book[i].subject,sub)==0){
                                printf("Book found");
                                display(book,i);
                            }
                        }
                        break;
                    case 4:
                        sortStruct(book,100);
                        for(int i=0;i<50;i++){
                            if((book[i].year)!=0){
                                printf("%d . Book;",i+1);
                                display(book,i);
                            }
                        }
                        break;
                        
                        /* I listed in here whole structs...*/
                        
                    case 5:
                        printf("LIST OF BOOKS\n*************************\n");
                        for(int i=0;i<50;i++){
                            if((book[i].year)!=0){
                                printf("%d . Book;",i+1);
                                display(book,i);
                            }
                        }
                        break;
                    case 6:
                        break;
                    default:
                        printf("\n\nThe value you entered is invalid...\n");
                        break;
                    }
                    break;
            case 3:
                printf("\nProgram terminated\n");
                control=0;
                break;
            default :
                printf("TRY AGAIN");
                break;
            }
        }
        return 0;
    }

/* I WRITE THat FUNCTION to display the struct.. */

void display(struct kitap book[],int i)
{
        printf("\n\nTITLE => %s\n", book[i].title);
        printf("Author => %s\n", book[i].author);
        printf("Subject => %s\n", book[i].subject);
        printf("Year => %d\n\n", book[i].year);
}



void sortStruct(struct kitap book[100], int s)
{
    int i, j,yea;
    char tits[50],auts[50],subs[100];
    struct kitap temp;
    
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (book[j].year < book[j + 1].year)
            {
                strcpy(tits,book[j+1].title);
                strcpy(book[j+1].title,book[j].title);
                strcpy(book[j].title,tits);
                strcpy(subs,book[j+1].subject);
                strcpy(book[j+1].subject,book[j].subject);
                strcpy(book[j].subject,subs);
                strcpy(auts,book[j+1].author);
                strcpy(book[j+1].author,book[j].author);
                strcpy(book[j].author,auts);
                yea=book[j].year;
                book[j].year=book[j+1].year;
                book[j+1].year=yea;
            }
        }
    }
}


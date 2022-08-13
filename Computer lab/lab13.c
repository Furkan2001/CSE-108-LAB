#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char bookname[30];
    char author[30];
    int year;
    struct node *next;
};

struct node* read_file();
void print_nodes(struct node* root);
struct node* insert_node(struct node*root,char *bookname,char *author, int year);


int main()
{
    struct node *bas;
    struct node *temp;
    int a=0;

    temp = (struct node*) malloc(sizeof(struct node));
    bas = (struct node*) malloc(sizeof(struct node));
    
    bas = read_file();
    temp=bas;
    
    print_nodes(temp);
    
    bas=temp;
    
    insert_node(temp,temp->bookname,temp->author,temp->year);
    printf("\nsorted:\n");
    print_nodes(bas);
    
    temp = bas;
    
    
    return 0;
}





struct node* read_file()
{
    FILE *e;
  
    struct node *head;
    struct node *temp;
    
    temp = (struct node*) malloc(sizeof(struct node));
    head = (struct node*) malloc(sizeof(struct node));
    
    temp=head;
    
    e = fopen("file.txt","r");
    while(!feof(e))
    {
        temp->next = (struct node*) malloc(sizeof(struct node));
        fscanf(e,"%s %s %d\n",temp->next->bookname,temp->next->author,&temp->next->year);
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}





void print_nodes(struct node* root)
{
    while(root -> next != NULL)
    {
        printf("\n%s\t%s\t%d\n",root->next->bookname,root->next->author,root->next->year);
        root = root ->next;
    }
    
}





struct node* insert_node(struct node *node1,char *bookname,char *author, int year)
{
    struct node * current;
    int temp;
    char temp1[30];
    char temp2[30];
    while(node1 != NULL)
    {
        current = node1->next;
        while(current != NULL)
        {
            if(node1->year > current-> year)
            {
                temp = current->year;
                current->year = node1->year;
                node1->year = temp;
                
                strcpy(temp1,current->bookname);
                strcpy(current->bookname,node1->bookname);
                strcpy(node1->bookname,temp1);
                
                strcpy(temp1,current->author);
                strcpy(current->author,node1->author);
                strcpy(node1->author,temp1);
                
            }
            current = current->next;
        }
        node1 = node1->next;
    }
    return node1;
}





struct node *delete_node(struct node *root , char *bookname)
{
    char name[30];
    printf("Enter the book name you want to delete:");
    scanf("%s",name);
    while(root != NULL)
    {
        if(strcmp(root->next->bookname,name))
        {
            printf("\nThere is the book in our list\n");
        }
        root=root->next;
    }
    return root;
}

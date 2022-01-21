#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node* start = NULL;
struct node* temp; 
struct node* ptr;   
int data;
void front()
{
    temp = malloc(sizeof(struct node));
 
    temp->info = data;
    temp->next = start;
    start = temp;
    printf("Data Inserted Successfully");

}

void middle()
{
    int l;
    printf("Enter the Position to Enter the Node");
    scanf("%d",&l);
    temp = start;
    while(temp != NULL)
    {
        if(temp->info == l)
        {
            printf("The Element is Present in the link list");
            temp = temp ->next;
            
        }
        
    }
   
}
// void delete()
// {

// }

void displayList()
{
    if(start == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = start;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->info); 
            temp = temp->next;              
        }
    }
}
int main()
{
int n=0;
do
{
printf("\n Enter 1 to Insert Element in the starting of the node \n");
printf("\n Enter 2 to Insert Elemen to give Given Position in the node \n");
printf("\n Enter 3 to Display the Link list \n");    
printf("\n Enter 4 to Exit \n");    
scanf("%d",&n);    
switch(n)

{
    case 1:
    printf("Enter Numbers to be Inserted");
    scanf("%d", &data);
    front(data);
    break;
    case 2:
    middle();
    break;
    case 3:
    displayList();
    break;
    case 4:
    exit(0);
    break;
}
    }while (n != 4);

}


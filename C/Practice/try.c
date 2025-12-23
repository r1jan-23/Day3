/* 
Implement a doubly linked list (DLL) with the following functionalities:
Read and display the list.
Create a second list, separate even and odd numbers, and sort them.
Read a third list and perform a union operation with the sorted list.
Delete alternate nodes in the list.
Stack and Binary Tree Manipulation
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
int data;
struct node *left;
struct node *right;
}; 

struct stack{
    int data;
    struct stack *right;
};

struct tree
{
    int data;
    struct tree *left,*right;
};

struct node *head = NULL;

struct node* createnode(int value){
     struct node *newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data = value;
     newnode->left = NULL;
     newnode->right = NULL;
    return newnode;
}

struct node *insert(int data){
    struct node* newnode = createnode(data);
    if(head == NULL){
     head =  newnode;
     return;
    }
    struct node *temp = head;
    while (temp->right != NULL){
         temp = temp->right;
    }
    temp->right = newnode;
    newnode->left = temp;
}

void display(){
    struct node *temp = head;
    if(temp == NULL){
        printf("EMPTY...\n");
        return;
    }
        printf("Element :");
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->right;
    }
            printf("\n");

}

void sorteven(int arr[],int n){
    int i , j ,temp;
    for( i = 0;i<n;i++){
        for(j=0;j<n;j++){
           if (arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

           }
        }
    }
}

void sort(){
    struct node *temp = head;
    int even[10],odd[10];
    int evencount = 0;
    int oddcount = 0;
    if(temp == NULL){
        printf("EMPTY...\n");
        return;
    }
    do {
   if (temp->data % 2 == 0)
       even[evencount++] = temp->data;
   else
       odd[oddcount++] = temp->data;
   
    temp = temp->right;
    } while ((temp != NULL));

    sorteven(even,evencount);
    sorteven(odd,oddcount);

    printf("Printing sorted even & odd in a list: ");
    for(int i =0 ;i<evencount;i++){
        printf("%d",even[i]);
    }
    for(int i =0 ;i<oddcount;i++){
        printf("%d",odd[i]);
    }
    printf("\n");
}

int main(){

    int choice;
    int data; 
    int i;
    printf("1.Insert\n2.Display\n3.Sort\n4.exit\n");

    do 
    {
printf("Enter your choice:");
scanf("%d",&choice); 
 switch (choice){

 case 1:
printf("Enter data:");
scanf("%d",&data);
insert(data);
break;

case 2:
display();
break;

case 3:
sort();
break;

case 4:
printf("Exiting..");
break;

 
 default:
 printf("Invalid");
    break;
 

 }
} while (choice != 4);

}
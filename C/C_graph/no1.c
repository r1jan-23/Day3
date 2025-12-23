#include<stdio.h>
#include<stdlib.h>

void display(int n,int adj[10][10]){
    printf("Adjacency Matrix\n");
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
}

int main(){
int n,v,e ,src , des, choice;
int arr[10][10] ={0};
printf("Enter vertex:");
scanf("%d",&v);
printf("Enter Edge:");
scanf("%d",&e);
printf("Enter 1 for UNDIRECTED GRAPH & 2 for DIRECTED GRAPH:");
scanf("%d",&choice);
for(int i =0;i<e;i++){
    printf("Enter Edge: ");
    scanf("%d %d",&src,&des);
    arr[src][des] = 1;
    
   if(choice == 1)
   arr[des][src] = 1;
}
display(v,arr);
}


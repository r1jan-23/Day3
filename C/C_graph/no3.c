#include<stdio.h>
#define MAX 100

int visited[MAX];

void DFS(int arr[][MAX],int n ,int start){
    printf("%d ",start);
    visited[start] = 1;
    
    for(int i = 0;i < n; i++){
        if(arr[start][i] == 1 && visited[i] == 0)
        DFS(arr,n,i);
    }
}

int main(){
    int e,v,choice;
    int arr[10][10]={0};
  printf("Enter no of vertex: ");
    scanf("%d",&v);
    printf("Enter no of Edge: ");
    scanf("%d",&e);
  int u1,u2;
       
    for(int i = 0;i < e;i++){
        printf("Enter Edge:");
        scanf("%d%d",&u1,&u2);
        arr[u1][u2] = 1;
        arr[u2][u1] = 1;
    }

int start;
printf("Enter edge to start: ");
scanf("%d",&start);

printf("Traversal DSF: ");
DFS(arr,v,start);

}
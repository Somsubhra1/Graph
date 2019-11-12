#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 20
int adj[max][max];
int n;
void create_graph();
//void insert_node();
void display();
//void delete_node(int);
int main() { //some functions dont work for now
    int choice;
    int node, origin, destin;
    
    while (1) {
    	   printf("0. Create a graph \n");
        printf("1.Insert a node\n");
        printf("2.Delete a node\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        	case 0:
        		create_graph();
        		break;
      /* case 1:
            insert_node();
            break;
        case 2:
            printf("Enter a node to be deleted : ");
            scanf("%d", &node);
            delete_node(node);
            break;*/
        case 3:
            display();
            break;
       case 4:
            exit(0); 
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    getch();
}
 
void create_graph()
{
    int i, max_edges, origin, destin;
 
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    max_edges = n * (n - 1);
 
    for (i = 1; i <= max_edges; i++)
     {
        printf("Enter edge %d . Enter( 0 0 ) to quit : ", i);
        scanf("%d %d", &origin, &destin);
        if ((origin == 0) && (destin == 0))
            break;
        if (origin > n || destin > n || origin <= 0 || destin <= 0)
	    {
            printf("Invalid edge!\n");
            i--;
          } 
	   else
            adj[origin][destin] = 1;
    }
}
 
 void display() 
 {
    int i, j;
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
            printf("%4d", adj[i][j]);
     
        printf("\n");
    }
}

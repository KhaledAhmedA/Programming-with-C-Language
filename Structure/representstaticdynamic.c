#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * link;
};

struct node * push_linked(struct node *top , int data);
int push_static(int array[], int data, int index_static);
int push_dynamic(int *array[], int data, int index_dynamic);
void print_linked( struct node *top);
void print_static(int static_array[], int index_static);
void print_dynamic(int *array[], int index_dynamic);

void main (void){

    struct node *top, *ptr;
    int size,i,j,k;
    int static_array[100];
    int index_static, index_dynamic;
    int * dynamic_array[100];


    printf("Enter SIZE: ");
    scanf("%d",&size);

    if(size == 0) exit(1);
    top = NULL;
    index_static = index_dynamic = 0 ;


    for(i=0;i<size;i++)
        {
            int data ;
            printf("Value[%d]: ",i+1);
            scanf("%d",&data);

            top = push_linked(top, data);
            index_static = push_static(static_array, data, index_static);
            index_dynamic = push_dynamic(dynamic_array, data, index_dynamic);
        }

        print_linked(top);
        print_static(static_array, index_static);
        print_dynamic(dynamic_array, index_dynamic);
}

struct node * push_linked(struct node *top, int data){
            struct node * ptr ;

            if(top == NULL)
            {
                ptr = (struct node *)malloc(sizeof(struct node));
                top = ptr;
                ptr->link = NULL;
            }
            else
            {
                ptr = (struct node *)malloc(sizeof(struct node));
                ptr->link = top;
                top = ptr;
            }

            if (ptr != NULL)
                ptr->data = data;
            return top;
}


int push_static(int array[], int data, int index_static){
    //insert value to array

    for(int i = ++index_static;i>=0;i--)
        array[i+1] = array[i];

    array[0] = data;

    return index_static;
}
int  push_dynamic(int *array[], int data, int index_dynamic)
{
    if (index_dynamic != 0)
    for(int i = index_dynamic;i>=0;i--)
    {
        array[i+1] = (int *)malloc(sizeof(int));
        *array[i+1] = *array[i];
    }

    array[0] = (int *)malloc(sizeof(int));
    *array[0] = data ;

    return index_dynamic+1;
}
void print_linked(struct node *top)
{
    struct node *ptr;
    printf("print linked list \n");
            ptr = top ;
            while(ptr != NULL)
            {
                printf("%d\n",ptr->data);
                ptr = ptr->link ;
            }

        printf("\n");

}
void print_static(int static_array[], int index_static)
{
        printf("print static array \n");
        for (int j=0 ; j<index_static; j++){
             printf("%d\n",static_array[j]);
        }
        printf("\n");
}
void print_dynamic(int *array[], int index_dynamic)
{
        printf("print dynamic array \n");
        for (int j=0 ; j<index_dynamic; j++){
             printf("%d\n",*array[j]);
        }
        printf("\n");
}


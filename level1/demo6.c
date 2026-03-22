#include<stdio.h>
#include<stdlib.h>
int* create_array(int n)
{
    int *arr=(int*)malloc(n * sizeof(int));
    if(arr==NULL)
    {
        printf("Dynamic allocation failed:\t\n");
        exit(0);
    }
    return arr;
} 
void initialize_array(int *arr, int n)
{
    printf("Enter the array elements:\t\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print_array(int *arr, int n)
{
    printf("The array elements are:\t\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void delete_array(int **arr)
{
    free(*arr);//Avoids memory leak
    *arr=NULL;
}
int main()
{
    int n;int *arr;
    printf("Enter the size of elements:\t\n");
    scanf("%d",&n);
    arr=create_array(n);
    initialize_array(arr,n);
    print_array(arr,n);
    delete_array(&arr);
    return 0;
}
#include<stdio.h>
void read_array(int n, int arr[])
{
    printf("Enter the elements:\t\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print_array(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap_array(int n, int a[n],int b[n])
{
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
int main()
{
    int n;
    printf("Enter the total number of elements in both the arrays:\t\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter Elements of first array:\t\n");
    read_array(n,a);
    printf("Enter elements of second array:\t\n");
    read_array(n,b);
    swap_array(n,a,b);
    printf("Elements after swapping:\t\n");
    printf("First array:\t\n");
    print_array(n,a);
    printf("Second array:\t\n");
    print_array(n,b);
    return 0;
}
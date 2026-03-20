#include<stdio.h>
void input(int n,float arr[]);
int find_max_index(int n,float arr[]);
void output(float arr[],int max_index);
int main()
{
    int n, index;
    float arr[100];
    printf("Enter no of elements:\t\n");
    scanf("%d",&n);
    input(n,arr);
    index=find_max_index(n,arr);
    output(arr,index);
    return 0;
}
void input(int n,float arr[])
{
    printf("Enter the array elements:\t\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
}
int  find_max_index(int n,float arr[])
{
    int max_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max_index])
        max_index=i;
    }
    return max_index;
}
void output(float arr[],int max_index)
{
    printf("Largest number is:%f \t\n",arr[max_index]);
    printf("Largest index is:%d\t\n",max_index);
}
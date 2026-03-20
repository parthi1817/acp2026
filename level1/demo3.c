#include<stdio.h>
typedef struct{
    
    float length;
    float width;
    float area;
}Rectangle;
void input(int n,Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int largestIndex, Rectangle rects[],int n);
int main()
{
    int largestIndex,n;
    printf("Enter Number of rectangles:\t\n");
    scanf("%d",&n);
    Rectangle rects[n];
    input(n,rects);
    calculate_area(n,rects);
    largestIndex=findLargestArea(n,rects);
    output(largestIndex,rects,n);
    return 0;
}
void input(int n,Rectangle rects[n])
{
    printf("Enter the details:\t\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter length:\t\n");
        scanf("%f",&rects[i].length);
        printf("Enter breadth:\t\n");
        scanf("%f",&rects[i].width);

    }
}
void calculate_area(int n,Rectangle rects[n])
{
    for(int i=0;i<n;i++)
    rects[i].area=rects[i].length * rects[i].width;
}
int findLargestArea(int n, Rectangle rects[n])
{
    int maxindex=0;
    for(int i=1;i<n;i++)
    {
    if(rects[i].area>rects[maxindex].area)
    {
    maxindex=i;
    }
}
    return maxindex;
}
void output(int largestIndex, Rectangle rects[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf("Rectangle %d area:%f\t\n",i+1,rects[i].area);
    }
    printf("Largest Rectangle %d Area is: %f",largestIndex + 1,rects[largestIndex].area);
    
}

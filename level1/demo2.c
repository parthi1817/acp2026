#include<stdio.h>
typedef struct{
    char name[50];
    float length;
    float width;
    float area;
}Rectangle;
Rectangle input();
float calculate_area(Rectangle rec);
void compare_area(Rectangle r1, Rectangle r2, Rectangle r3);
int main()
{
    Rectangle r1,r2,r3;
    printf("Enter the details for rectangle 1:\t\n");
    r1=input();
    printf("Enter the details for rectangle 2:\t\n");
    r2=input();
    printf("Enter the details for rectangle 3:\t\n");
    r3=input();
    r1.area=calculate_area(r1);
    r2.area=calculate_area(r2);
    r3.area=calculate_area(r3);
    compare_area(r1,r2,r3);
    return 0;
}
Rectangle input()
{
    Rectangle r;
    printf("Enter the name of rectangle:\t\n");
    scanf("%s",r.name);
    printf("Enter the length:\t\n");
    scanf("%f",&r.length);
    printf("Enter the breadth:\t\n");
    scanf("%f",&r.width);
    return r;
}
float calculate_area(Rectangle rec)
{
    return rec.length * rec.width;
}
void compare_area(Rectangle r1, Rectangle r2,Rectangle r3)
{
    if(r1.area>r2.area && r1.area>r3.area)
    printf("%s is the largest\t\n",r1.name);
    else if(r2.area>r1.area && r2.area>r3.area)
    printf("%s is the largest\t\n",r2.name);
    else
    printf("%s is the largest\t\n",r3.name);
}


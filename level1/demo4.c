#include<stdio.h>
#include<string.h>
typedef struct{
    int flight_number;
    char flight_destination[50];
    int available_seats;
}Flight_t;
void readFlights(int n, Flight_t f[]); 
void searchByDestination(int n, Flight_t f[], char searchDest[]);
int main()
{
    Flight_t flights[4];
    char searchDest[50];
    readFlights(4,flights);
    printf("Enter the destination:");
    scanf("%s",searchDest);
    searchByDestination(4,flights,searchDest);
    return 0;
}
void readFlights(int n, Flight_t f[])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter flight %d details:",i+1);
        printf("Flight's  number:");
        scanf("%d",&f[i].flight_number);
        printf(" Flight's destination:");
        scanf("%s",f[i].flight_destination);
        printf("Available seats:");
        scanf("%d",&f[i].available_seats);
    }
}
void searchByDestination(int n, Flight_t f[], char searchDest[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
    if(strcmp(f[i].flight_destination,searchDest)==0)
    {
        printf("Flight found! Flight number is :%d",f[i].flight_number);
        count=1;
    }
}
    if(count==0)
    {
    printf("Flight not found");
    }
}
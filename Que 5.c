/*
Create a structure named distance which has members: meter and centimeter.
Write a program to read a distance from user and multiply the entered distance by 5 and then display the resultant distance
*/
#include <stdio.h>
struct distance
{
    int meter;
    int centimeter;
} d;
int main()
{
    printf("Enter the distance in terms of meter and centimeter here:\n");
    scanf("%d%d", &d.meter, &d.centimeter);
    d.meter*=5;
    d.centimeter*=5;
    if(d.centimeter>=100){
    	d.meter=d.meter+(d.centimeter/100);
    	d.centimeter%=100;
	}
    printf("The resultant distance after multiplication is %d meter %d centimeter\n",d.meter,d.centimeter);
    return 0;
}

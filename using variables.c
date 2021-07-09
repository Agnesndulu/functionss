// a program to calculate the area of a circle using variables
#include <stdio.h> 

float circle(float radius);
int main()
{
float radius,Area;
printf("enter the radius");
scanf("\n%f",&radius);
Area = circle(radius);
printf("area of the circle%f",Area);

return 0;
}

float circle(float radius)
{
	float Area;
	Area=3.142*radius*radius;
	return Area;
}
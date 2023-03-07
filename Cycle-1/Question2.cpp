#include<iostream>
#include<cmath>

int area(int length, int breadth)                   //Area of Rectangle
{         
	return (length*breadth);
}
int area(int a)                                 //Area of Square
{                
	return pow(a, 2);
}
float area(float a, float b, float c)                //Area of Triangle
{        
	float s=(a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
float area(float r)                                 //Area of Circle
{
    const double pi=3.14;
	return pi*pow(r, 2);
}
float area(float radius,float height)               //Area of Cylinder
{
    const double pi=3.14;
	return (2*pi*radius*(radius+height));
}

int main()
{
	float rad,height,b,c,side,radius;
	int a,length,breadth;
	int ch;
	while (ch!=7)
	{
		std::cout<<"\n\n***Choose An Option***";
		std::cout<<"\n1. Circle";
		std::cout<<"\n2. Triangle";
		std::cout<<"\n3. Square";
		std::cout<<"\n4. Rectangle";
		std::cout<<"\n5. Cylinder";
		std::cout<<"\n6. Exit";
	
		std::cout<<"\n\nEnter your choice: ";
		std::cin>>ch;
		switch (ch)
		{
			case 1:
			{
				std::cout<<"\nEnter radius of circle: ";
				std::cin>>rad;
				std::cout<<"\nArea of the circle= "<<area(rad);
				break;
			}
			case 2:
			{
				std::cout<<"\nEnter first side of triangle: ";
				std::cin>>a;
				std::cout<<"\nEnter the second side of triangle: ";
				std::cin>>b;
				std::cout<<"\nEnter the third side of triangle: ";
				std::cin>>c;
				std::cout<<"\nArea of the triangle= "<<area(a,b,c);
				break;
			}
			case 3:
			{
				std::cout<<"\nEnter side of square: ";
				std::cin>>a;
				std::cout<<"\nArea of the square: "<<area(a);
				break;
			}
			case 4:
			{
				std::cout<<"\nEnter length of the rectangle: ";
				std::cin>>length;
				std::cout<<"\nEnter breadth of the rectangle: ";
				std::cin>>breadth;
				std::cout<<"\nArea of the rectangle: "<<area(length,breadth);
				break;
			}
			case 5:
			{
				std::cout<<"\nEnter the radius of cylinder: ";
				std::cin>>radius;
				std::cout<<"\nEnter the height of cylinder: ";
				std::cin>>height;
				std::cout<<"\nArea of the cylinder: "<<area(radius,height);
				break;
			}
			case 6:
			exit(0);
			break;
		}
	}
}
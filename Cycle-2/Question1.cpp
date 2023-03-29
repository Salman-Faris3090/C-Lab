#include<iostream>
#include<cmath>
class vector
{
	private:
	float x;
	float y;
	float z;
	long double magnitude;
	public:
	vector()
	{}
	void getvalue();
	int getmagnitude();
	void display();
	void operator == (const vector&);
	void operator != (const vector&);
	void operator <  (const vector&);
	void operator <= (const vector&);
	void operator >  (const vector&);
	void operator >= (const vector&);
};
void vector::getvalue()
{
	std::cout<<"\nEnter the values for vector"<<std::endl;
	std::cout<<"x = ";
	std::cin>>x;
	std::cout<<"y = ";
	std::cin>>y;
	std::cout<<"z = ";
	std::cin>>z;
}
int vector::getmagnitude()
{
	std::cout<<"\nThe magnitude for the entered values are:"<<std::endl;
	magnitude = (x*x)+(y*y)+(z*z);
	magnitude = sqrt(magnitude);
	std::cout<<magnitude<<std::endl;
	return (magnitude);
}
void vector::display()
{
	if(y<0 and z<0)
	{
		std::cout<<x<<"i "<<y<<"j "<<z<<"k "<<std::endl;
	}
	else if(y>0 and z<0)
	{
		std::cout<<x<<"i + "<<y<<"j "<<z<<"k "<<std::endl;
	}
	else if(y<0 and z>0)
	{
		std::cout<<x<<"i "<<y<<"j + "<<z<<"k "<<std::endl;
	}
	else
	{
		std::cout<<x<<"i + "<<y<<"j + "<<z<<"k ";
	}
}
void vector::operator == (const vector&a)
{
	if(magnitude == a.magnitude)
	{
		std::cout<<"\n***Both the vectors are of same Magnitude***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***The vectors have unequal Magnitude***"<<std::endl;
	}
}
void vector::operator != (const vector&a)
{
	if (magnitude != a.magnitude)
	{
		std::cout<<"\n***The vectors have unequal Magnitude***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***Both the vectors are of same Magnitude***"<<std::endl;
	}
}
void vector::operator < (const vector&a)
{
	if(magnitude < a.magnitude)
	{
		std::cout<<"\n***Vector 2 is greater than Vector 1***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***Vector 2 is less than Vector 1***"<<std::endl;
	}
}
void vector::operator <= (const vector&a)
{
	if(magnitude <= a.magnitude)
	{
		std::cout<<"\n***Vector 1 is less than or equal to Vector 2***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***Vector 1 is greater than Vector 2***"<<std::endl;
	}
}
void vector::operator > (const vector&a)
{
	if(magnitude > a.magnitude)
	{
		std::cout<<"\n***Vector 2 is less than Vector 1***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***Vector 2 is greater than Vector 1***"<<std::endl;
	}
}
void vector::operator >=(const vector&a)
{
	if(magnitude >= a.magnitude)
	{
		std::cout<<"\n***Vector 1 is greater than or equal to Vector 2***"<<std::endl;
	}
	else
	{
		std::cout<<"\n***Vector 1 is less than Vector 2***"<<std::endl;
	}
}
int main()
{
	vector a,b;
	a.getvalue();
	a.getmagnitude();
	b.getvalue();
	b.getmagnitude();
	std::cout<<"\nThe Vectors are:"<<std::endl;
	a.display();
	std::cout<<"\n";
	b.display();
	int choice;
	std::cout<<"\n\n### Available Vector Operations ###\n"<<std::endl;
	do
	{
		std::cout<<"\nPress 1 to check a==b or not"<<std::endl;
		std::cout<<"\nPress 2 to check a!=b or not"<<std::endl;
		std::cout<<"\nPress 3 to check a<b or not"<<std::endl;
		std::cout<<"\nPress 4 to check a<=b or not"<<std::endl;
		std::cout<<"\nPress 5 to check a>b or not"<<std::endl;
		std::cout<<"\nPress 6 to check a>=b or not"<<std::endl;
		std::cout<<"\nPress 7 to Quit"<<std::endl;
		std::cin>>choice; 
		switch(choice)
		{
			case 1:
				a==b;
				break;
			case 2:
				a!=b;
				break;
			case 3:
				a<b;
				break;
			case 4:
				a<=b;
				break;
			case 5:
			a>b;
				break;
			case 6:
				a>=b;
				break;
			case 7:
				exit(0);
			default:
				std::cout<<"Enter Correct Choice:";
				break;
		}
	}
	while(choice!=7);
	return 0;
}


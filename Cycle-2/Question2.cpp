#include<iostream>
class complex
{
	private:
		float real,imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		void getelement();
		void display();
		friend complex operator +(const complex&,const complex&);
		friend complex operator *(const complex&,const complex&);
};
void complex::getelement()
{
	std::cout<<"\nEnter the Real part for the Complex Number:";
	std::cin>>real;
	std::cout<<"Enter the Imaginary part for the Complex Number:";
	std::cin>>imag;
}
void complex::display()
{
	if(imag>0)
	{
		std::cout<<"\n"<<real<<" + "<<imag<<"i\n";
	}
	else if(imag<0)
	{
		std::cout<<"\n"<<real<<imag<<"i\n";
	}
	else if(real=0)
	{
		std::cout<<"\n"<<imag<<"i\n";
	}
	else
	{
		std::cout<<"\n"<<real<<"\n";
	}
}
complex operator +(const complex&a,const complex&b)
{
	complex sum;
	sum.real=a.real+b.real;
	sum.imag=a.imag+b.imag;
	return sum;
}
complex operator *(const complex&a,const complex&b)
{
	complex mul;
	mul.real=(a.real+b.real) - (a.imag+b.imag);
	mul.imag=(a.real+b.imag) + (b.real+a.imag);
	return mul;
}
int main()
{
	complex a,b,c,d;
	int choice;
	std::cout<<"\n***First Complex Number***"<<std::endl;
	a.getelement();
	a.display();
	std::cout<<"\n***Second Complex Number***"<<std::endl;
	b.getelement();
	b.display();
	std::cout<<"\nThe Two Complex Numbers are:"<<std::endl;
	std::cout<<"1)";
	a.display();
	std::cout<<"\n2)";
	b.display();
	std::cout<<"\n### Available Complex Operations ###"<<std::endl;
	do
	{
		std::cout<<"\n Press 1 to find the sum of Complex Numbers"<<std::endl;
		std::cout<<"\n Press 2 to find the product of Complex Numbers"<<std::endl;
		std::cout<<"\n Press 3 to Quit"<<std::endl;
		std::cin>>choice;
		switch(choice)
		{
			case 1:
			std::cout<<"\nSum of Complex Numbers:"<<std::endl;
			c=a+b;
			c.display();
			break;

			case 2:
			std::cout<<"\nProduct of Complex Numbers:"<<std::endl;
			d=a*b;
			d.display();
			break;

			case 3:
			exit(0);

			default:
			std::cout<<"\nEnter Correct Choice";
			break;
		}
	}
	while(choice!=3);
	return 0;
}


#include<iostream>
class A
{
	protected:
		int x;
	public:
		void getvalue(int);
};
class B
{
	protected:
		int y;
	public:
		void getvalue(int);
};
class C:public A, public B
{
	public:
		void display(void);
};
class D:public C
{
	public:
		void display(void);
};
void A::getvalue(int a)
{
	x=a;
}
void B::getvalue(int b)
{
	y=b;
}
void C::display(void)
{
	std::cout<<"Enter the first number to add:"<<std::endl;
	std::cin>>x;
	std::cout<<"Enter the second number to add:"<<std::endl;
	std::cin>>y;
	std::cout<<"\n***Sum of two numbers are:***"<<std::endl;
	std::cout<<x+y;
}
void D::display(void)
{
	std::cout<<"\nEnter the first number to substract:"<<std::endl;
	std::cin>>x;
	std::cout<<"Enter the second number to substract:"<<std::endl;
	std::cin>>y;
	std::cout<<"\n***Difference between the two numbers are***"<<std::endl;
	std::cout<<x-y<<std::endl;
}
int main()
{
	C sum;
	D diff;
	sum.display();
	diff.display();
	return 0;
}

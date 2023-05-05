#include<iostream>
class complex
{
    private:
    float real;
    float imag;
    public:
    complex(){};
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    friend complex add(complex, complex);
    void display()
    {
	    std::cout<<real<<" + "<<imag<<" i "<<"\n";
    }
};

complex add(complex a, complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}
int main()
{
    float r,i;
    std::cout<<"\nEnter value for real part of the first complex number : ";
    std::cin>>r;
    std::cout<<"Enter value for imaginary part of the first complex number : ";
    std::cin>>i;
    complex C1(r,i);
    C1.display();
    std::cout<<"\nEnter value for real part of the second complex number : ";
    std::cin>>r;
    std::cout<<"Enter value for imaginary part of the second complex number : ";
    std::cin>>i;
    complex C2(r,i);
    C2.display();
    complex C3;
    C3=add(C1, C2);
    std::cout<<"\nSum of the two complex numbers are"<<std::endl;
    C3.display();
    return 0;
}

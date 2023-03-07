#include<iostream>
class complex
{
    private:
    float real;
    float imag;
    public:
    complex();
    complex(float, float);
    complex(complex, complex);
    void show(void);
};
complex::complex(float x, float y)
{
    real=x;
    imag=y;
}
complex::complex(complex c1, complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
void complex::show()
{
    std::cout<<real<<" + "<<imag<<"i";
}
int main()
{
    int real;
    int imag;
    std::cout<<"Enter Real part for First Complex number: ";
    std::cin>>real;
    std::cout<<"Enter Imaginary part for First Complex number: ";
    std::cin>>imag;
    complex a(real, imag);
    std::cout<<"\nEnter Real part for Second Complex number: ";
    std::cin>>real;
    std::cout<<"Enter Imaginary part for Second Complex number: ";
    std::cin>>imag;
    complex b(real,imag);
    complex c(a,b);
    std::cout<<"\n***** Sum Of Two Complex Numbers ***** "<<std::endl;
    c.show();
    return 0;
}
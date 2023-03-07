#include<iostream>
class complex
{
    private:
    float real;
    float imag;
    public:
    complex();
    complex(float);
    complex(float,float);
    complex(complex,complex);
    void show(void);
};
complex::complex(float x)
{
    real=x;
    imag=x;
}
complex::complex(float x,float y)
{
    real=x;
    imag=y;
}
complex::complex(complex c1,complex c2)
{
    real = c1.real+c2.real;
    imag = c1.imag+c2.imag;
}
void complex::show()
{
    std::cout<<real<<" + "<<imag<<"i";
}
int main()
{
    int real;
    int imag;
    std::cout<<"Enter Real part for first Complex number :";
    std::cin>>real;
    std::cout<<"Enter Imaginary part for first Complex number :";
    std::cin>>imag;
    complex a(real,imag);
    std::cout<<"\nEnter Real part for second Complex number :";
    std::cin>>real;
    std::cout<<"Enter Imaginary part for second Complex number :";
    std::cin>>imag;
    complex b(real,imag);
    complex c(a,b);
    std::cout<<"\nSum of the two Complex numbers are :"<<std::endl;
    c.show();
    return 0;
}

#include<iostream>
template<class T>
class calculator
{
    private:
            T num1,num2;
    public:
            calculator(T n1,T n2)
            {
                num1=n1;
                num2=n2;
            }

            T add()
            {
                return num1+num2;
            }

            T substraction()
            {
                return num1-num2;
            }

            T multiplication()
            {
                return num1*num2;
            }

            T division()
            {
                return num1/num2;
            }
            void display_result()
	    {
		std::cout<<"The numbers are\n"<<num1<<" and "<<num2<<std::endl;
	        std::cout<<"\n"<<num1<<"+"<<num2<<"="<<add()<<std::endl;
		std::cout<<num1<<"-"<<num2<<"="<<substraction()<<std::endl;
	        std::cout<<num1<<"*"<<num2<<"="<<multiplication()<<std::endl;
		std::cout<<num1<<"/"<<num2<<"="<<division()<<std::endl;
            }
};

int main()
{
    int n,m;
    std::cout<<"Enter two integers for the calculation:"<<std::endl;
    std::cin>>n>>m;
    calculator<int>icalc(n,m);
    icalc.display_result();
    float a,b;
    std::cout<<"\nEnter two floating numbers for the calculation:"<<std::endl;
    std::cin>>a>>b;
    calculator<float>jcalc(a,b);
    jcalc.display_result();
    return 0;
}

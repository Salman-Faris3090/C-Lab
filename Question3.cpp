#include<iostream>
void zeroDivision(float x,float y)
{
    if(y==0)
    {
        throw "Division by zero is not possible\n";
    }
    else
    {
        std::cout<<"Result = "<<x/y<<std::endl;
    }

}
int main()
{
    int ex=1;
    while(ex==1)
    {
        std::cout<<"1-START\n2-EXIT"<<std::endl;
        std::cin>>ex;
        if(ex==2)
        {
	std::cout<<"Exited successfully"<<std::endl;
            return 0;
        }
        float a,b;
	std:: cout<<"Enter the neumerator for the division : ";
	std::cin>>a;
	std::cout<<"Enter the denominator for the division : ";
	std::cin>>b;
        try
        {
            zeroDivision(a,b);
        }
        catch(const char * message)
        {
	    std::cout<<message;
        }
    }
    return 0;
    
}

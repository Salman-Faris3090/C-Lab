#include <iostream>
class Static
{
    int static count;
    public:
    Static()
    {
        count++;
    }
    void showcount()
    {
        std::cout<<"No. of objects is: "<<count<<std::endl;
    }
};
int Static::count=0;
int main()
{
    int count;
    int i=0;
    std::cout<<"Press 1 to Start \nAny other key to Quit"<<std::endl;
    std::cin>>count;
    while(count==1)
    {
        std::cout<<"\nPress 1 to create an object  \n Any other key to Quit"<<std::endl;
        std::cin>>count;
        if(count == 1)
        {
            Static i;
            i.showcount();
            std::cout<<std::endl;
        }
        else
        {
            std::cout<<"*** No. Of Objects ***"<<std::endl;
            std::cout<<count;
        exit(0);
        }
        i++;
    }
    
}
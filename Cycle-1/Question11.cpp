#include<iostream>
class class_2;
class class_1
{
    private:
    int value1;
    public:
    void setvalue(void)
    {
        std::cout<<"Enter the First value: ";
        std::cin>>value1;
    }
    void display(void)
    {
     std::cout<<"\nThe First value is: "<<value1<<std::endl;   
    }
    friend void exchange(class_1 &a, class_2 &b);
};
class class_2
{
    private:
    int value2;
    public:
    void setvalue(void)
    {
        std::cout<<"Enter the Second value: ";
        std::cin>>value2;
    }
    void display(void)
    {
        std::cout<<"The Second value is: "<<value2<<std::endl;
    }
    friend void exchange(class_1 &a, class_2 &b);
};
void exchange(class_1 &a, class_2 &b)
{
    a.value1=a.value1+b.value2;
    b.value2=a.value1-b.value2;
    a.value1=a.value1-b.value2;
}
int main()
{
    class_1 a;
    class_2 b;
    a.setvalue();
    b.setvalue(); 
    a.display();
    b.display();
    exchange(a, b);
    std::cout<<"\n***** The Values After Getting Exchanged ***** "<<std::endl;
    a.display();
    b.display();
    return 0;
}
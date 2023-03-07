#include<iostream>
#include<cstring>
class strings
{
    private:
        string name,result;
        int lens1,lens2,len;
    public:
        void input(void);
        int length (strings);
        void compare(strings,strings);
        void concatenate(strings,strings);
};
void strings::input()
{
    std::cout<<"\nEnter the string: ";
    std::cin>>name;
}
int strings::length(strings s)
{   name=s.name;
    len=strlen(name);
    std::cout<<"\nLength of the string "<<name<<"is: "<<len;
    return len;
}
void strings::compare(strings s1,strings s2)
{
    lens1=s1.len;
    lens2=s2.len;
    if (lens1>lens2)
        {
            std::cout<<"\nThe largest string is "<< s1.name<<"of length "<<lens1;
        }
    else if(lens1==lens2)
        {
            std::cout<<"\nThe length of both the strings are same and thier length is "<<lens1;
        }
    else
        {
            std::cout<<"\nThe largest string is "<< s2.name<<"of length "<<lens1;
        }

}
void strings::concatenate(strings a,strings b);
{
	strcpy(result, a.name"\n");
	strcat(result, b.name);
	std::cout<<"\nThe concatenated result is" <<name;
}
int main()
{
    strings s1,s2,s3,s4;
    int i,j;
    s1.input();
    s2.input();
    s1.length(s1);
    s2.length(s2);
    s3.compare(s1,s2);
    s4.concatenate(s1,s2);
    return 0;
}
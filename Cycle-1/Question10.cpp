#include<iostream>
#include<iomanip>
class shop
{
private:
int item_code[15];
char name[15];
float price[15];
float quantity[15];
static int count;
int sum=0,code;
std::string item_name[15];
public:
void add_item();
void delete_item();
void print();
};
int shop::count=0;
void shop::add_item()
{
count++;
std::cout<<"Enter the item code: ";
std::cin>>item_code[count];
std::cout<<"Enter the item name: ";
std::cin>>name;
item_name[count]=name;
std::cout<<"Enter the price of item: ";
std::cin>>price[count];
std::cout<<"Enter the quantity: ";
std::cin>>quantity[count];
}
void shop::delete_item()
{
std::cout<<"Enter the item code to remove the item: ";
std::cin>>code;
int j=0;
for(int i=0;i<=count;i++)
{
if(code==item_code[i])
{
price[i]=0;
item_name[i]='0';
quantity[i]=0;
j=1;
}
if (j=!1)
std::cout<<"enterd item not in the cart"<<std::endl;
}
}
void shop::print()
{
std::cout<<"********** AVAILABLE PRODUCTS IN THE STORE ************"<<std::endl;
std::cout<<std::setw(13)<<"code";
std::cout<<std::setw(13)<<"name";
std::cout<<std::setw(13)<<"price";
std::cout<<std::setw(13)<<"quantity";
std::cout<<std::setw(13)<<"amount"<<std::endl;
for(int i=1;i<=count;i++)
{
std::cout<<std::setw(13)<<item_code[i];
std::cout<<std::setw(13)<<item_name[i];
std::cout<<std::setw(13)<<price[i];
std::cout<<std::setw(13)<<quantity[i];
std::cout<<std::setw(13)<<price[i]*quantity[i]<<std::endl;
}
for(int i=1;i<=count;i++)
{
sum=sum+price[i]*quantity[i];
}
std::cout<<"Total Amount= "<<sum<<std::endl;
}
int main()
{
int option;
int choice;
shop s1;
do
{
std::cout<<"****** WELCOME TO MAIN MENU OF OUR STORE ******"<<std::endl;
std::cout<<"Enter 1 to add item"<<std::endl<<"Enter 2 to delete item"<<std::endl<<"Enter 3 to print the list of available items"<<std::endl;
std::cin>>option;
switch(option)
{
case 1:
s1.add_item();
break;
case 2:
s1.delete_item();
break;
case 3:
s1.print();
break;
}
std::cout<<"Do you want to continue(Press 1 to continue , Press 2 to quit): ";
std::cin>>choice;
}while(choice==1);
return 0;
}

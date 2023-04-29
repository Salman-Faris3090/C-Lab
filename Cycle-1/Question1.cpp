#include <iostream>
class student
{
private:
    std::string name, grade;
    int roll_no,tm,tg;
    int mark1, mark2, mark3, mrks;

public:
    void input();
    char calcgrade(int, int, int);
    void display();
};

void student::input()
{
    std::cout << "Enter the Name: ";
    std::cin >> name;
    std::cout << "Enter the Roll Number: ";
    std::cin >> roll_no;
    std::cout << "\n***Enter the marks out of 100***\n";
    std::cout << "Enter the mark of First subject: ";
    std::cin >> mark1;
    std::cout << "Enter the mark of Second subject: ";
    std::cin >> mark2;
    std::cout << "Enter the mark of Third subject: ";
    std::cin >> mark3;
}

char student::calcgrade(int mark1, int mark2, int mark3)
{
    int tm, tg;
    char grade;
    tg = (mark1 + mark2 + mark3)/3;
    if (tg >= 90)
    {
        grade = 'A';
    }
    else if (tg >= 80 and tg < 90)
    {
        grade = 'B';
    }
    else if (tg >= 70 and tg < 80)
    {
        grade = 'C';
    }
    else if (tg >= 60 and tg < 70)
    {
        grade = 'D';
    }
    else if (tg >= 50 and tg < 60)
    {
        grade = 'E';
    }
    else
    {
	    std::cout<<"Below E";
    }
    return grade;
    return tg;
}

void student::display()
{	
    if (mark1 > 100 or mark2 > 100 or mark3 > 100)
    {
        std::cout << "Mark should be out of 100";
    }
    else
    {
        std::cout << "\n****RESULT****";
        std::cout << "\nStudent Name: " << name;
        std::cout << "\nRoll No: " << roll_no;
        std::cout << "\nTotal Mark: "<< mark1+mark2+mark3;
	std::cout << "\nPercentage: "<< (mark1+mark2+mark3)/3<<"%";
       	std::cout << "\nGrade=" << calcgrade(mark1, mark2, mark3);
    }
}
int main()
{
    std::string option;
    student o1, o2;
    std::cout << "Enter the details of the Student\n";
    o1.input();
    o1.display();
    do
    {
        std::cout << "\nDo you need to continue(yes/no): ";
        std::cin >> option;
        if (option == "yes" or option == "YES")
        {
            std::cout << "\nEnter the detials of the Student\n";
            o2.input();
            o2.display();
        }
    } while (option == "yes" or option == "YES");

    return 0;
}


#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    void input(void);
    void add(Time, Time);
    void display(void);
};
void Time::input()
{
    std::cout << "\nEnter the Time in Hours: ";
    std::cin >> hours;
    std::cout << "Enter the Time in Minutes: ";
    std::cin >> minutes;
    std::cout << "Enter the Time in Seconds: ";
    std::cin >> seconds;
}
void Time::add(Time t1, Time t2)
{
    seconds = t1.seconds + t2.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes = minutes + t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
void Time::display()
{
    std::cout << hours << "Hrs " << minutes << "Mins " << seconds << "Secs ";
}
int main()
{
    Time t1, t2, t3;
    std::cout << "***TIME 1***";
    t1.input();
    t1.display();
    std::cout << "***TIME 2***";
    t2.input();
    t2.display();
    t3.add(t1, t2);
    std::cout << "\n***TIME 1+TIME 2:***\n";
    t3.display();
    return 0;
}

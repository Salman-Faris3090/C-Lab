#include <iostream>
class Student
{
  protected:
    int roll_no;
  public:
    Student() {}
  Student(int r)
  {
    roll_no = r;
  }
  void dis_rollno();
};
void Student::dis_rollno()
{
	std::cout << "Roll number:" << roll_no;
}
class Test: public Student 
{
  protected: float sub1;
  float sub2;
  float sub3;
  public: Test() {}
  Test(int r, float s1, float s2, float s3): Student(r) 
  {
    sub1 = s1;
    sub2 = s2;
    sub3 = s3;
  }
  void dis_marks()
  {
    std::cout << "Marks in subject1:" << sub1 << std::endl;
    std::cout << "Marks in subject 2:" << sub2 << std::endl;
    std::cout << "Marks in subject3:" << sub3 << std::endl;
  }
};
class Arts
{
  protected:
    float score;
  public:
    Arts() {}
  Arts(float s)
  {
    score = s;
  }
  void put_score(void)
  {
	  std::cout << "\nMarks obtained in Arts:" << score <<std:: endl;
  }
};
class Result: public Test, public Arts 
{
  float total_marks;
  public:
    Result() {}
  Result(int r, float s1, float s2, float s3, float s): Arts(s), Test(r, s1, s2, s3) 
  {
    total_marks = sub1 + sub2 + sub3 + score;
  }
  void display();
};
void Result::display()
{
  dis_marks();
  dis_rollno();
  put_score();
  std::cout << "Total marks obtained in 3 subjects and arts out of 400:" << total_marks;
  std::cout << std::endl;
}
int main()
{
  int roll, n;
  float m1, m2, m3, sc;
  std::cout << "Enter number of students: \n";
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
	  std:: cout << "\nEnter details of student " << i + 1 << ":" << std::endl;
	  std:: cout << "Enter the roll number of the Student:\n";
	  std::cin >> roll;
	  std::cout << "Enter marks obtained in 3 subjects:\n\n";
	  std::cout << "Enter marks obtained in subject 1 out of 100:\n";
	  std::cin >> m1;
	  std::cout << "Enter marks obtained in subject 2 out of 100:\n";
	  std::cin >> m2;
	  std::cout << "Enter marks obtained in subject 3 out of 100:\n";
	  std::cin >> m3;
	  std::cout << "Enter score obtained in arts out of 100:\n";
	  std::cin >> sc;
	  std::cout << "\nDisplaying details of student " << i + 1 << "\n";
    Result R(roll, m1, m2, m3, sc);
    R.display();
  }
  return 0;
}

#include <iostream>
class matrix
{
private:
    int **p;
    int d1, d2;
public:
    matrix();
    matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j]=value;
    }
    int &put_element(int i, int j)
    {
        return p[i][j];
    }
    ~matrix()
    {
        for (int i=0;i<d1;i++)
        {
            delete p[i];
        }
        delete p;
    }
};
matrix::matrix(int x, int y)
{
    d1=x;
    d2=y;
    p=new int *[d1];
    for (int i=0;i<d1;i++)
    {
        p[i]=new int[d2];
    }
}
int main()
{
    int m,n;
    std::cout<<"Enter the Size of the Matrix\n";
    std::cout<<"Row: ";
    std::cin>>m;
    std::cout<<"Column: ";
    std::cin>>n;
    matrix A(m, n);
    std::cout<<"Enter the Matrix Elements One by One:\n";
    int i,j,value;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            std::cin>>value;
            A.get_element(i, j, value);
        }
    }
    std::cout<<"The Matrix is:\n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            std::cout<<A.put_element(i,j);
            std::cout<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
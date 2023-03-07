#include <iostream>
class matrix
{
private:
    int row, col, m, n;
    int **p;

public:
    matrix(){};
    matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j] = value;
    }
    int &put_element(int i, int j)
    {
        return p[i][j];
    }
    matrix recieve(void);
    void show(void);
    void sum(matrix &, matrix &);
    void mult(matrix &, matrix &);
    void transpose(matrix);
    void trace(matrix);
};
matrix::matrix(int x, int y)
{
    row = x;
    col = y;
    p = new int *[row];
    for (int i = 0; i < row; i++)
    {
        p[i] = new int[col];
    }
}
matrix matrix::recieve()
{
    std::cout << "Enter the Size of the Matrix\n";
    std::cout << "Row: ";
    std::cin >> m;
    std::cout << "Column: ";
    std::cin >> n;
    matrix a(m, n);
    std::cout << "Enter the Matrix Elements One by One:"<<std::endl;
    int i, j, value;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cin >> value;
            a.get_element(i, j, value);
        }
    }
    return a;
}
void matrix::sum(matrix &a, matrix &b)
{
    if (a.row == b.row & a.col == b.col)
    {
        matrix c(a.row, a.col);
        int value;
        for (int i = 0; i < a.row; i++)
        {
            for (int j = 0; j < a.col; j++)
            {
                value = a.put_element(i, j) + b.put_element(i, j);
                c.get_element(i, j, value);
            }
        }
        c.show();
    }
    else
    {
        std::cout << "Invalid Input";
    }
}
void matrix::mult(matrix &a, matrix &b)
{
    if (a.col == b.row)
    {
        matrix c(a.row, b.col);
        int value = 0;
        for (int i = 0; i < a.row; i++)
        {
            for (int j = 0; j < b.col; j++)
            {
                int value = 0;
                for (int k = 0; k < a.col; k++)
                {
                    value = value + a.put_element(i, k) * b.put_element(k, j);
                    c.get_element(i, j, value);
                }
            }
        }
        c.show();
    }
    else
    {
        std::cout << "Invalid Input";
    }
}
void matrix::trace(matrix a)
{
    if (a.row == a.col)
    {
        int sum = 0;
        for (int i = 0; i < a.row; i++)
        {
            for (int j = 0; j < a.col; j++)
            {
                if (i == j)
                {
                    sum = sum + p[i][j];
                }
            }
        }
        std::cout << "Result= " << sum;
    }
    else
    {
        std::cout << "Invalid Input";
    }
}
void matrix::transpose(matrix a)
{
    matrix c(a.col, a.row);
    int value;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
        {
            value = p[i][j];
            c.get_element(j, i, value);
        }
    }
    c.show();
}
void matrix::show()
{
    std::cout << "Result is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << p[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    matrix a1, a2, a3, a4;
    int option;
    int choice;
    do
    {
        std::cout << "***MAIN MENU***\n";
        std::cout << "1. Enter 1 for addition of two Matrix"<<std::endl;
        std::cout << "2. Enter 2 to multiply two Matrix"<<std::endl;
        std::cout << "3. Enter 3 to find the Transpose of the Matrix"<<std::endl;
        std::cout << "4. Enter 4 to find the Trace of the Matrix"<<std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> option;
        if (option == 1)
        {
            matrix a1, a2, a3;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a1.sum(a2, a3);
        }
        else if (option == 2)
        {
            matrix a1, a2, a3, a4;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a4.mult(a2, a3);
        }
        else if (option == 3)
        {
            matrix m1, m2;
            m2 = m1.recieve();
            m2.transpose(m2);
        }
        else if (option == 4)
        {
            matrix a1, a2;
            a2 = a1.recieve();
            a2.trace(a2);
        }
        else
        {
            std::cout << "Invalid Input";
        }
        std::cout << "\n\nDo you want to Continue(Enter 1 for Yes and 0 for No): "; 
        std::cin >> choice;
    } while (choice == 1);
    return 0;
}
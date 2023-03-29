#include<iostream>
class matrices
{
    private:
            int row,col;
            int **p;
    public:
            matrices()
	    {}
            matrices(int x,int y)
            {
                row=x;
                col=y;
                
                if((row>0)and(col>0))
                {
                    p=new int *[row];
                    for(int i=0;i<row;i++)
                    {
                        p[i]=new int [col];
                    }
                }
            }
        
            void input();
            void display();
            friend matrices operator +(const matrices &a,const matrices &b);
            friend matrices operator *(const matrices &a,const matrices &b);
};

void matrices::input()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
		std::cin>>p[i][j];
        }
    }
}

void matrices::display()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
		std::cout<<p[i][j]<<" ";
        }
	std::cout<<""<<std::endl;
    }
}

matrices operator +(const matrices &a,const matrices &b)
{
    matrices x(a.row,a.col);
    for(int i=0;i<a.row;i++)
    {
        for(int j=0;j<a.col;j++)
        {
            x.p[i][j]+=a.p[i][j]+b.p[i][j];
        }
    }
    return x;
}

matrices operator *(const matrices &a,const matrices &b)
{
    matrices y(a.row,b.col);
    for(int i=0;i<a.row;i++)
    {
        for(int j=0;j<b.col;j++)
        {
            y.p[i][j]=0;
            for(int k=0;k<a.col;k++)
            {
                y.p[i][j]+=a.p[i][k]*b.p[k][j];
            }
        }
    }
    return y;
}

int main()
{
    int r1,c1,r2,c2;
    std::cout<<"Enter the Number of Rows for the First Matrix:"<<std::endl;
    std::cin>>r1;
    std::cout<<"Enter the Number of Coloumns for the First Matrix:"<<std::endl;
    std::cin>>c1;
    matrices obj1(r1,c1);
    std::cout<<"\n***Enter the values for the First matrix***"<<std::endl;
    obj1.input();
    std::cout<<"Enter the Number of Rows for the Second Matrix:"<<std::endl;
    std::cin>>r2;
    std::cout<<"Enter the Number of Columns for the Second matrix:"<<std::endl;
    std::cin>>c2;
    matrices obj2(r2,c2);
    std::cout<<"\n***Enter the values for the Second matrix***"<<std::endl;
    obj2.input();
    std::cout<<"The Entered Matrices are : "<<std::endl;
    std::cout<<"\n";
    obj1.display();
    std::cout<<""<<std::endl;
    obj2.display();
    if(r1==r2 && c1==c2)
    {
        matrices obj3(r1,c1);
        obj3=obj1+obj2;
	std::cout<<"\nSum of the Matrices are :"<<std::endl;
        obj3.display();
    }
    else
    {
	    std::cout<<"\n***Addition is not possible for the given Matrices***"<<std::endl;
    }
    
    if(c1==r2)
    {
        matrices obj4(r2,c2);
        obj4=obj1*obj2;
	std::cout<<"\nProduct of the Matrices are :"<<std::endl;
        obj4.display();
    }
    else
    {
	    std::cout<<"\n***Multiplication is not possible for the given Matrices***"<<std::endl;
    }
    return 0;
}

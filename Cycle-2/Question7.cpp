#include<iostream>
class Alpha
{
	private:
		int x;
	public:
		Alpha(int i)
		{
		x=i;
		std::cout<<"\nAlpha has been initialized"<<std::endl;
		}
		void show_x(void)
		{
			std::cout<<"The value of x="<<x<<std::endl;
		}
};
class Beta
{
	private:
		float y;
	public:
		Beta(float j)
		{
		y=j;
		std::cout<<"\nBeta has been initialized";
		}
		void show_y(void)
		{
			std::cout<<"The value of y="<<y<<std::endl;
		}
};
class Ghamma:public Beta,public Alpha
{
	private:
		int m;
		int n;
	public:
		Ghamma(int a,float b,int c,int d):Alpha(a),Beta(b)
		{			  
		m=c;
		n=d;
		}
		void show_m_n(void)
		{
			std::cout<<"The value of m="<<m<<std::endl;
			std::cout<<"The value of n="<<n<<std::endl;
		}	
};
int main()
{
	int q,s,t;
	float r;
	std::cout<<"Enter the value for Alpha"<<std::endl;
	std::cin>>q;
	std::cout<<"Enter a floating value for Beta"<<std::endl;
	std::cin>>r;
	std::cout<<"Enter a value for Ghamma"<<std::endl;
	std::cin>>s;
	std::cout<<"Enter the last value"<<std::endl;
	std::cin>>t;
	Ghamma g(q,r,s,t);
		g.show_x();
		g.show_y();
		g.show_m_n();
		return 0;
}

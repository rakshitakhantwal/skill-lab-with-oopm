//write a c++ program to overload the * operator so that it can multiply two complex numbers.

#include<iostream>
using namespace std;

class complexno
{  
    private:
    	int r,i;
	  
	public:
		void get_elements();
	    complexno operator *(complexno c);
	    void display();
};
void complexno::get_elements()
{
    cout<<"\n Enter real part:";
    cin>>r;
    cout<<"\n Enter imaginary part:";
    cin>>i;
}

complexno complexno::operator *(complexno s) //(a+ib)*(c+id)=ac+i(ad)+i(bc)-bd
{
	int a,b,c,d;
	a=r;
	b=i;
	c=s.r;
	d=s.i;
	int v1,v2,v3,v4;
	v1=a*c;
	v2=-1*b*d;
	v3=a*d;
	v4=b*c;
	s.r=v1+v2;
	s.i=v3+v4;
	return s;
}
void complexno::display()
{ 
    if (i>0)
    {
    	cout<<"\n"<<r<<"+"<<i<<"i";
    }
	else if(i<0)
	{
		cout<<"\n"<<r<<""<<i<<"i";
	}
}
int main()
{
	complexno o1,o2,o3;;
	o1.get_elements();
	o2.get_elements();
	o3=o1*o2;
             cout<<"\n First number:";
	o1.display();
	cout<<"\n Second number:";
	o2.display();
	cout<<"\n Result:";
	o3.display();
}

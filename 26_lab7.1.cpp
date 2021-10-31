//Program to demonstrate working of friend function.

#include <iostream>
using namespace std;

class height{
    private:
        int meter;
               
    public:
        height() {
			meter = 0;
		}
	
        friend int addFive(height); //friend function
        
};

int addFive(height h) {

    h.meter =h.meter +5; //accessing private members
    return h.meter;
}

int main() {
    height h;
    cout << "meter = "<<addFive(h);

    return 0;
}

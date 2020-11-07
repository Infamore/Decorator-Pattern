#include "decorator.hpp"

#include <string>

#include <iomanip>

using namespace std;



class Trunc : public Decorator

{



private:



	Decorator* val;	

public:

	

 	Trunc(Decorator* base) : val(base) {} ;



	string stringify() { 

	cout << fixed;

	cout << setprecision(0);		

	val->setleft(new Op((int)val->getleft()->evaluate()));

	val->setright(new Op((int)val->getright()->evaluate()));



	return val->stringify();

	}



	Base* getleft() { };

	Base* getright() { };

	void setleft(Base* base) { };

	void setright(Base* base) { };

	double evaluate() { };	

};

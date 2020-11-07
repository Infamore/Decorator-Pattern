#include "math.h"

#include "base.hpp"

#include <string>



using namespace std;



class Ceil : public Decorator

{



private:

	Decorator* val;

public:



	Ceil(Decorator* dec) : val(dec) { };

	double evaluate() {

	     double value = ceil(val->evaluate());

		return value;

	}



	string stringify() {

	     return to_string(ceil(val->evaluate()));	

	}



	Base* getleft() {};

	Base* getright() {};

	void setleft(Base* base) {};

	void setright(Base* base) {};

};

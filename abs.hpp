#include <cmath>

#include "base.hpp"

#include <string>



using namespace std;



class Abs : public Decorator

{



private:

        Decorator* val;

public:

	Abs(Decorator* dec) : val(dec) {}; 

	

        double evaluate() {

             double value =  abs((int)val->evaluate());

		return value;

        }



        string stringify() {

             return to_string(abs(val->evaluate()));

        }



	Base* getleft() {};

	Base* getright() {};

	void setleft(Base* base) {};

        void setright(Base* base) {};



};


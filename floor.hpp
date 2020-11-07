#include "math.h"

#include "base.hpp"

#include <string>



using namespace std;



class Floor : public Base

{



private:

        Base* val;

public:

	Floor(Decorator* dec) : val(dec) {};



        double evaluate() {

             double value =  floor(val->evaluate());

		return value;

        }



        string stringify() {

             return to_string(floor(val->evaluate()));

        }





Base* getleft() {};

        Base* getright() {};

void setleft(Base* base) {};

void setright(Base* base) {};

};

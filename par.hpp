#include "decorator.hpp"

#include <string>

#include "base.hpp"

#include <iomanip>

#include <iostream>



using namespace std;



class Par : public Decorator

{



private:

        Decorator* val;

public:



	Par(Decorator* dec) : val(dec) {};	



       double evaluate() { };

	Base* getleft() { };

	Base* getright() { };



        string stringify() {

		cout << setprecision(0) << fixed; 



            string strin = "(";

             strin += val->stringify();

	     strin.push_back(')');

		return strin;

        }

	void setleft(Base* base) {  };

                void setright(Base* base) { };





};

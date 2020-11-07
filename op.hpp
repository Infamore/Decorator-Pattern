#include "decorator.hpp"

#include <string>

#include <sstream>

using namespace std;









class Op : public Decorator

{

        public:

        Op() { };

        Op(double op1) {operand = op1;}



        double evaluate() {return operand;}



        string stringify() {

        string value = to_string(operand);

        return value;

        }

        private:

        double operand;



	Base* getleft() { };

	Base* getright() { };

	void setleft(Base* base) { };

	void setright(Base* base) { };

	

};

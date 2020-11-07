#include "decorator.hpp"

#include <string>



using namespace std;



class Sub : public Decorator {

        public:



                Sub(Base* l1, Base* r1) {

                        left = l1;

                        right = r1;

                }

                double evaluate() {

                         double sum = left->evaluate() - right->evaluate();

                        return sum;

                }



                string stringify() {

                        string value = to_string((int)left->evaluate()) + " - " + to_string((int)right->evaluate());

                return value;



                }



		Base* getleft() {return left; }

		Base* getright() {return right; }



		void setleft(Base* l) { left = l; }

                void setright(Base* r) { right = r; }



                                        private:

                                                                Base* left;

                                                                Base* right;



                };

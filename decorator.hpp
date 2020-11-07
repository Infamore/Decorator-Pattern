

#ifndef __DECORATOR_HPP__

#define __DECORATOR_HPP__



#include "math.h"

#include <string>

#include "base.hpp"



class Decorator : public Base {

    public:

       



        /* Pure Virtual Functions */

        virtual double evaluate() = 0;

        virtual std::string stringify() = 0;

	virtual Base* getleft() = 0;

	virtual Base* getright() = 0;

	virtual void setleft(Base* base) = 0;

	virtual void setright(Base* base) = 0;



};

#endif

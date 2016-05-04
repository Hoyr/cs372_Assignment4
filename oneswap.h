//Dain Harmon
//CS372
//5-3-2016

#ifndef ONESWAP_H
#define ONESWAP_H

#include "stringprocessor.h"


class oneSwap : public StringProcessor
{
    public:
        /** Default constructor */
        oneSwap();
        /** Default destructor */
        virtual ~oneSwap();

        virtual string process(string & s) override;

    protected:

    private:
};

#endif // ONESWAP_H

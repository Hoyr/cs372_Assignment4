//Dain Harmon
//CS372
//5-3-2016

#ifndef ZEROSWAP_H
#define ZEROSWAP_H

#include "stringprocessor.h"


class zeroSwap : public StringProcessor
{
    public:
        /** Default constructor */
        zeroSwap();
        /** Default destructor */
        virtual ~zeroSwap();

        virtual string process(string & s) override;

    protected:

    private:
};

#endif // ZEROSWAP_H

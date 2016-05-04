#ifndef FIXNUMBERS_H
#define FIXNUMBERS_H

#include "stringprocessor.h"


class FixNumbers : public StringProcessor
{
    public:
        /** Default constructor */
        FixNumbers();
        /** Default destructor */
        virtual ~FixNumbers();
        virtual string process(string & s) override;

    protected:

    private:
};

#endif // FIXNUMBERS_H

//Dain Harmon
//CS372
//5-3-2016

#include "zeroswap.h"

zeroSwap::zeroSwap()
{
    //ctor
}

zeroSwap::~zeroSwap()
{
    //dtor
}

string zeroSwap::process(string & s)
{
    string out=s;
    for(int i=0; i<out.length(); i++)
        if (out[i]=='o')
            out[i]='0';
    if (next==nullptr)
        return out;
    else
        return next->process(out);
}

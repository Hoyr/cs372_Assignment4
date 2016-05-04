//Dain Harmon
//CS372
//5-3-2016

#include "stringprocessor.h"

StringProcessor::StringProcessor()
{
    next=nullptr;
}

StringProcessor::~StringProcessor()
{

}

StringProcessor::StringProcessor(const StringProcessor& other)
{
    this->next=other.next;
}

StringProcessor& StringProcessor::operator=(const StringProcessor& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    this->next=rhs.next;
    //assignment operator
    return *this;
}

string StringProcessor::process(string & s)
{
    if (next==nullptr)
        return s;
    else
        return next->process(s);
}

void StringProcessor::add(StringProcessor & SP)
{
    if(next==nullptr)
        next.reset(&SP);
    else
        next->add(SP);
}

//Dain Harmon
//CS372
//5-3-2016

#ifndef STRINGPROCESSOR_H
#define STRINGPROCESSOR_H

#include<string>
using std::string;
#include<memory>
using std::shared_ptr;



class StringProcessor
{
    public:
        /** Default constructor */
        StringProcessor();

        /** Default destructor */
        virtual ~StringProcessor();

        /** Copy constructor
         *  \param other Object to copy from
         */
        StringProcessor(const StringProcessor& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        StringProcessor& operator=(const StringProcessor& other);

        virtual string process(string & s);
        void add(StringProcessor & SP);

        shared_ptr<StringProcessor> next; //!< Member variable "next"

    protected:

    private:
};

#endif // STRINGPROCESSOR_H

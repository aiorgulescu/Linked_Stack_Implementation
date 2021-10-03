#ifndef POST_FIX_CALCULATOR_H
#define POST_FIX_CALCULATOR_H

#include "/Users/aiorgulescu/Desktop/CS302/homework2-aiorgulescu/LinkedStack/LinkedStack.h"

class PostFixCalculator
{

    public:
    PostFixCalculator() {}

    std::string toPostFix(std::string inFix);
    int calcPostFix(std::string &postFix);
    

    ~PostFixCalculator(){}

};





#endif
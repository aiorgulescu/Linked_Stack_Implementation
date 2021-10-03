#include <iostream>

#include "LinkedStack/LinkedStack.h"
#include "PostFixCalculator/PostFixCalculator.h"

int main()
{
    std::string inFix;
    std::string postFix;
    PostFixCalculator calc;
    int result;

    std::cout << "Enter an inFix Expression: ";
    std::cin >> inFix;

    postFix = calc.toPostFix(inFix);
    std::cout << "PostFix Converesion: " << postFix << std::endl;

    result = calc.calcPostFix(postFix);
    std::cout << "Result is: " << result << std::endl;

    return 0;
}
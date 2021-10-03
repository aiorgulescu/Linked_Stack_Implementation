#include "PostFixCalculator.h"


std::string PostFixCalculator::toPostFix(std::string inFix)
{
    LinkedStack<char> operatorStack;

    std::string postFix;

    for (int i = 0; i < inFix.length(); i++)
    {

        if ((int)inFix.at(i) >= 37 && (int)inFix.at(i) <= 47 )
        {
            if ((int)operatorStack.peek() == 37 || (int)operatorStack.peek() == 42 || (int)operatorStack.peek() == 47)
            {
                if ((int)inFix.at(i) == 43 || (int)inFix.at(i) == 45)
                {
                    while(((int)operatorStack.peek() == 37 || (int)operatorStack.peek() == 42 || (int)operatorStack.peek() == 47))
                    {
                    postFix += operatorStack.peek();
                    operatorStack.pop();
                    }
                    operatorStack.push(inFix.at(i));
                }
                else if ((int)inFix.at(i) != (int)operatorStack.peek())
                {
                    postFix += operatorStack.peek();
                    operatorStack.pop();
                    operatorStack.push(inFix.at(i));
                }
                else
                {
                    operatorStack.push(inFix.at(i));
                }
            }
            else
            {
                operatorStack.push(inFix.at(i));
            }
        }
        else
        {
            postFix += inFix.at(i);
        }
    }

    while(!operatorStack.isEmpty())
    {
        postFix += operatorStack.peek();
        operatorStack.pop();
    }


    return postFix;

}

int PostFixCalculator::calcPostFix(std::string &postFix)
{
    int val = 0;
    int a;
    int b;

    LinkedStack<int> operands;
    for (int i = 0; i < postFix.length(); i++)
    {
        if ((int)postFix.at(i) >= 48)
        {
            operands.push((int)postFix.at(i) - '0');
        }
        else
        {
            a = (int)operands.peek();
            operands.pop();
            b = (int)operands.peek();  
            operands.pop();

            if ((int)postFix.at(i) == 42)
            {
                val = b * a;
            }
            else if ((int)postFix.at(i) == 43)
            {
                val = b + a;
            }
            else if ((int)postFix.at(i) == 45)
            {
                val = b - a;
            }
            else if ((int)postFix.at(i) == 47)
            {
                val = b / a;
            }
            operands.push(val);

        }
    }
    return operands.peek();
}
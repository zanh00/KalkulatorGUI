#include "defines.h"

float calculateResult(std::vector<Element> *numbers, std::vector<char> *operators)
{
    std::vector<int> highestPriorityIndexes;
    int currentTopPriority;
    int currentHighestBranch;
    while (1)
    {
            currentTopPriority = 0;
            currentHighestBranch = 0;
            for(auto i = (*numbers).begin(); i != (*numbers).end(); i++ )
        {
            if((i->getPriority()) > currentTopPriority)
            {
                currentTopPriority = (*i).getPriority();
                currentHighestBranch = 0;                                    // if we move to higher priority branch count resets
            }
            if((i->getBranch()) > currentHighestBranch && i->getPriority() == currentTopPriority)
            {
                currentHighestBranch = i->getBranch();
            }
        }
        for (int i = 0; i < numbers->size(); i++ )                         // retrievs indexes of elements wiht highest priority and highest branch
        {
            if((numbers->at(i).getPriority() == currentTopPriority) && (numbers->at(i).getBranch() == currentHighestBranch))
            {
                highestPriorityIndexes.push_back(i); 
            }
        }

        /* Multiplication */
        if(highestPriorityIndexes.size() > 1)
        {
            for(auto i = highestPriorityIndexes.begin(); i != highestPriorityIndexes.end(); )
            {
                if(!operators->empty())
                {
                    if((i != (highestPriorityIndexes.end() - 1)) && (operators->at(*i) == '*'))
                    {
                        float tempResult = (numbers->at(*i).getNumber()) * (numbers->at((*i)+1).getNumber());
                        numbers->at(*i) = Element(tempResult, currentTopPriority, currentHighestBranch);
                        numbers->erase(numbers->begin() + (*i)+1);
                        operators->erase(operators->begin() + (*i));
                        i = highestPriorityIndexes.erase(i+1) - 1;
                    }
                    else
                    {
                        ++i;
                    }
                }
                else
                {
                    break;
                }
                
            }
        }

        /* Division */
        if(highestPriorityIndexes.size() > 1)
        {
            for(auto i = highestPriorityIndexes.begin(); i != highestPriorityIndexes.end(); )
            {
                if(!operators->empty())
                {
                    if((i != (highestPriorityIndexes.end() - 1)) && (operators->at(*i) == '/'))
                    {
                        float tempResult = (numbers->at(*i).getNumber()) / (numbers->at((*i)+1).getNumber());
                        numbers->at(*i) = Element(tempResult, currentTopPriority, currentHighestBranch);
                        numbers->erase(numbers->begin() + (*i)+1);
                        operators->erase(operators->begin() + (*i));
                        i = highestPriorityIndexes.erase(i+1) - 1;
                    }
                    else
                    {
                        ++i;
                    }
                }
                else
                {
                    break;
                }
                
            }
        }

        /* Addition */
        if(highestPriorityIndexes.size() > 1)
        {
            for(auto i = highestPriorityIndexes.begin(); i != highestPriorityIndexes.end(); )
            {
                if(!operators->empty())
                {
                    if((i != (highestPriorityIndexes.end() - 1)) && (operators->at(*i) == '+'))
                    {
                        float tempResult = (numbers->at(*i).getNumber()) + (numbers->at((*i)+1).getNumber());
                        numbers->at(*i) = Element(tempResult, currentTopPriority, currentHighestBranch);
                        numbers->erase(numbers->begin() + (*i)+1);
                        operators->erase(operators->begin() + (*i));
                        i = highestPriorityIndexes.erase(i+1) - 1;
                    }
                    else
                    {
                        ++i;
                    }
                }
                else
                {
                    break;
                }
                
            }
        }

        /* Substraction */
        if(highestPriorityIndexes.size() > 1)
        {
            for(auto i = highestPriorityIndexes.begin(); i != highestPriorityIndexes.end(); )
            {
                if(!operators->empty())
                {
                    if((i != (highestPriorityIndexes.end() - 1)) && (operators->at(*i) == '-'))
                    {
                        float tempResult = (numbers->at(*i).getNumber()) - (numbers->at((*i)+1).getNumber());
                        numbers->at(*i) = Element(tempResult, currentTopPriority, currentHighestBranch);
                        numbers->erase(numbers->begin() + (*i)+1);
                        operators->erase(operators->begin() + (*i));
                        i = highestPriorityIndexes.erase(i+1) - 1;
                    }
                    else
                    {
                        ++i;
                    }
                }
                else
                {
                    break;
                }
                
            }
        }
        /*
            once only one element remains, decrease its priority    
        */
        if(highestPriorityIndexes.size() == 1 && currentTopPriority > 0)
        {
            numbers->at(highestPriorityIndexes[0]).decreasePriority();
            while(1)
            {
                /*
                    if priority of next neighbour is the same than get his branch (check documentation for detalied explanation)
                    firstly checks boundarys
                */
                if(highestPriorityIndexes[0] < ((numbers->size()) - 1))
                {
                    if(numbers->at(highestPriorityIndexes[0]).getPriority() == numbers->at(highestPriorityIndexes[0] + 1).getPriority())
                    {
                        numbers->at(highestPriorityIndexes[0]).setBranch(numbers->at(highestPriorityIndexes[0] + 1).getBranch());
                    }
                    break;
                }
                /*
                    if priority of previous negihbor is the same than ...
                */
                else if(highestPriorityIndexes[0] > 0)
                {
                    if(numbers->at(highestPriorityIndexes[0]).getPriority() == numbers->at(highestPriorityIndexes[0] - 1).getPriority())
                    {
                        numbers->at(highestPriorityIndexes[0]).setBranch(numbers->at(highestPriorityIndexes[0] - 1).getBranch());
                    }
                    break;   
                }
                /*
                    if neither neighbours have the same priority but at least one of tham has lower priority than decrease priority once again
                */
                else if(numbers->at(highestPriorityIndexes[0] - 1).getPriority() < numbers->at(highestPriorityIndexes[0]).getPriority())
                {
                    numbers->at(highestPriorityIndexes[0]).decreasePriority();
                }
            }

            highestPriorityIndexes.clear();
        }
        else if(highestPriorityIndexes.size() == 1 && currentTopPriority == 0)
        {
            return numbers->at(highestPriorityIndexes[0]).getNumber();
        }
        /*
        else
        {
            // ERROR //
        }
        */
    }
    




    
}

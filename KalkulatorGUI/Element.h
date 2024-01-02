#pragma once
class Element
{
private: 
    float number;
    int priority;
    int branch;

public:
    Element(float number, int priority, int branch);
    ~Element();
    float getNumber();
    int getPriority();
    int getBranch();
    void decreasePriority();
    void setBranch(int branch);

};


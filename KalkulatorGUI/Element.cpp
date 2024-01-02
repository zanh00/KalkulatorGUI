#include "Element.h"

Element::Element(float number, int priority, int branch)
{
    this->number = number;
    this->priority = priority;
    this->branch = branch;
}

Element::~Element()
{
}

float Element::getNumber()
{
    return number;
}

int Element::getPriority()
{
    return priority;
}

int Element::getBranch()
{
    return branch;
}

void Element::decreasePriority()
{
    priority--;
}

void Element::setBranch(int branch)
{
    this->branch = branch;
}

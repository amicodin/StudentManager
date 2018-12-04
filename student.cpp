#include "student.h"

void student::setName( std::string first, std::string last)
{
  primo = first;
  ultimo = last;
}
std::string student::fullName()
{
  primo.append(" ");
  primo.append(ultimo);
  return primo;
}


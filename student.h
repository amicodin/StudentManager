#ifndef _STUDENT_H_
#define _STUDENT_H_ 
#include <string>
class student
{
  private:
          std::string primo;
          std::string ultimo;
  public:
  void setName(std::string first, std::string last);
  std::string fullName();
};











#endif

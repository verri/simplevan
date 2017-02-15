#include "student.h"

Student::Student()
{

}

bool Student::isValid() const
{
    return !name.isEmpty() &&
           !school.isEmpty() &&
           value >= 0.0f;
}

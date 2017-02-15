#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
public:
    Student();

    QString name;
    QString school;

    float value;
    bool active;

    bool isValid() const;
};

#endif // STUDENT_H

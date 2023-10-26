#include "pch.h"
#include"Worker.h"
void Worker::Set_salary(int salary) { salary_ = salary; }

void Worker::Get_salary() { cash_ = cash_ + salary_; }

int Worker::Getter_salary(){return salary_;}

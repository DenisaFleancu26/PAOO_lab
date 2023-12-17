
#pragma once

#include <memory>
#include "Semaphore.h"

class Student {
public:
    Student(std::unique_ptr<int> idStudent, std::shared_ptr<std::string> lesson, Semaphore& sem);
    void attendClass();

private:
    std::unique_ptr<int> idStudent;
    std::shared_ptr<std::string> lesson;
    Semaphore& semaphore;
};


#pragma once

#include <memory>
#include "Semaphore.h"

class Teacher {
public:
    Teacher(std::unique_ptr<int> idTeacher, std::shared_ptr<std::string> lesson, Semaphore& sem);
    void teach();

private:
    std::unique_ptr<int> idTeacher;
    std::shared_ptr<std::string> lesson;
    Semaphore& semaphore;
};


#include "Teacher.h"
#include <iostream>
#include <thread> 

Teacher::Teacher(std::unique_ptr<int> idTeacher,  std::shared_ptr<std::string> lesson,  Semaphore& sem)
    : idTeacher(std::move(idTeacher)), lesson(lesson),  semaphore(sem) {}

void Teacher::teach() {
    {
        semaphore.wait();
        std::cout << "Teacher wit ID: " << *idTeacher << " is teaching " << *lesson << "!" << std::endl;
        semaphore.signal();
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::cout << "The lesson is over." << std::endl;
        
    }
}


#include "Student.h"
#include <iostream>
#include <thread> 

Student::Student(std::unique_ptr<int> idStudent, std::shared_ptr<std::string> lesson, Semaphore& sem)
    : idStudent(std::move(idStudent)),  lesson(lesson), semaphore(sem) {}

void Student::attendClass() {
    {
        semaphore.wait();
        std::cout << "Student with ID: " << *idStudent << " is attending "<< *lesson << " class!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        semaphore.signal();
    }
}

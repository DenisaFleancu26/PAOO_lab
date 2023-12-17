
#include <iostream>
#include <memory>
#include <thread>
#include "Teacher.h"
#include "Student.h"
#include "Semaphore.h"

int main() {
   
    Semaphore semaphore(1);

    std::shared_ptr<std::string> lesson = std::make_shared<std::string>("Math");

    std::shared_ptr<Teacher> teacher = std::make_shared<Teacher>(std::unique_ptr<int>(new int(12)), lesson , semaphore);
    std::shared_ptr<Student> student1 = std::make_shared<Student>(std::unique_ptr<int>(new int(1)), lesson, semaphore);
    std::shared_ptr<Student> student2 = std::make_shared<Student>(std::unique_ptr<int>(new int(2)), lesson, semaphore);
    std::shared_ptr<Student> student3 = std::make_shared<Student>(std::unique_ptr<int>(new int(3)), lesson, semaphore);
    
    std::thread teacherThread(&Teacher::teach, teacher);
    std::thread studentThread1(&Student::attendClass, student1);
    std::thread studentThread2(&Student::attendClass, student2);
    std::thread studentThread3(&Student::attendClass, student3);

    teacherThread.join();
    studentThread1.join();
    studentThread2.join();
    studentThread3.join();

    std::cout << "Thread finished!" << std::endl;

    return 0;
}

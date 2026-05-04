#include <iostream>
#include "GradeBook.h"

int main() {
    GradeBook gb;

    gb.addGrade("HW1", 90);
    gb.addGrade("HW2", 80);
    gb.addGrade("Exam", 100);

    std::cout << "Num grades: " << gb.numGrades() << std::endl;
    std::cout << "Average: " << gb.getAverage() << std::endl;
    std::cout << "Highest: " << gb.getHighest() << std::endl;

    return 0;
}
#include "GradeBook.h"

GradeBook::GradeBook() {}

void GradeBook::addGrade(const std::string& assignment, double score) {
    grades_.push_back({assignment, score});
}

double GradeBook::getAverage() const {
    return 0.0;
}

double GradeBook::getHighest() const {
    return 0.0;
}

return grades_.size();
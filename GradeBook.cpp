#include "GradeBook.h"

GradeBook::GradeBook() {}

void GradeBook::addGrade(const std::string& assignment, double score) {
    grades_.push_back({assignment, score});
}

double GradeBook::getAverage() const {
    if (grades_.empty()) return 0.0;

    double sum = 0.0;
    for (const auto& g : grades_) {
        sum += g.second;
    }

    return sum / grades_.size();
}

double GradeBook::getHighest() const {
    if (grades_.empty()) return 0.0;

    double maxScore = grades_[0].second;
    for (const auto& g : grades_) {
        if (g.second > maxScore) {
            maxScore = g.second;
        }
    }

    return maxScore;
}

int GradeBook::numGrades() const {
    return grades_.size();
}
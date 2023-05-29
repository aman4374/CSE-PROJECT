#include <iostream>
#include <iomanip>

struct Student {
    std::string name;
    int rollNumber;
    int marks[5];
    std::string remarks;
};


std::string subjects[5] = { "Maths", "English", "Science", "Hindi", "Computer" };

int calculateTotalMarks(Student& student) {
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }
    return totalMarks;
}

double calculatePercentageMarks(Student& student) {
    int totalMarks = calculateTotalMarks(student);
    return static_cast<double>(totalMarks) / 5;
}

char calculateGrade(int marks) {
    if (marks >= 91 && marks <= 100) {
        return 'A';
    } else if (marks >= 81 && marks <= 90) {
        return 'B';
    } else if (marks >= 71 && marks <= 80) {
        return 'C';
    } else if (marks >= 61 && marks <= 70) {
        return 'D';
    } else if (marks >= 51 && marks <= 60) {
        return 'E';
    } else {
        return 'F';
    }
}

std::string getPerformanceRemarks(Student& student) {
    double PercentageMarks = calculatePercentageMarks(student);
    if (PercentageMarks >= 90) {
        return "Excellent performance!";
    } else if (PercentageMarks >= 80) {
        return "Very good performance!";
    } else if (PercentageMarks >= 70) {
        return "Good performance!";
    } else if (PercentageMarks >= 60) {
        return "Average performance.";
    } else if (PercentageMarks >= 50) {
        return "Below average performance.";
    } else {
        return "Poor performance.";
    }
}

void displayMarksheet(Student& student) {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "|           Student Marksheet             |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "| Name:        " << std::setw(21) << student.name << " |" << std::endl;
    std::cout << "| Roll Number: " << std::setw(21) << student.rollNumber << " |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "| Subject       |    Marks    |   Grade   |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    for (int i = 0; i < 5; i++) {
        char grade = calculateGrade(student.marks[i]);
        std::cout << "| " << std::setw(13) << subjects[i] << " |" << std::setw(6) << student.marks[i] << "      |   " << grade << "     |" << std::endl;
    }
    
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "| Total Marks:  " << std::setw(15) << calculateTotalMarks(student) << " |" << std::endl;
    std::cout << "| Percentage Marks: " << std::setw(14) << std::fixed << std::setprecision(2) << calculatePercentageMarks(student) << " |" << std::endl;
    std::cout << "| Remarks: " << std::setw(28) << student.remarks << " |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

int main() {
    Student student;
    
    std::cout << "Enter student name: ";
    std::getline(std::cin, student.name);
    
    std::cout << "Enter roll number: ";
    std::cin >> student.rollNumber;
    
    std::cout << "Enter marks for 5 subjects:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << subjects[i] << ": ";
        std::cin >> student.marks[i];
    }
    
    std::cin.ignore(); 
    
    std::cout << "Enter remarks: ";
    std::getline(std::cin, student.remarks);
    
    displayMarksheet(student);
    
    return 0;
}

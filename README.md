# CSE-PROJECT
Student Grade Management System

## Code Structure

The code consists of the following components:

### Struct Definition

  -`Student`: A structure that represents a student and contains the following fields:
  - `name`: A string to store the student's name.
  - `rollNumber`: An integer to store the student's roll number.
  - `marks`: An array of integers to store the marks in five subjects.
  - `remarks`: A string to store the performance remarks for the student.

### Functions

- `calculateTotalMarks`: Calculates the total marks for a student based on the marks in each subject.
- `calculatePercentageMarks`: Calculates the percentage marks for a student based on the total marks.
- `calculateGrade`: Determines the grade for a given marks value.
- `getPerformanceRemarks`: Determines the performance remarks for a student based on the percentage marks.
- `displayMarksheet`: Displays the marksheet for a student, including all the details and calculated values.

### Main Function

The `main` function serves as the entry point for the program. It performs the following steps:

1. Declares a `Student` object to hold the student's information.

2. Prompts the user to enter the student's name and roll number.

3. Asks the user to enter the marks for the five subjects.

4. Clears the input buffer.

5. Prompts the user to enter the remarks for the student.

6. Calls the `displayMarksheet` function with the `student` object as an argument to display the marksheet.

7. Returns 0 to indicate successful program execution.

## Usage and Input

1. When prompted, enter the student's name.

2. When prompted, enter the student's roll number.

3. Enter the marks for each subject as requested.

4. When prompted, enter the remarks for the student.

5. The program will then display the marksheet, showing the student's details, marks in each subject, total marks, percentage marks, and performance remarks.

## Output

The program generates a marksheet with the following information:

- Student's name
- Roll number
- Marks in each subject
- Total marks
- Percentage marks
- Performance remarks

The marksheet is displayed in a tabular format, with appropriate formatting for alignment.

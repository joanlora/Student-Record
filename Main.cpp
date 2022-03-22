#include<iostream>
using namespace std;

struct StudentRecord
{
	double Quiz1;
	double Quiz2;
	double QuizGrade;
	double Midterm, MidtermGrade;
	double FinalExam, FinalExamGrade;
	double FinalGrade;
	double QuizPercentage = 25;
	double MidtermPercentage = 25;
	double FinalExamPercentage = 50;

};

void LetterGrade(StudentRecord& Grades);
void input(StudentRecord& Grades);
void output(StudentRecord& Grades);

int main()
{
	StudentRecord grades;
	
	input(grades);
	output(grades);
	LetterGrade(grades);

	return 0;
}



void input(StudentRecord& Grades)
{
	cout << "Enter your first quiz grade" << endl;
	cin >> Grades.Quiz1;

	cout << "Enter your second quiz grade" << endl;
	cin >> Grades.Quiz2;

	cout << "Enter your Midterm grade" << endl;

	cin >> Grades.Midterm;

	cout << "Enter your Final Exam grade" << endl;

	cin >> Grades.FinalExam;

}
void output(StudentRecord& Grades)
{
	Grades.QuizGrade = (((Grades.Quiz1 + Grades.Quiz2) * ( Grades.QuizPercentage / 20)));

	Grades.FinalExamGrade = (Grades.FinalExam * Grades.FinalExamPercentage / 100);

	Grades.MidtermGrade = (Grades.Midterm * Grades.MidtermPercentage / 100);

	Grades.FinalGrade = Grades.MidtermGrade + Grades.FinalExamGrade + Grades.QuizGrade ;

	cout << "Your Average: " << Grades.FinalGrade << endl;
	cout << "Your Letter Grade: " << endl;

	LetterGrade;
}

	void LetterGrade(StudentRecord& Grades)
	{
		if (Grades.FinalGrade <= 60)
		{
			cout << "F";
		}

		else if (Grades.FinalGrade >= 61 && Grades.FinalGrade <= 69)
		{
			cout << "D";
		}
		else if (Grades.FinalGrade >= 70 && Grades.FinalGrade <= 79)
		{
			cout << "C";
		}
		else if (Grades.FinalGrade >= 80 && Grades.FinalGrade <= 89)
		{
			cout << "B";
		}
		else if (Grades.FinalGrade >= 90)
		{
			cout << "A";
		}
		cout << endl;

	}

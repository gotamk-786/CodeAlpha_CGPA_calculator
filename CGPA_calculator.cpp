#include <iostream>
#include <vector>
using namespace std;

void GPA_calculate()
{
    int No_of_subj;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "|                            GPA  CALCULATOR                          |" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Enter number of subjects:" << endl;
    cin >> No_of_subj;

    vector<double> credits(No_of_subj);
    vector<double> points(No_of_subj);
    double sum = 0;
    double total_credits = 0;

    // input

    for (int i = 0; i < No_of_subj; i++)
    {
        cout << "Enter credits hours of subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter the points of subject " << i + 1 << ": ";
        cin >> points[i];
        cout << "---------------------------------------------------------------------" << endl;
    }

    // count total points
    for (int i = 0; i < No_of_subj; i++)
    {
        sum += credits[i] * points[i];
        total_credits += credits[i];
    }
    // calculate Gpa

    cout << "\n\n";
    cout << "Total Points: " << sum << endl;
    cout << "Total Credit Hours: " << total_credits << endl;
    cout << "GPA: " << sum / total_credits << endl;

    cout << "\n Press any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}

void CGPA_calculate()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "|                           CGPA  CALCULATOR                          |" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    int no_of_sems;
    cout << "Enter number of semesters: " << endl;
    cin >> no_of_sems;

    vector<double> semester(no_of_sems);
    double semtotal = 0;

    for (int i = 0; i < no_of_sems; i++)
    {
        cout << "Enter GPA for semester #" << i + 1 << ": ";
        cin >> semester[i];
    }

    for (int i = 0; i < no_of_sems; i++)
    {
        semtotal += semester[i];
    }

    cout << "Your CGPA(SGPA): " << semtotal / no_of_sems << endl;
    cout << "\n Press any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}

void instruction()
{
    cout << "\n\n";

    cout << "How to calculate GPA and CGPA:" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "GPA = sum of (credit_hours * grade_points) / total number of credit hours" << endl;
    cout << "CGPA = sum of GPA / number of semesters" << endl;
    cout << "\n\n";
    cout << "Grade-point Table:" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "\t Grade \t\t 4.0 total scale" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "\t 90 marks A+ \t\t  4.0 points" << endl;
    cout << "\t 86 marks A \t\t  4.0 points" << endl;
    cout << "\t 82 marks A- \t\t  3.66 points" << endl;
    cout << "\t 78 marks B+ \t\t  3.33 points" << endl;
    cout << "\t 74 marks B \t\t  3.0 points" << endl;
    cout << "\t 70 marks B- \t\t  2.66 points" << endl;
    cout << "\t 66 marks C+ \t\t  2.33 points" << endl;
    cout << "\t 62 marks C \t\t  2.0 points" << endl;
    cout << "\t 58 marks C- \t\t  1.67 points" << endl;
    cout << "\t 54 marks D+ \t\t  1.33 points" << endl;
    cout << "\t 50 marks D- \t\t  1.0 points" << endl;
    cout << "\t <50 marks F \t\t  0.0 points" << endl;

    cout << "Press Enter to go back to the main menu..." << endl;

    cin.ignore();
    cin.get();
}

int main()
{
    do
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "|                            GPA  CALCULATOR                          |" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        cout << "1. Calculate GPA" << endl;
        cout << "2. Calculate CGPA" << endl;
        cout << "3. How to calculate GPA?" << endl;
        cout << "4. Quit" << endl;
        cout << "Select any option: ";
        char key;
        cin >> key;

        switch (key)
        {
        case '1':
            GPA_calculate();
            break;
        case '2':
            CGPA_calculate();
            break;
        case '3':
            instruction();
            break;
        case '4':
            return 0; // Exit the program
        default:
            cout << "Enter valid input" << endl;
            break;
        }

    } while (true);

    return 0;
}

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
int main()
{
    cout << "CGPA CALCULATOR" << endl;
    cout << "This is a C++ programme to calculate marks of a single subject." << endl;
    bool q;
    cout << "Does your Subject includes lab Marks? If Yes Press '1' Otherwise Press '0'." << endl;
    cin >> q;
    if (q == 1)
    {

        float lab_marks, total_lab_marks, total_mid_marks;
        float theory_marks, total_theory_marks;
        float pmarks = 0, sum = 0;
        cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
        cout << "Fill all of them considering your 'Mid term Exams' for a single subject.\nThis programme will calculate marks for 'Lab Subjects' only." << endl;
        cout << endl;
        cout << "Enter Total lab marks:" << endl;
        cin >> total_lab_marks;

        cout << "Enter Your Obtained lab marks:" << endl;
        cin >> lab_marks;

        cout << "Enter Total Theory marks:" << endl;
        cin >> total_theory_marks;

        cout << "Enter Your Obtained Theory marks:" << endl;
        cin >> theory_marks;

        cout << endl;

        pmarks = (((theory_marks / total_theory_marks) * 67) + ((lab_marks / total_lab_marks) * 33));

        cout << "Your Obtained marks in mid term is:" << endl;
        total_mid_marks = (pmarks / 100) * 25;
        cout << setprecision(3) << total_mid_marks << " out of 25 marks --- out of Total 100 subject marks.\nThis does not include Assignment, Quiz and Finals marks. " << endl;
        sum = total_mid_marks;

        cout << "=============================================================================" << endl;

        cout << "If you want to calculate your Final term marks Press '1' Otherwise Press '0' ." << endl;
        bool num;
        cin >> num;

        if (num == 1)

        {
            float lab_marks1, total_lab_marks1, total_finals_marks;
            float theory_marks1, total_theory_marks1;
            float pmarks1 = 0;

            cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
            cout << "Fill all of them considering your 'Final term Exams' for a single subject." << endl;
            cout << endl;

            cout << "Enter Total lab marks:" << endl;
            cin >> total_lab_marks1;

            cout << "Enter Your Obtained lab marks:" << endl;
            cin >> lab_marks1;

            cout << "Enter Total Theory marks:" << endl;
            cin >> total_theory_marks1;

            cout << "Enter Your Obtained Theory marks:" << endl;
            cin >> theory_marks1;

            cout << endl;

            pmarks1 = (((theory_marks1 / total_theory_marks1) * 67) + ((lab_marks1 / total_lab_marks1) * 33));

            cout << "Your Obtained marks in Finals is:" << endl;

            total_finals_marks = (pmarks1 / 100) * 50;

            cout << setprecision(3) << total_finals_marks << " out of 50 marks --- out of 100 Total subject marks." << endl;
            sum += total_finals_marks;

            cout << "=============================================================================" << endl;

            cout << "Till now you have obtained " << setprecision(3) << sum << " out of 75 marks --- out of Total 100 subject marks.\nThis does not include Quiz and Assignment Marks." << endl;
            cout << endl;

            cout << "Do you want to add Assignment and Quiz marks? IF YES press '1' otherwise press '0'." << endl;
            bool no;
            cin >> no;
            if (no == 1)
            {
                cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
                cout << "Fill them with your 'Assignment' and 'Quiz' marks" << endl;
                cout << endl;

                float assign_marks, total_assign_marks;
                float quiz_marks, total_quiz_marks;
                float pmarks2 = 0, total_qa_marks = 0;

                cout << "Enter your Total marks of all 4 quizzes." << endl;
                cin >> total_quiz_marks;

                cout << "Enter your Obtained marks of all 4 quizzes." << endl;
                cin >> quiz_marks;

                cout << "Enter your Total marks of all 4 assignments." << endl;
                cin >> total_assign_marks;

                cout << "Enter your Obtained marks of all 4 assignments." << endl;
                cin >> assign_marks;

                cout << endl;

                pmarks2 = (((quiz_marks / total_quiz_marks) * 15) + ((assign_marks / total_assign_marks) * 10));

                total_qa_marks = (pmarks2 / 25) * 25;

                cout << "Your Obtained marks in Quizzes and Assignments is:" << endl;
                cout << setprecision(3) << total_qa_marks << " out of 25 marks --- out of Total 100 subject marks." << endl;
                sum += total_qa_marks;

                cout << "=============================================================================" << endl;
                cout << "So Finally you have obtained " << setprecision(3) << sum << " marks out of Total 100 subject marks." << endl;

                cout << endl;
                cout << "There is one more thing for You. (*.*)  " << endl;
                cout << endl;

                if (sum >= 85 && sum <= 100)
                    cout << "Your Grade is 'A' and Your Grade points is 4.0" << endl;

                else if (sum >= 80 && sum <= 84)
                    cout << "Your Grade is 'A-' and Your Grade point is 3.66" << endl;

                else if (sum >= 75 && sum <= 79)
                    cout << "Your Grade is 'B+' and Your Grade point is 3.33" << endl;

                else if (sum >= 71 && sum <= 74)
                    cout << "Your Grade is 'B' and Your Grade point is 3.00" << endl;

                else if (sum >= 68 && sum <= 70)
                    cout << "Your Grade is 'B-' and Your Grade point is 2.66" << endl;

                else if (sum >= 64 && sum <= 67)
                    cout << "Your Grade is 'C+' and Your Grade point is 2.33" << endl;

                else if (sum >= 61 && sum <= 63)
                    cout << "Your Grade is 'C' and Your Grade point is 2.00" << endl;

                else if (sum >= 58 && sum <= 60)
                    cout << "Your Grade is 'C-' and Your Grade point is 1.66" << endl;

                else if (sum >= 54 && sum <= 57)
                    cout << "Your Grade is 'D+' and Your Grade point is 1.30" << endl;

                else if (sum >= 50 && sum <= 53)
                    cout << "Your Grade is 'D' and Your Grade point is 1.00" << endl;

                else if (sum < 50)
                    cout << "Your Grade is 'F' and Your Grade point is 0.00" << endl;
            }
            else if (no == 0)
                cout << "OK, You are now good to go." << endl;
        }
        else if (num == 0)
            cout << "OK, You are now good to go." << endl;
    }
    else if (q == 0)
    {

        float total_mid_marks;
        float theory_marks, total_theory_marks;
        float pmarks = 0, sum = 0;
        cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
        cout << "Fill all of them considering your 'Mid term Exams' for a single subject.\nThis programme will calculate marks for 'NON-LAB' Subjects  only." << endl;
        cout << endl;

        cout << "Enter Total Theory marks:" << endl;
        cin >> total_theory_marks;

        cout << "Enter Your Obtained Theory marks:" <<endl;
        cin >> theory_marks;

        cout << endl;

        pmarks = ((theory_marks / total_theory_marks) * 100);

        cout << "Your Obtained marks in mid term is:" << endl;
        total_mid_marks = (pmarks / 100) * 25;
        cout << setprecision(3) << total_mid_marks << " out of 25 marks --- out of Total 100 subject marks.\nThis does not include Assignment, Quiz and Finals marks. " << endl;
        sum = total_mid_marks;

        cout << "=============================================================================" << endl;

        cout << "If you want to calculate your Final term marks Press '1' Otherwise Press '0' ." << endl;
        bool num;
        cin >> num;

        if (num == 1)

        {
            float total_finals_marks;
            float theory_marks1, total_theory_marks1;
            float pmarks1 = 0;

            cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
            cout << "Fill all of them considering your 'Final term Exams' for a single subject." << endl;
            cout << endl;

            cout << "Enter Total Theory marks:" << endl;
            cin >> total_theory_marks1;

            cout << "Enter Your Obtained Theory marks:" << endl;
            cin >> theory_marks1;

            cout << endl;

            pmarks1 = ((theory_marks1 / total_theory_marks1) * 100);

            cout << "Your Obtained marks in Finals is:" << endl;

            total_finals_marks = (pmarks1 / 100) * 50;

            cout << setprecision(3) << total_finals_marks << " out of 50 marks --- out of  Total 100 subject marks." << endl;
            sum += total_finals_marks;

            cout << "=============================================================================" << endl;

            cout << "Till now you have obtained " << setprecision(3) << sum << " out of 75 marks --- out of Total 100 subject marks.\nThis does not include Quiz and Assignment Marks." << endl;
            cout << endl;

            cout << "Do you want to add Assignment and Quiz marks? IF YES press '1' otherwise press '0'." << endl;
            bool no;
            cin >> no;
            if (no == 1)
            {
                cout << setw(50) << "=============================Disclaimer!!!===================================" << endl;
                cout << "Fill them with your 'Assignment' and 'Quiz' marks" << endl;
                cout << endl;

                float assign_marks, total_assign_marks;
                float quiz_marks, total_quiz_marks;
                float pmarks2 = 0, total_qa_marks = 0;

                cout << "Enter your Total marks of all 4 quizzes." << endl;
                cin >> total_quiz_marks;

                cout << "Enter your Obtained marks of all 4 quizzes." << endl;
                cin >> quiz_marks;

                cout << "Enter your Total marks of all 4 assignments." << endl;
                cin >> total_assign_marks;

                cout << "Enter your Obtained marks of all 4 assignments." << endl;
                cin >> assign_marks;

                cout << endl;

                pmarks2 = (((quiz_marks / total_quiz_marks) * 15) + ((assign_marks / total_assign_marks) * 10));

                total_qa_marks = (pmarks2 / 25) * 25;

                cout << "Your Obtained marks in Quizzes and Assignments is:" << endl;
                cout << setprecision(3) << total_qa_marks << " out of 25 marks --- out of Total 100 subject marks." << endl;
                sum += total_qa_marks;

                cout << "=============================================================================" << endl;
                cout << "So Finally you have obtained " << setprecision(3) << sum << " marks out of Total 100 subject marks." << endl;
                cout << endl;
                cout << "There is one more thing for You. (*.*) " << endl;
                cout << endl;

                if (sum >= 85 && sum <= 100)
                    cout << "Your Grade is 'A' and Your Grade points is 4.0" << endl;

                else if (sum >= 80 && sum <= 84)
                    cout << "Your Grade is 'A-' and Your Grade point is 3.66" << endl;

                else if (sum >= 75 && sum <= 79)
                    cout << "Your Grade is 'B+' and Your Grade point is 3.33" << endl;

                else if (sum >= 71 && sum <= 74)
                    cout << "Your Grade is 'B' and Your Grade point is 3.00" << endl;

                else if (sum >= 68 && sum <= 70)
                    cout << "Your Grade is 'B-' and Your Grade point is 2.66" << endl;

                else if (sum >= 64 && sum <= 67)
                    cout << "Your Grade is 'C+' and Your Grade point is 2.33" << endl;

                else if (sum >= 61 && sum <= 63)
                    cout << "Your Grade is 'C' and Your Grade point is 2.00" << endl;

                else if (sum >= 58 && sum <= 60)
                    cout << "Your Grade is 'C-' and Your Grade point is 1.66" << endl;

                else if (sum >= 54 && sum <= 57)
                    cout << "Your Grade is 'D+' and Your Grade point is 1.30" << endl;

                else if (sum >= 50 && sum <= 53)
                    cout << "Your Grade is 'D' and Your Grade point is 1.00" << endl;

                else if (sum < 50)
                    cout << "Your Grade is 'F' and Your Grade point is 0.00" << endl;
            }
            else if (no == 0)
                cout << "OK, You are now good to go." << endl;
        }
        else if (num == 0)
            cout << "OK, You are now good to go." << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int finalResult = 0;
    char playAgain;
    int playQuiz(void);
    play:
    finalResult = playQuiz();
    cout << "Your Score is : " << finalResult << endl;

    if(finalResult >= 6)
    {
        cout << "Quiz Passed, Congratulations!!!!" << endl;
        cout << "Do you want to play this Quiz Again? Press Y or N..." << endl;
        cin >> playAgain;
        if(playAgain == 'y' || playAgain == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "Thank You For Taking this Quiz ";
        }
    }
    else
    {
        cout << "Quiz failed, Try Again!!!" << endl;
        cout << "Do you want to play this Quiz Again? Press Y or N..." << endl;
        cin >> playAgain;
        if(playAgain == 'y' || playAgain == 'Y')
        {
            playQuiz();
        }
        else
        {
            cout << "Thank You For Taking this Quiz ";
        }
    }
}

int playQuiz()
{
    char c;
    char option;
    int score = 0;
    playInsideFunction:
    cout << "----------Welcome to Quiz Game----------" << endl;
    cout << "----------Please Follow the Instructions---------" << endl;
    cout << "Step 1 : Quiz Contains total 10 Questions" << endl;
    cout << "Step 2 : You Will be Given 1 Marks For Each Correct Answer" << endl;
    cout << "Step 3 : No Negative Marking" << endl;
    cout << "Step 4 : Please Press s to Start the Quiz" << endl;
    cout << "Step 5 : Select Option a,b,c,d " << endl;
    cout << "Step 6 : If You Score Greater than Equal to 6, You Will Pass the Quiz" << endl;

    cin >> c;
    if (c == 's' || c == 'S')
    {
        cout << "Q1. What is the capital of India?" << endl;
        cout << "A) Mumbai B) New Delhi C) Chennai D) Kolkata" << endl;
        cin >> option;

        if (option == 'b' || option == 'B')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }
        cout << "Q2. Which planet is known as the Red Planet??" << endl;
        cout << "A) Earth B) Venus C) Mars D) Jupiter" << endl;
        cin >> option;

        if (option == 'c' || option == 'C')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }
        cout << "Q3. Who is known as the Father of the Nation in India???" << endl;
        cout << "A) J.Nehru B) S.C.Bose C) Bhagat Singh D) M.Gandhi" << endl;
        cin >> option;

        if (option == 'd' || option == 'D')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }
        cout << "Q4. Which is the largest ocean in the world?" << endl;
        cout << "A) Indian Ocean B) Atlantic Ocean C) Arctic Ocean D) Pacific Ocean" << endl;
        cin >> option;

        if (option == 'D' || option == 'd')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q5. What is the national animal of India?" << endl;
        cout << "A) Lion B) Tiger C) Elephant D) Leopard" << endl;
        cin >> option;

        if (option == 'B' || option == 'b')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q6. How many continents are there in the world?" << endl;
        cout << "A) 5 B) 6 C) 7 D) 8" << endl;
        cin >> option;

        if (option == 'C' || option == 'c')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q7. Which gas do plants absorb from the atmosphere?" << endl;
        cout << "A) Oxygen B) Nitrogen C) Carbon Dioxide D) Hydrogen" << endl;
        cin >> option;

        if (option == 'C' || option == 'c')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q8. Which country is called the Land of the Rising Sun?" << endl;
        cout << "A) China B) Thailand C) Japan D) South Korea" << endl;
        cin >> option;

        if (option == 'C' || option == 'c')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q9. What is the boiling point of water at sea level?" << endl;
        cout << "A) 90°C B) 95°C C) 100°C D) 110°C" << endl;
        cin >> option;

        if (option == 'C' || option == 'c')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }

        cout << "Q10. Which is the smallest prime number?" << endl;
        cout << "A) 0 B) 1 C) 2 D) 3" << endl;
        cin >> option;

        if (option == 'C' || option == 'c')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }
    }
    else
    {
        cout << "Wrong Answer, Please Enter s" << endl;
        goto playInsideFunction;
    }
    return score;
}
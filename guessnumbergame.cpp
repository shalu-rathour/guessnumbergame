#include <iostream>

using namespace std;
int main()
{

    int number = 50;
    int guessedNumber;
    bool isguessed = true;
    do
    {
        cout << "Enter a guess num :";
        cin >> guessedNumber;

        if (number > guessedNumber)
        {
            cout << "Actual number is greater than" << guessedNumber << endl;
            isguessed = false;
        }
        else if (number < guessedNumber)
        {
            cout << "Actual number is less than" << guessedNumber << endl;
            isguessed = false;
        }
        else if (number == guessedNumber)

        {
            cout << "You won" << endl;
            isguessed = false;
        }
        else
        {
            cout << "Error" << endl;
        }
    } while (isguessed == false);
}

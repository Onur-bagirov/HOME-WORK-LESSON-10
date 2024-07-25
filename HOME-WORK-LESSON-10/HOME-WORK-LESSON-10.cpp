#include <iostream>

using namespace std;

int main()
{
    cout << "=======================================================";//{1}
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    unsigned int row;
    unsigned int col;

    cout << "\tEnter row :";
    cin >> row;
    cout << "\tEnter col :";
    cin >> col;

    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "=======================================================";//[2]
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    unsigned int row_;
    unsigned int col_;

    cout << "\tEnter row :";
    cin >> row_;
    cout << "\tEnter col :";
    cin >> col_;


    for (unsigned int h = 0; h < row_; h++)
    {
        for (unsigned int b = 0; b < col_; b++)
        {
            if (h == 0 || h == row_ - 1 || b == 0 || b == col_ - 1)
            {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "=======================================================";//[3]
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    unsigned int row_3;
    unsigned int col_3;

    cout << "\tEnter row: ";
    cin >> row_3;
    cout << "\tEnter column: ";
    cin >> col_3;
    for (unsigned int y = 0; y < row_3; ++y) {
        if (y == 0 || y == row_3 - 1 || y == row_3 / 2) {
            for (unsigned int p = 0; p < col_3; ++p) {
                cout << "*";
            }
        }
        else {
            for (unsigned int p = 0; p < col_3; ++p) {
                if (p == 0 || p == col_3 - 1 || p == col_3 / 2) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }
    cout << "\n\n\n";
    cout << "=======================================================";//[4]
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    unsigned int number_6;
    unsigned int reserved_number = 0;

    cout << "\tEnter number :";
    cin >> number_6;

    for (unsigned int temp = number_6; temp != 0; temp /= 10) {
        reserved_number = reserved_number * 10 + temp % 10;
    }

    if (reserved_number == number_6) {
        cout << "\tThis number is a palindrome.\n";
    }
    else {
        cout << "\tThis number is not a palindrome.\n";
    }
    cout << "\n\n\n";
    cout << "=======================================================";//[5]
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

        unsigned int day_;
        unsigned int month_;
        unsigned int year_;
        int week = 1;

        cout << "\tEnter day: ";
        cin >> day_;
        cout << "\tEnter month: ";
        cin >> month_;
        cout << "\tEnter year: ";
        cin >> year_;

        if ((day_ > 1 || day_ == 1) && (month_ > 1 || month_ == 1) && (year_ > 1 || year_ == 1)) {
            unsigned int _day = 1;
            unsigned int _month = 1;
            unsigned int _year = 1;

            do {
                _day++;

                if ((_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12) && _day > 31) 
                {
                    _day = 1;
                    _month++;
                }
                else if ((_month == 4 || _month == 6 || _month == 9 || _month == 11) && _day > 30) 
                {
                    _day = 1;
                    _month++;
                }
                else if (_month == 2) 
                {
                    bool one_year = (_year % 4 == 0 && (_year % 100 != 0 || _year % 400 == 0));
                    if (one_year && _day > 29) {
                        _day = 1;
                        _month++;
                    }
                    else if (one_year && _day > 28) {
                        _day = 1;
                        _month++;
                    }
                }

                if (_month > 12) 
                {
                    _month = 1;
                    _year++;
                }
                week = (week + 1) % 7;

            } while ((_day != day_ && _month != month_ && _year != year_));
        }
        switch (week) 
        {
        case 0:
            cout << "\tDay - Sunday\n";
            break;
        case 1:
            cout << "\tDay - Monday\n";
            break;
        case 2:
            cout << "\tDay - Tuesday\n";
            break;
        case 3:
            cout << "\tDay - Wednesday\n";
            break;
        case 4:
            cout << "\tDay - Thursday\n";
            break;
        case 5:
            cout << "\tDay - Friday\n";
            break;
        case 6:
            cout << "\tDay - Saturday\n";
            break;
        default:
            cout << "\tFalse0 day\n";
        }
        cout << "\n\n\n";
        cout << "=======================================================";
}
/*
Simple calculator for simple maths
*/

#include<iostream>
#include<chrono>
#include<thread>
#include<cmath>

using namespace std;

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;

    int option2 = 0;
    double a, b, c, d, x;

    do {
        int option;

        if(option2 == 1)
        {
            cout << "a = " << x << "\n\n";
        }

        cout << "1. Addition\t";
        cout << "2. Subtraction\t";
        cout << "3. Multiplication\n";
        cout << "4. Division\t";
        cout << "5. Power\t";

        if(option2 != 1)
        { cout << "6. Square root"; }
        else cout << "6. Square root of " << x;

        cout << "\n===== AREA =====\n";
        cout << "7. Triangle\t";
        cout << "8. Square\t";
        cout << "9. Rectangle\n";
        cout << "10. Circle\t";
        cout << "11. Trapezoid\t";
        cout << "12. Parallelogram/Rhombus\t";

        cout << "\n===== PERIMETER =====\n";
        cout << "13. Triangle\t";
        cout << "14. Square\t";
        cout << "15. Rectangle\n";
        cout << "16. Circle\t";
        cout << "17. Trapezoid\t";
        cout << "18. Parallelogram\n";
        cout << "19. Rhombus\n";


        cout << "\n\nChoose: ";
        cin >> option;

            while (option < 0 || option > 19)
            {
                cout << "Oops... Please enter a value from 1 to 19!" << endl;
                cout << "Choice: ";
                cin >> option;
            }

        switch(option)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 9:
            case 12:
                if(option == 1) cout << "\na + b = x\n\n";
                if(option == 2) cout << "\na - b = x\n\n";
                if(option == 3 || option == 9) cout << "\na * b = x\n\n";
                if(option == 4) cout << "\na / b = x\n\n";
                if(option == 12) cout << "\na * h = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                    if (option != 12)
                    cout << "b: ";
                    else cout << "h: ";

                    cin >> b;


                if(option == 1) {
                x = a + b;
                cout << endl << a << " + " << b << " = " << x << endl;
                }
                if(option == 2) {
                x = a - b;
                cout << endl << a << " - " << b << " = " << x << endl;
                }
                if(option == 3 || option == 9 || option == 12) {
                x = a * b;
                cout << endl << a << " * " << b << " = " << x << endl;
                }
                if(option == 4) {
                x = a / b;
                cout << endl << a << " / " << b << " = " << x << endl;
                }

                break;

             case 5:
                cout << "\na ^ b = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                    cout << "b: ";
                    cin >> b;

                x = pow(a, b);

                cout << endl << a << " ^ " << b << " = " << x << endl;
                break;

             case 6:
                cout << "\na = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                x = sqrt(a);

                cout << endl << a << " = " << x << endl;
                break;

             case 7:
                cout << "\n1/2 * a * h = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                    cout << "h: ";
                    cin >> b;

                x = 0.5 * a * b;

                cout << endl << "1/2 * " << a << " * " << b << " = " << x << endl;
                break;

            case 8:
                cout << "\na ^ 2 = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                x = a * a;

                cout << endl << a << " ^ 2 = " << x << endl;
                break;

            case 10:
                cout << "\n3.14159 * r ^ 2 = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "r: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "r = " << a << endl;
                }

                x = 3.14159 * pow(a, 2);

                cout << endl << "3.14159 * " << a << " ^ 2 = " << x << endl;
                break;

            case 11:
                cout << "\n(a + b) / 2 * h = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                cout << "b: ";
                cin >> b;
                cout << "h: ";
                cin >> c;

                x = (a + b) / 2 * c;

                cout << endl << "(" << a << " + " << b << ") / 2 * " << c << " = " << x << endl;
                break;

            case 13:
                cout << "\na + b + c = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                cout << "b: ";
                cin >> b;
                cout << "c: ";
                cin >> c;

                x = a + b + c;

                cout << endl << a << " + " << b << " + " << c << " = " << x << endl;
                break;

            case 14:
            case 19:
                cout << "\n4 * a = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                x = 4 * a;

                cout << endl << "4 * " << a << " = " << x << endl;
                break;

            case 15:
            case 18:
                cout << "\n2 * a + 2 * b = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a: ";
                    cin >> a;
                }

                else if(option2 == 1)
                {
                    a = x;
                    cout << "a = " << a << endl;
                }

                cout << "b: ";
                cin >> b;

                x = 2 * a + 2 * b;

                cout << endl << "2 * " << a << " + 2 * " << b << " = " << x << endl;
                break;

            case 17:
                cout << "\na1 + a2 + b1 + b2 = x\n\n";

                if(option2 == 2 || option2 == 0)
                {
                    cout << "a1: ";
                    cin >> a;
                }
                else
                { a = x;
                    cout << "a1 = " << a << endl;
                }

                cout << "a2: ";
                cin >> b;
                cout << "b1: ";
                cin >> c;
                cout << "b2: ";
                cin >> d;

                x = a + b + c + d;

                cout << endl << a << " + " << b << " + " << c << " + " << d << " = " << x << endl;
                break;
        }

        sleep_for(10ns);
        sleep_until(system_clock::now() + 1s);


        cout << "\nWhat do you want to do?" << endl;

        cout << "1. Continue with result (a = " << x << ")\n2. Restart\n3. Quit";
        cout << "\nChoice: ";
        cin >> option2;

        while (option2 < 0 || option2 > 3)
            {
                cout << "Oops... Please enter a value from 1 to 3!" << endl;
                cout << "Choice: ";
                cin >> option2;
            }

        system("CLS");

    } while(option2 != 3);

    return 0;
}

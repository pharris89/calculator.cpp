/*
 * Calculator.cpp
 *
 *  Date: January 12, 2026
 *  Author: Paula Harris
 */

#include <iostream>

using namespace std;

int main()
{
    double op1 = 0.0, op2 = 0.0;
    char operation = '\0';
    char answer = 'Y';

    while (answer == 'Y' || answer == 'y')
    {
        cout << "Enter expression (example: 2 + 2): " << endl;
        cin >> op1 >> operation >> op2;

        if (operation == '+')
        // Added braces so the if statement controls all related outputs
        // and not just a single line. Only the first statement would be conditional
        // and the rest would always execute if we didn't have braces.
        {
            cout << op1 << " + " << op2 << " = " << (op1 + op2) << endl;
        }
        
        else if (operation == '-')
        // Else-if chain used so only one operation runs.
        // Braces added to make sure each condition cleanly contains its logic.
        {
            cout << op1 << " - " << op2 << " = " << (op1 - op2) << endl;
        }
        else if (operation == '*')
        {
            cout << op1 << " * " << op2 << " = " << (op1 * op2) << endl;
        }
        else if (operation == '/')
        {
            
            if (op2 == 0.0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
				// Added to handle division by zero case.
            }
            else
            {
                cout << op1 << " / " << op2 << " = " << (op1 / op2) << endl;
            }
            // Added braces since we are nesting an if statement otherwise,
            // the division-by-zero check wouldn't be reliable.
        }
        else
        {
            cout << "Error: Invalid operator. Please use +, -, *, or /." << endl;
            // Added to clearly define behavior when the operator isn't valid.
        }
        
        cout << "Do you wish to evaluate another expression? (Y/N): " << endl;
		// Added Y/N to prompt for clarity
        cin >> answer;
    }

    cout << "Program Finished." << endl;
    return 0;
	// Added return statement to show the program ended successfully.
}

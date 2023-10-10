#include <iostream>
#include <cmath>

#include "History.h"
using namespace std;
History history;   // Declare and instantiate an object of the History class

void show_calculator()
{
	cout<<"----------------------------------------"<< endl;
	cout<<"---                                  ---"<< endl;
	cout<<"-             SCIENTIFIC               -"<< endl;
	cout<<"-             CALCULATOR               -"<< endl;
	cout<<"---                                  ---"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     +      |      -      |     *     -"<< endl;
	cout<<"-    Add     |  Substract  |  Multiply -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     /      |      l      |     L     -"<< endl;
	cout<<"-   Divide   |      ln     |    log    -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     S      |      e      |     r     -"<< endl;
	cout<<"-   Square   |   Exponent  |    sqrt   -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     s      |      c      |     t     -"<< endl;
	cout<<"-    sin     |     cos     |    tan    -"<< endl;
	cout<<"----------------------------------------"<< endl;
   cout <<"-     h      |      d      |     .     -" << endl;
   cout <<"-  display   |    clear    |   close   -" << endl; 
   cout <<"----------------------------------------" << endl;
}
    

void display_output(double answer)
{
	cout<<"----------------------------------------"<< endl;
	cout<<"---                ---------------------"<< endl;
	cout<<"-     CURRENT      |                    "<< endl;
	cout<<"-     OUTPUT       |  "<<answer          << endl;
	cout<<"---                ---------------------"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     +      |      -      |     *     -"<< endl;
	cout<<"-    Add     |  Substract  |  Multiply -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     /      |      l      |     L     -"<< endl;
	cout<<"-   Divide   |      ln     |    log    -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     S      |      e      |     r     -"<< endl;
	cout<<"-   Square   |   Exponent  |    sqrt   -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     s      |      c      |     t     -"<< endl;
	cout<<"-    sin     |     cos     |    tan    -"<< endl;
	cout<<"----------------------------------------"<< endl;
	cout<<"-     h      |      k      |     .     -"<< endl;
	cout<<"-  history   |    clear    |   close   -"<< endl;
	cout<<"----------------------------------------"<< endl;
}

int main()
{
	double num1 = 0.0;
	double num2 = 0.0;
	
	double answer = 0.0;
	char input = '\n';
	bool converter = 0;
	
	
	while(input != '.')
	{
		if(converter == 1)
		{
			display_output(answer);
			cout<<"Enter: ";
			cin>>input;
			
			if(input == '+' || input == '-' || input == '*'|| input == '/' || input == 'e')
			{
				num1 = answer;
				
				cout<<"Enter num: ";
				cin>>num2;
			}
			else if(input == 'k' || input == '.')
			{
				
			}
			else
			{
				num1 = answer;
			}
		}
		else 
		{
			show_calculator();
			cout<<"Enter: ";
			cin>>input;
			
			if(input == '+' || input == '-' || input == '*'|| input == '/' || input == 'l' || input == 'e')
			{
				cout<<"Enter num 1: ";
				cin>>num1;
				
				cout<<"Enter num 2: ";
				cin>>num2;
			}
			else if(input == 'k' || input == '.')
			{
				
			}
			else
			{
				cout<<"Enter num: ";
				cin>> num1;
			}
			converter = 1;
		}
		
		switch(input)
		{
			case '+':
        answer = num1 + num2;
        history.addToHistory(num1, input, num2, answer);  // Add this line
        break;

    case '-':
        answer = num1 - num2;
        history.addToHistory(num1, input, num2, answer);  // Add this line
        break;
			case '*':
				answer = num1 * num2;
                history.addToHistory(num1, input, num2, answer); 
				break;
			case '/':
				answer = num1 / num2;
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'l':
				answer = log1p(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'L':
				answer = log(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;	
			case 'S':
				answer = num1*num1;
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'e':
				answer = pow(num1,num2);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 's':
				answer = sin(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'c':
				answer = cos(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 't':
				answer = tan(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'r':
				answer = sqrt(num1);
                history.addToHistory(num1, input, num2, answer); 
				break;
			case 'k':
				converter = 0;
				break;
			case 'h':  // Display history
        system("clear");  // Or use system("cls"); if on Windows
        history.displayHistory();
        cout << "\nPress enter to continue...";
        cin.ignore();  // To handle the '\n' character left in the buffer
        cin.get();  // Wait for the user to press a key before continuing
        break;

            case 'd':  // Delete history
            history.clearHistory();
            cout << "History cleared!" << endl;
            cin.get();  // Wait for the user to press a key before continuing
            break;

			case '.':
				break;
			default:
				cout<<"Invalid"<<endl;
		}
		
		system("clear");
		
	}
   history.displayHistory();


	return 0;
}
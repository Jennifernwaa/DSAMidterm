#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

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
	cout<<"-     /      |      m      |     L     -"<< endl;
	cout<<"-   Divide   |     Mod     |    log    -"<< endl;
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
	cout<<"-     /      |      %      |     L     -"<< endl;
	cout<<"-   Divide   |     Mod     |    log    -"<< endl;
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
	
	//show_calculator();
	while(input != '.')
	{
		if(converter == 1)
		{
			display_output(answer);
			cout<<"Enter: ";
			cin>>input;
			
			if(input == '+' || input == '-' || input == '*'|| input == '/' || input == '%' || input == 'e')
			{
				num1 = answer;
				
				cout<<"Enter num: ";
				cin>>num2;
			}
			else if(input == 'k' || input == '.')
			{
				cout<<"Session Ended";
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
			
			if(input == '+' || input == '-' || input == '*'|| input == '/' || input == '%' || input == 'e')
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
				cout<<"Enter num 1: ";
				cin>> num1;
			}
			converter = 1;
		}
		
		switch(input)
		{
			case '+':
				answer = num1 + num2;
				break;
			case '-':
				answer = num1 - num2;
				break;
			case '*':
				answer = num1 * num2;
				break;
			case '/':
				answer = num1 / num2;
				break;
			case '%':
				answer = int(num1) % int(num2);
				break;
			case 'L':
				answer = log(num1);
				break;	
			case 'S':
				answer = pow(num1,2);
				break;
			case 'e':
				answer = pow(num1,num2);
				break;
			case 's':
				answer = sin(num1);
				break;
			case 'c':
				answer = cos(num1);
				break;
			case 't':
				answer = tan(num1);
				break;
			case 'r':
				answer = sqrt(num1);
				break;
			case 'k':
				converter = 0;
				break;
			case 'h':
				break;
			case '.':
				break;
			default:
				cout<<"Invalid"<<endl;
		}
		
		system("cls");
		//display_output(answer);
	}

	return 0;
}

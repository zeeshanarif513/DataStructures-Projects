
#include"Stack.h"
#include<cctype>

int main()
{
	char infix[100] = {};
	char postfix[100] = {};
	Stack s;
	cout << "Enter an Expression: ";
	cin >> infix;
	int i, j = 0;
	for (i = 0;infix[i];i++)
	{   //For checking whether the user enter an operand or operator
		if (isalpha(infix[i]))
		{
			postfix[j] = infix[i];
			j++;
		}
		else
		{
			if (infix[i] == '+' || infix[i] == '-')
			{
				while (!s.isEmpty() && s.showtop() == '+' || s.showtop() == '-' || s.showtop() == '*' || s.showtop() == '/' || s.showtop() == '^')
				{
					postfix[j] = s.pop();
					j++;
				}
				s.push(infix[i]);
			}
			else if (infix[i] == '*' || infix[i] == '/')
			{
				while (!s.isEmpty() && s.showtop() == '*' || s.showtop() == '/' || s.showtop() == '^')
				{
					postfix[j] = s.pop();
					j++;
				}
				s.push(infix[i]);
			}
			else if (infix[i] == '^' || infix[i] == '(')
			{
				s.push(infix[i]);
			}
			else if (infix[i] == ')')
			{
				while (s.showtop() != '(')
				{
					postfix[j] = s.pop();
					j++;
				}
				s.pop(); //Removing '(' from stack
			}
			else
			{
				cout << "!!!Wrong input!!! " << infix[i] << " is invalid operator." << endl;
				system("pause");
				return 0;
			}
		}
	}
	while (!s.isEmpty())
	{
		postfix[j] = s.pop();
		j++;
	}
	cout << postfix << endl;
	system("pause");
	return 0;
}

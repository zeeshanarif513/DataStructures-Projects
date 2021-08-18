

#include"stack.h"
#include<cctype>
#include<cmath>

int main()
{
	char postfix[100] = {};
	Stack s;
	cout << "Enter an expression in posfix form: ";
	cin >> postfix;
	int i, j = 0;
	int val1, val2;
	for (i = 0;postfix[i];i++)
	{
		if (isdigit(postfix[i]))
		{
			s.push(postfix[i]-'0');  //Typecasting
		}
		else
		{
			val2 = s.pop();
			val1 = s.pop();
			switch (postfix[i])
			{
			case '+':
				s.push(val1 + val2);
				break;
			case '-':
				s.push(val1 - val2);
				break;
			case '*':
				s.push(val1 * val2);
				break;
			case '/':
				s.push(val1 / val2);
				break;
			case '^':
				s.push(pow(val1,val2));
				break;
			default:
				cout << "!!!Invalid input!!! " << postfix[i] << " is an invalid operator." << endl;
				system("pause");
				exit(0);
			}
		}
	}
	cout << "Result after evaluation: " << s.pop() << endl;
	system("pause");
	return 0;
}

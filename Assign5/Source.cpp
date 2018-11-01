#include <iostream>
using namespace std;

bool palindrome(char str[100]);

int main()
{

	char phrase[100];
	bool answer=true;
	int i;
	cin.getline(phrase, 100);

	answer=palindrome(phrase);
	if (answer == true)
	{
		cout<<" '";
		for (i = 0; i < strlen(phrase); i++)
		{
			cout << phrase[i];
		}
		cout << "' is palindrome" << endl;
	}
	else if (answer == false)
	{
		cout << " '";

		for (i = 0; i < strlen(phrase); i++)
		{
			cout << phrase[i];
		}
		cout << "' is not palindrome" << endl;
	}

	system("pause");
}


bool palindrome(char str[100])
{
	int i, j=1;
	int count=0;
	bool inword = true;	
	count = strlen(str);
	for (i = 0; i<7; i++)
	{
		if (str[i] == str[count-j])
		{

			j += 1;

			if (i >= count-j)
			{
				inword = true;
				break;
			}
		}
		else
		{
			inword = false;
			break;
		}
	}
	return inword;
}
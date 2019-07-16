#include <iostream>
using namespace std ;
int main ()
{
	int Number1;
	cout << "Enter your number grade : ";
	cin >> Number1;
	cout << endl;
	cout << " ========== Your Grade ==========" << endl;
	
	if(Number1 >= 90 && Number1 <= 100)
	
	{
		cout << " A " << endl;
	}
	else if (Number1 >= 80 && Number1 <= 89)
	{		
        cout << " B " << endl;
	}
	else if (Number1 >= 70 && Number1 <=79)
	{
		cout << " C " << endl;
	}
	else if (Number1 >= 60 && Number1 <=69)
	{
		cout << " D " << endl;
	}
	else if (Number1 >= 0 && Number1 <=59)
	{
		cout << " F " << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}
	cout << "==========================================" << endl;
	return (0);
}



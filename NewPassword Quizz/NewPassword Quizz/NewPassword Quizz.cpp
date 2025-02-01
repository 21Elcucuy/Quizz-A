#include <iostream>
using namespace std;
int random(int From , int To)
{
	return rand() % (To - From + 1) + From;

}

string CreatePassword(int NumberOfThePassword, int Distinct)
{
	string ThePass = "";

	int i = random(97, 122);
	int CounterDistinct = 0; 
	if (i + Distinct > 122)
	{
		i = 97;
	}
	int theNumber = i;
	


	for (int j = 1; j <= NumberOfThePassword; j++)
	{
		
		if (CounterDistinct != Distinct)
		{
			ThePass += char(theNumber);
			theNumber++;
			CounterDistinct++;
		}
		else
		{
			int randChar = random(i, theNumber -1);
			ThePass += (char)randChar;
		}
	}
	return ThePass;
	
	
}


int main()
{
	srand((unsigned) time(0));
	int i ;
	int k;
	cin >> i;
	cin >> k;
	cout << CreatePassword(i, k) << endl;



	return 0; 
}


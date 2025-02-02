#include <iostream>
using namespace std;
char random(char From , char To)
{
	return rand() % (To - From + 1) + From;

}

string CreatePassword(int NumberOfThePassword, int Distinct)
{
	string ThePass = "";

	char i = random('a','z');
	int CounterDistinct = 0; 
	if (i + Distinct > 'z')
	{
		i = 97;
	}
	char theNumber = i;
	


	for (int j = 1; j <= NumberOfThePassword; j++)
	{
		
		if (CounterDistinct == Distinct)
		{

			theNumber = i;
			CounterDistinct = 0;
		}
			ThePass += theNumber;
			theNumber++;
			CounterDistinct++;
		
		
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


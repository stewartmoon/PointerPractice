#include <iomanip>
#include <iostream>


using namespace std;


int main()
{
	int average = 0;
	int distance = 0;
	int arraysize = 5;
	int* a = new int[arraysize];

	a[0] = 65;
	a[1] = 75;
	a[2] = 85;
	a[3] = 95;
	a[4] = 100;

	cout << "Test Scores: "<<endl;

	for (int i = 0; i < arraysize; i++)
	{
		cout<<"Test "<<	i<<": "<<a[i]<<endl;
		average = average+a[i];
	}

	average = average / 5;
	cout << "Average of Scores: " << average << endl;
	cout << endl;

	for (int i = 0; i < arraysize; i++)
	{
		distance = average - a[i];
		cout << "Test " << i << ": " << a[i] << endl;
		cout << "Distance to mean: "<<distance<<endl;
	}
	cout << endl;
return 0;
}
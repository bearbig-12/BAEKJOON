#include <iostream>


using namespace std;
int main()
{
	int mHour{ 0 };
	int mMin{ 0 };
	int input{ 0 };


	cin >> mHour >> mMin >> input;
	
	mMin += input;

	while (mMin >= 60)
	{
		mMin -= 60;
		mHour++;
	}
	mHour %= 24;

	cout << mHour << " "<< mMin << endl;
	
	return 0;
}
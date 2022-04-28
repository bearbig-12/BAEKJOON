#include <iostream>


using namespace std;
int main()
{
	int mHour{ 0 };
	int mMin{ 0 };
	int input{ 0 };

	int h_r{ 0 };
	int m_r{ 0 };

	cin >> mHour >> mMin >> input;
	
	h_r = mHour;
	m_r = mMin + input;

	if (m_r > 59)
	{
		h_r += m_r / 60;
		m_r %= 60;
	}
	h_r %= 24;

	cout << h_r << " "<< m_r << endl;
	
	return 0;
}
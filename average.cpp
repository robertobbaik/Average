#include <iostream>

using namespace std;

int getTotalNum(int count, double* arr)
{
	double totalNum = 0;
	for (int i = 0; i < count; i++)
	{
		totalNum += arr[i];
	}
	return totalNum;
}

double getAverage(int count, double* arr)
{
	return getTotalNum(count, arr) / count;
}

int main()
{
	//cout << "�� ������ ���� �Է�" << endl;

	int count = 5;
	//cin >> count;
	double* arr = new double[count];

	//double totalNum = 0;

	for (int i = 0; i < count; i++)
	{
		cout << count << "���� ���� �� " << i + 1 << "/" << count <<"��° ���� �Է�" << endl;
		cin >> arr[i];
		//totalNum += arr[i];
	}

	int totalNum = getTotalNum(count, arr);
	double average = getAverage(count, arr);

	cout << "���� : " << totalNum << endl;
	cout << "��� : " << average << endl;

	return 0;
}


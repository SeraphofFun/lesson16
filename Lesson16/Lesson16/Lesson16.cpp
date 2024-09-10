#include <iostream>
using namespace std;
template <typename T1>
void randomdol(T1 arr[], int min, int max, int l) {
	srand(time(NULL));
	for (int i = 0; i < l; i++)
	{
		T1 random = min + rand() % (max - min + 1);
		arr[i] = random;
	}
	cout << endl;
}
template<typename T2>
void randomdshow(T2 arr[], int l) {
	for (int i = 0; i < l; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
template<typename T3>

void bublesort(T3 arr[], int l) {
	for (int i = 0; i < l - 1; i++)
	{
		for (int j = 0; j < l - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}

		}
	}
}
template <typename T4>
void selection(T4 arr[], int l) {

	for (int i = 0; i < l - 1; i++)
	{

		int min_i = i;
		for (int j = i + 1; j < l; j++)
		{
			if (arr[j] < arr[min_i])
				min_i = j;
		}


		if (min_i != i)
		{
			int t = arr[i];
			arr[i] = arr[min_i];
			arr[min_i] = t;
		}

	}

}
template <typename T5>
void insertionsort(T5 arr[], int l) {
	for (int i = 1; i < l; i++)
	{
		int j = i - 1;
		int min = arr[i];
		while (arr[j] > min && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = min;
	}
}
template <typename T6>

void binarysearch(T6 arr[], int l, int search) {
	int center = (int)(l / 2);
	bool found = false;
	for (int i = 0; i < l / 2; i++)
	{
		if (search < arr[center])
		{
			center = (int)(center / 2);
		}
		else if (search > arr[center])
		{
			center = (l - center) / 2 + center;
		}
		else
		{
			found = true;
			cout << center << endl;
			break;
		}

	}
	if (!found)
	{
		cout << "eded yoxdur massivde";
	}
}
int point() {
	srand(time(NULL));

	int random = 1 + rand() % (6 - 1 + 1);

	return random;

}
int point2() {
	srand(time(NULL));

	int random = 10 + rand() % (60 - 10 + 1);

	return random/10;

}
int point3() {
	srand(time(NULL));

	int random = 4 + rand() % (24 - 4 + 1);

	return random/4;

}
int point4() {
	srand(time(NULL));

	int random = 30 + rand() % (180 - 30 + 1);

	return random / 30;

}
void cube(int num) {
	if (num == 1)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i == 3 && j == 3)
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

	}
	else if (num == 2)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((i == 1 && j == 1)||(i == 4 && j == 4))
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

	}
	else if (num == 3)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((i == 1 && j == 1) || (i == 4 && j == 4)||(i==3&&j==3))
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

	}
	else if (num == 4)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((i == 1 && j == 1) || (i == 4 && j == 4) || (i == 1 && j == 4) || (i == 4 && j == 1))
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

	}
	else if (num == 5)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((i == 1 && j == 1) || (i == 4 && j == 4) || (i == 1 && j == 4) || (i == 4 && j == 1) || (i == 3 && j == 3))
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

	}
	else if (num == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((i == 1 && j == 1) || (i == 4 && j == 4) || (i == 1 && j == 4) || (i == 4 && j == 1) || (i == 3 && j == 4) || (i == 3 && j == 1))
					cout << "* ";
				else if ((i == 0 || i == 5) && j == 5) {
					cout << " ";
				}
				else if (i == 0 || i == 5)
				{
					cout << "--";
				}
				else if (j == 0 || j == 5)
				{
					cout << "|";
				}

				else
				{
					cout << "  ";
				}

			}
			cout << endl;

		}

		}
		cout << endl << endl;
}
void zerroynu() {
	int i = 0;
	int points1 = 0;
	int points2 = 0;

	while (i < 5)
	{
		cout << "Player 1:" << endl;;
		int first = point();
		points1 += first;
		cube(first);
		int second = point2();
		points1 += second;
		cube(second);
		cout << "daslari atin: ";
		int c; cin >> c;
		if (c) {
			cout << "Player 2:" << endl;;
			first = point3();
			points2 += first;
			cube(first);
			second = point4();
			points2 += second;
			cube(second);
		}
		i++;
	}
	for (int i = 0; i < 30; i++)
	{
		cout << "__";
	}
	cout << endl << endl;
	cout << "result:" << endl;
	cout << "Avg: Player1 = " << points1 / 5<<"   Player2 = "<<points2/5<<endl;
	cout << "Sum: Player1 = " << points1  << "   Player2 = " << points2  << endl;
	string winner;
	if (points1>points2)
	{
		winner = "Player1";
	}
	else if (points2 > points1)
	{
		winner = "Player1";
	}
	else {
		winner = "draw";
	}
	cout << "Winner: " << winner;
}
int main()
{
	int min;
	cout << "minimum =";
	cin >> min;
	int max;
	cout << "maximum =";
	cin >> max;
	int arr1[10];
	randomdol(arr1, min, max, 10);
	randomdshow(arr1, 10);
	char arrc[10];
	randomdol(arrc, 50, 112, 10);
	randomdshow(arrc, 10);

	bublesort(arr1, 10);
	randomdshow(arr1, 10);
	cout << "arr2" << endl;

	int arr2[10];
	randomdol(arr2, min, max, 10);
	randomdshow(arr2, 10);
	selection(arr2, 10);
	randomdshow(arr2, 10);


	cout << "arr3" << endl;
	int arr3[10];
	randomdol(arr3, min, max, 10);
	randomdshow(arr3, 10);
	insertionsort(arr3, 10);
	randomdshow(arr3, 10);

	cout << "ucuncu arrayda (arr3) axtarin";
	int axtar;
	cin >> axtar;
	binarysearch(arr3, 10, axtar);

	zerroynu();

}


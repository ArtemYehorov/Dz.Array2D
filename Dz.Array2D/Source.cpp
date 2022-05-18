#include<iostream>

using namespace std;

void arrayz(int height, int width);

int Addarr(int**& ar, int& width, int& height);

int Showarr(int**& ar, int height, int width);

void deletearr(int**& ar, int height);

int main()
{
	srand(time(0));
	int width;
	int height;
	cout << "Enter the width and height to allocate memory for a two-dimensional array - ";
	cin >> height >> width;

	arrayz(height,width);
}

void arrayz(int height,int width)
{
	int** ar = new int* [height];
	Addarr(ar, width, height);
	Showarr(ar, height, width);
	deletearr(ar, height);

}

void deletearr(int**& ar,int height)
{
	for (int i = 0; i < height; ++i)
		delete[] ar[i];
	delete[] ar;
}

int Addarr(int**&ar, int& width, int& height)
{
	for (int y = 0; y < height; y++)
	{
		ar[y] = new int[width];
		for (int x = 0; x < width; x++)
		{
			ar[y][x] = rand() % 100;
		}
	}
	return **ar;
}

int Showarr(int**& ar,int height,int width)
{
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			cout << ar[y][x] << "\t";
		}
		cout << endl;
	}
	return **ar;
}
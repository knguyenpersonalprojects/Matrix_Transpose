#include<iostream>
#include<vector>
using namespace std;
//https://edabit.com/challenge/4KaoDvxaFSmf38bPQ
//finished


int main()
{
	int rows = 0;
	int colms = 0;

	vector <vector<int>> matrix1
	{
		//row by colms
		{5, 5}, //[0,0] , [0,1], [0,2]
		{6, 7}, //[1,0] , [1,1], [1,2]
		{9, 1} //[2,0] , [2,1], [2,2]
	};
	vector <vector<int>> matrix2;
	// gives the number of rows in the matrix in this case 3 for matrix1
	rows = matrix1.size();
	// gives the number of elements in each row in this case 2 for matrix1
	colms = matrix1[0].size();
	
	// in this loop we want to inverted the matrix with 2 rows and 3 colms
	for (int c = 0; c < colms; c++)
	{
		vector<int> newRow;

		for (int r = 0; r <rows; r++)
		{
			//grab each element of each row of matrix1 anc push that into newRow
			newRow.push_back(matrix1[r][c]);
		}
	
		matrix2.push_back(newRow);
	}
	for (int r = 0; r < matrix2.size(); r++)
	{
		for (int c = 0; c < matrix2[0].size(); c++)
		{
			cout <<matrix2[r][c];
		}
		cout << endl;
	}
	system("PAUSE");
}
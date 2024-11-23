#pragma once
#include <vector>
#include <iostream>
using namespace std;



class Solution {

public:
	vector<int> spiralOrder(vector<vector<int>>& matrix)
	{
		int raws = matrix.size();
		int cols = matrix[0].size();
		vector <int > matrix_sp;
		int r0 = 0, r1 = raws-1;
		int c0 = 0, c1 = cols - 1;
		do 
		{
				
			
				for (int j = c0; j <= c1; j++)
				{
					matrix_sp.push_back(matrix[r0][j]);
					//cout << "last * " << matrix_sp.back() << endl;

				};
				
				for (int i = (r0+1); i  <=r1; i++)
				{
					matrix_sp.push_back(matrix[i][c1]);
					//cout << "last ** " << matrix_sp.back() << endl;

				};
				
				for (int j = (c1-1);( j >= c0)&&((r1-r0)!=0); j--)
				{
					matrix_sp.push_back(matrix[r1][j]);
					//cout << "last *** " << matrix_sp.back() << endl;

				};
				for (int i = r1-1; (i >= (r0+1)) && ((c1 - c0) != 0); i--)
				{
					matrix_sp.push_back(matrix[i][c0]);
					//cout <<"last **** "<< matrix_sp.back() << endl;

				};
				r0++;
				c0++;
				r1--;
				c1--;

				//cout << "r0 << c0 << r1 << c1 " << r0 << c0 << r1 << c1 << endl;
				
		} while ((r0 <= r1) && (c0 <= c1));
		//cout <<"r0 << c0 << r1 << c1 "<< r0 << c0 << r1 << c1 << endl;;
		
		return matrix_sp;
	}
	
};

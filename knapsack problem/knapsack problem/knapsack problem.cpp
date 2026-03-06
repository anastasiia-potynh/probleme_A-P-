// knapsack problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int knapsack(int W, vector<int>& weight ,vector<int>& value, int n)
{
    
    vector<vector<int> > mat(W + 1, vector<int>(n + 1, 0));
    for (int j = 1; j <= n; j++)//indicele obiectului curent (de la 1 la n).
    {
        for (int w = 1; w <= W; w++)//greutatea curenta rucsacului (de la 1 la W).
        {
            if (weight[j - 1] <= w)
            {
                mat[w][j] = max(mat[w][j - 1], mat[w - weight[j - 1]][j - 1] + value[j - 1]);
            }
            else
            {
                mat[w][j] = mat[w][j - 1];
            }
        }
    }
    return mat[W][n];
}

int main()
{
    vector<int> weight = {3 , 4,5,8, 9 };
    vector<int> value = { 1, 6, 4,7, 6 };
    int W = 14;
    int n = 5;
    int maxValue = knapsack(W,weight, value , n);
    cout << maxValue;
     
    return 0;
}

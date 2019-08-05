#include <iostream>
using namespace std;
const int count = 4;
 
int main()
{
 
    int t, m, n;
    cout << "type number of iterations\n";
    cin >> t;
    cout << "type max size of matrix\n";
    cin >> m;
    int matrix[m][m];
 
    for (int i = 0; i < t; i++) 
    {  
        cout << "type size of current matrix\n";
        cin >> n;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
            
        int c = count;
        for (;c > 0; c--) 
        {
            int top   = 0;
            int left  = 0;
            int down  = n - 1;
            int right = n - 1; 
            int tmp   = 0, current = 0;
            
            while(true) 
            {
                for(int j = left; j <= right; ++j) 
                {
                    tmp = matrix[top][j];
                    matrix[top][j] = current;
                    current = tmp;
                }
                top++;
 
                if(top > down || left > right) break;
                for(int i = top; i <= down; ++i) 
                {
                    tmp = matrix[i][right];
                    matrix[i][right] = current;
                    current = tmp;
                }
                right--;
 
                if(top > down || left > right) break;
                for(int j = right; j >= left; --j) 
                {
                    tmp = matrix[down][j];
                    matrix[down][j] = current;
                    current = tmp;
                }
                down--;
 
                if(top > down || left > right) break;
                for(int i = down; i >= top; --i) 
                {
                    tmp = matrix[i][left];
                    matrix[i][left] = current;
                    current = tmp;
                }
                left++;
 
                if(top > down || left > right) break;
            }
 
            matrix[0][0] = current;
        }
        cout << endl;
 
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
            {
                cout << "    " << matrix[i][j];
            }
            cout << endl;
        }
    } 
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int up{0},left{0};
       int down=matrix.size()-1;
       int right=matrix[0].size()-1;
       vector<int> ans;
       while(right>=left && down>=up)
       {

           for(int i=left;i<=right;i++)
           {
               ans.push_back(matrix[up][i]);
           }

            up++;

           for(int i=up;i<=down;i++)
           {
               ans.push_back(matrix[i][right]);
           }

           right--;

            if(down>=up)
           for(int i=right;i>=left;i--)
           {
               ans.push_back(matrix[down][i]);
           }

           down--;

           if(left<=right)
           for(int i=down;i>=up;i--)
           {
               ans.push_back(matrix[i][left]);
           }

           left++;
       }
       return ans;
    }

int main()
{
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans=spiralOrder(matrix);

    for(int x:ans)
    {
        cout<<x<<" ";
    }
    
}
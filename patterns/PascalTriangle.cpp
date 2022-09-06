#include<iostream>
#include<vector>

using namespace std ; 

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    if (numRows == 1) {
        vector<int> one{1};
        ans.push_back(one);
        return ans;
    }

    if (numRows == 2) {
        vector<int> one{1};
        vector<int> two{1, 1};
        ans.push_back(one);
        ans.push_back(two);
        return ans;
    }

    vector<int> one{1};
    vector<int> two{1, 1};
    ans.push_back(one);
    ans.push_back(two);

    int row = 3;
    while (row <= numRows) {
        vector<int> tem{1};
        vector<int> pre = ans.back();
        for (int i = 1; i < pre.size(); i++) {
            int cur_val = pre[i] + pre[i - 1];
            tem.push_back(cur_val);
        }
        tem.push_back(1);
        ans.push_back(tem);
        tem.empty();
        row++;
    }

    return ans;
}

int main(){
    int n ; 
    cin>>n;
    vector<vector<int>> triangle=generate(n);

    for(auto row : triangle ){
        for( auto ele : row ){
            cout<<ele<<"  ";
        }
        cout<<endl;
    }

    cout<<" Status : Done ";
}
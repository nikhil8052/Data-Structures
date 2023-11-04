#include <iostream>
#include <vector>
#include <string>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) \
    loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) \
    loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

int main()
{

    // take the input till the EOF
    int num = 0;
    cin >> num;

    vector<string> v;
    string str ;
    int start_x=0,start_y=0, current_x=0,current_y = 0;
    v.push_back("*");
    while (num--)
    {

        cin >> str;

        if (str == "down")
        {
            current_y++;
            if (current_y >=v.size())
            {
                string s(v[0].size(), ' ');
                v.push_back(s);
            }
        }
        else if (str == "up")
        {

            current_y--;
            if(current_y<0){
                current_y++;
                start_y++;
                string tem(v[0].size(),' ');
                v.insert(v.begin(),tem);
            }
        }
        else if (str == "right")
        {
            current_x++;
            if( current_x>= v[0].size()){
                for( auto&x:v){
                    x.push_back(' ');
                }
            }
        }
        else if (str == "left")
        {
            current_x--;
            if(current_x<0){
                current_x++;
                start_x++;
                for( auto&x:v){
                    x.insert(x.begin(),' ');
                }
            }
        }

        v[current_y][current_x]='*';
    }


   for( auto&s:v){
      s.insert(s.begin(),'#');
   }
   for( auto&s:v){
      s.push_back('#');
   }
   v[start_y][start_x]='S';
   v[current_y][current_x]='E';
   string tem(v[0].size(),'#');
   v.push_back(tem);
   v.insert(v.begin(),tem);


    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int data[]={1,2,3,4,4};
    int sum = 8;
    vector<int> arr(data, data + sizeof(data)/sizeof(int));
    /*for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    cout << ' ' << *it;*/
    bool checkForPair(vector<int> da, int sum);

    bool x = checkForPair(arr,sum);
    if (x == true)
        cout<<"The pair is found whose sum is 8"<<endl;
    else
        cout<<"There is no any pair whose sum is 8"<<endl;

  return 0;
}
bool checkForPair(const vector<int> da, int sum)
{
        int l = 0;
        int h = da.size()-1;
        while (l < h)
        {
            int s = da[l]+da[h];
            if(sum == s)
            {
                return true;
                break;
            }
            else
            {
                if (sum > s)
                    l++;
                else
                    h--;
            }

        }
        return false;
    }

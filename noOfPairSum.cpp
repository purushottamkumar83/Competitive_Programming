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
    int checkForPair(vector<int> da, int sum);

    int x = checkForPair(arr,sum);
    if (x != 0)
        cout<<"The are "<< x <<"pair whose sum is 8"<<endl;
    else
        cout<<"There is no any pair whose sum is 8"<<endl;
  return 0;
}
int checkForPair(const vector<int> da, int sum)
{
        vector<int>::iterator it = da.begin();
        vector<int>::iterator itl = da.end();
        int count = 0;
        while (it != itl)
        {
            int s = *it+*itl;
            if(sum == s)
                count++;
            else
            {
                if (sum > s)
                    it++;
                else
                    itl--;
            }

        }
        return count;
    }

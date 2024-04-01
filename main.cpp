#include <iostream>
#include <vector>
using namespace std;

    int findduplicate(vector<int> & num)
    {
      // Initialize the answer to -1.
      int ans =-1;
  
      // Iterate over the array.
      for(int i=0 ;i<num.size();i++)
        {
          // Get the index of the current number.
            int index = abs(num[i]);
  
          // If the number at the index is negative, then the current number is a duplicate.
          if (num[index]<0)
          {
            // Set the answer to the current number.
            ans=index;
  
            // Break out of the loop.
            break;
          }
  
          // Mark the number at the index as negative.
          num[index]*= -1;
        }
  
      // Return the answer.
      return ans;
  
    }
  


int main() {
  // Create a vector of integers.
  vector <int > num = {1,3,4,3,5};
  // Find the duplicate number(function call)
  int ans = findduplicate(num);
  cout << " The duplicate no. is : " << ans << endl;
  return 0;
}
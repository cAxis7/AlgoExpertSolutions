#include <iostream>
#include <vector>

using namespace std;

// O(n) time | O(1) space - where n is the length of the data
int waterArea(vector<int> heights){
  if(heights.size() == 0)
    return 0;
  
  auto leftIdx = 0;
  auto rightIdx = heights.size() - 1;
  auto leftMax = heights[leftIdx];
  auto rightMax = heights[rightIdx];
  auto surfaceArea = 0;
  
  while(leftIdx < rightIdx){
    if(heights[leftIdx] < heights[rightIdx]){
      leftIdx++;
      leftMax = max(leftMax, heights[leftIdx]);
      surfaceArea += leftMax - heights[leftIdx];
    } else{
      rightIdx--;
      rightMax = max(rightMax, heights[rightIdx]);
      surfaceArea += rightMax - heights[rightIdx];
    }
  }
                                        
  return surfaceArea;
}
                                       
int main(){
  vector<int> input;
  int n, value;
  cout << "height size: " << endl;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> value;
    input.push_back(value);
  }
  cout << waterArea(input) << endl;
}

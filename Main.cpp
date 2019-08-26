#include <vector>
#include <algorithm> //Using for pop_back, back and pop_back
std::vector<int> incrementer(std::vector<int> nums){
  std::vector<int> V;  //We creating vector for ourselves.
  int k=nums.size();    //We want to know how many numbers we have
  for(k;k>0;k--){
    V.push_back((nums.back()+k)%10);  //Reversing, adding and incrementing to our new vector.
    nums.pop_back();                  //We deleting number from our old array
  }
  k=V.size();    
  for(k;k>0;k--){
  nums.push_back(V.back());      //Reversing our array
  V.pop_back();
  }
  
  return nums; //Returning our vector
}//P.S.:https://github.com/d9nchik

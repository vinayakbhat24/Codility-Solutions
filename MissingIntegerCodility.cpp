// you can use includes, for example:
 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
   sort(A.begin(), A.end());
   auto it = std::unique (A.begin(), A.end());                                                        
   A.resize( std::distance(A.begin(),it) ); 
  
  int i= 1;
  int var = A.back();
  
  for(int k:A)
  {
      if(k<=0)
      continue;
      if(k == i)
      {
          i++;
      }
      else
      {
          break;
      }
  } 
    return i;
  
}

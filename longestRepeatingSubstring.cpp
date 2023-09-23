#include <iostream>
#include <vector>


std::string longestRepeatingSubstring(std::string S) {
   int size = S.size()+1;
   int endingIndexOfMax;
   std::vector<std::vector<int>> dp(size, std::vector<int>());
   int maxLength  = 0; 
   for (int  i = 1; i<size; i++)
   {
       for (int j = i+1 ; j<size; j++)
       {
           if (S[i-1] ==S[j-1])
           {
               int val  =  dp[i-1][j-1]+1;
                dp[i][j] = val;
               if (val>maxLength)
               {
                   endingIndexOfMax= i-1;
                   maxLength=val;
               }
           }
           else
           {
        
           }
           
       }
   }
   
    int start{endingIndexOfMax-maxLength+1};
    std::string maxSubString{};
    
    for (int  i = start ; i<start+maxLength ; i++)
    {
        maxSubString+=S[i];
    }

    return maxSubString;

}

int main(){
   std::cout<<longestRepeatingSubstring("abcabcd")<<std::endl;
}

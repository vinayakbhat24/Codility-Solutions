#include <iostream>
#include <string>
#include <vector>

void produceSetBits(int initValueToBeModified, int setPosition, int howMany, int totalBits,  std::vector<int>& soln)
{
    if(howMany ==0)
    {
        soln.push_back(initValueToBeModified);
        return;
    }
    
    for (auto i = setPosition; i<totalBits; i++ )
    {
        initValueToBeModified |= 1<<i;
        produceSetBits(initValueToBeModified, i+1,howMany-1,totalBits,soln  );
        initValueToBeModified =  initValueToBeModified& ~(1<<i);        
    } 
}

int main()
{
  std::vector<int> sol;
  produceSetBits(0,0,1,3,sol);
  for (auto i : sol)
  {
      std::cout<<i<<std::endl;
  }
}

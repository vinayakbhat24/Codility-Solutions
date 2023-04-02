// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int minJumps(int * arr, int n)
{
    if (arr[0] == 0)
        return 0;
        
    int minJumps = 1;
    int maxValueDecay = 0;
    int nextIndex = arr[0];

    for (int  i = 1; i<n; i++)
    {
        if(nextIndex == i)
        {
            maxValueDecay = max(max(--maxValueDecay,0), arr[i]);
            nextIndex = i+maxValueDecay;
            minJumps++;
            
            if(maxValueDecay == 0)
            {
                return 0;
            }
        }
        else
        {
            maxValueDecay = max(max(--maxValueDecay,0), arr[i]);
        }
        
        if(nextIndex>=n)
        {
            return minJumps;
        }
        
    }
    
    return 0;

}
        
        

int main()
{
    int arr[] = { 3,8,8,8,1,2,3,4,5,6,7,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;
}

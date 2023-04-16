#include <iostream>
#include <string>

/*
Base cases: 
 A-> A
 AB-> `A`B, `B`A
*/

void permuteString(std::string str, std::string  ans)
{
    if(str.length() == 0 )
    {
        std::cout<<ans<<std::endl;
    }
    
    for (auto  i = 0 ; i < str.size(); i++)
    {
        auto ch = str[i];
        auto left =str.substr(0, i);
        auto right = str.substr(i+1);
        permuteString(left+right, ans+ch);
        
    }
    
}

int main()
{
 permuteString("ABC", "");
}

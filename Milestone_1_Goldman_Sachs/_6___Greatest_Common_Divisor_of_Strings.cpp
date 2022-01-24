//  Given two strings str1 and str2. We say that str2 divides str1 if it's possible
//  to concatenate multiple str2 to get str1.For example, ab divides abab. if str2 does not divide str1,
//  return -1. Otherwise, return the smallest string str3 such that str3 divides both str1 and str2.



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string s1, string s2)
    {
                if(s1.length() > s2.length())
            swap(s1,s2);

        for(int i=s1.length();i>=1;i--)
        {
            if(s1.length()%i!=0 || s2.length()%i!=0)
                continue;

            string str = s1.substr(0,i);

            int flag =1;

            for(int j=0;j<s1.length();j+=i)
            {
                if(s1.substr(j,i) != str){
                    flag=0;
                    break;
                }
            }

            if(flag==0)
                continue;

            for(int j=0;j<s2.length();j+=i)
            {
                if(s2.substr(j,i) != str){
                    flag=0;
                    break;
                }
            }

            if(flag==0)
                continue;

            return str;
        }

        return "";
    }
};

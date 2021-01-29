/*
 22:12 29-01-2021
 Valid Parenthesis
 
 Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 An input string is valid if:
 Open brackets must be closed by the same type of brackets.
 Open brackets must be closed in the correct order.
 
  Use stack 
  1) pop (,[,{
  2) if other element comes check if there are elements in stack or not first
  		-if not there
  			return false
  		-if there 
  		pop and compare popped element it ( if s[i]=)
  		simiary for others too
*/
#include<iostream>
#include<stack>
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> x;
        int flag=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('|| s[i]=='['||s[i]=='{')
            {
                x.push(s[i]);
                cout<<"Pushed "<<s[i]<<endl;
            }
            else
            {
                if(x.size()>0)
                {
                    char q=x.top();
                    cout<<"Popped "<<q<<endl;
                    if(s[i]==')')
                    {
                        if(q!='(')
                        {
                            flag=0;
                            break;
                        }
                    }
                    else if(s[i]==']')
                    {
                        if(q!='[')
                        {
                            flag=0;
                            break;
                        }
                    }
                    else if(s[i]=='}')
                    {
                        if(q!='{')
                        {
                            flag=0;
                            break;
                        }
                    }
                    x.pop();
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1 && x.size()==0)
            return 1;
        else
            return 0;
        
    }
};

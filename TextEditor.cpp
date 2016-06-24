/*
 you must implement a simple text editor. Initially, your editor contains an empty string, . You must perform  operations of the following  types:

append - Append string  to the end of .
delete - Delete the last  characters of .
print - Print the  character of .
undo - Undo the last (not previously undone) operation of type  or , reverting  to the state it was in prior to that operation.
Input Format

The first line contains an integer, , denoting the number of operations. 
Each line  of the  subsequent lines (where ) defines an operation to be performed. Each operation starts with a single integer,  (where ), denoting a type of operation as defined in the Problem Statement above. If the operation requires an argument,  is followed by its space-separated argument. For example, if  and , line  will be 1 abcd.

All input characters are lowercase English letters.
It is guaranteed that the sequence of operations given as input is possible to perform.
Output Format

Each operation of type  must print the  character on a new line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#define INT_MAX    2147483647
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcases;
    string app;
    string stack="";
    string prevstate;
    int count=0;
    cin>>testcases;
    int c,len1,del;
    for(int i=0;i<testcases;i++)
        {
            cin>>c;
            if(c==1)
                {                       
                    cin>>app;
                    prevstate=stack;
                    
                    stack.append(app); 
                    /*cout<<append<<endl;
                    len1=append.length();
                    for(int j=count;j<(count+len1);j++)
                        {
                        stack[j]=append[j];
                        count=count+len1;
                        }*/
                cout<<"now       "<<stack<<endl;
                
                }
            else if(c==2)
                {
                    cin>>del;
                    int len=stack.length();
                    prevstate=stack;
                    //for(int i=(stack.length()-1);del>0;i--)
                     stack.erase((len-del),del);
                    cout<<"erase   "<<stack<<endl;
                                    
                }
            else if(c==3)
                {
                    int display;
                    cin>>display;
                    cout<<"dis..."<<stack[display-1]<<endl;
                }
            else if(c==4)
                {
                    cout<<prevstate;
                    stack=prevstate;
                    cout<<"after undo..."<<stack<<endl;
                }
        }
    
    return 0;
}

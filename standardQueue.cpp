#include<iostream>
 #include<string>
 #include<queue>
using namespace std;
 
 
 
 int main() {
             
    queue<int> q1;
    q1.push(45);
    q1.push(78);
    q1.push(89);

    while (q1.empty() == false)
    {
        cout << q1.front() << " ";
        q1.pop();

    }
    
 return 0;   
}
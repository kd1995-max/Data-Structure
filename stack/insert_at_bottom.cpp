#include<bits/stdc++.h>

using namespace std;
void insert_at_bottom(stack<int> &s, int num){
    stack<int> temp_;
    while (!s.empty())
    {
        temp_.push(s.top());
        s.pop();
    }
    s.push(num);
    while (!temp_.empty())
    {
        s.push(temp_.top());
        temp_.pop();
    }
}
int main(int argc, const char** argv) {
    int T;
    cin >> T;
    while (T--)
    {
        stack<int> s;
        int n, temp , num;
        cin >> n >> num;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            s.push(temp);
        }
        insert_at_bottom(s , num);
        while (!s.empty())
        {
            std::cout << s.top() << " ";
            s.pop();
        }
        
    }
    
    return 0;
}

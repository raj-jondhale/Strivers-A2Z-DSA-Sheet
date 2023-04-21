#include <bits/stdc++.h>
using namespace std;
// pair
/*
void explainPair(){

    pair<int,int> p={1,3};

    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>>p={1,{3,4}};

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

    pair<int,int>arr[]={{1,2},{2,5}{5,1}};

    cout<<arr[1].second;
}
*/

// vector
/*
void explainVector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> v;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int>v(5,100);

    vector<int>v(5);

    vector<int>v1(5,20);
    vector<int>v2(v1);




// iterator
vector<int> v(3, 10);
vector<int>::iterator it = v.begin();
it++;
cout << *(it) << " ";

it = it + 2;
cout << *(it) << " ";

vector<int>::iterator it = v.end();
vector<int>::iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

cout << v[0] << " " << v.at(0);
cout << v.back() << " ";

for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
}
for (auto it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
}
for (auto : v)
{
    cout << it << " ";
}

//{10,20,12,23}
v.erase(v.begin()+1);

//{10,20,12,23,35}
v.erase(v.begin()+2,v.begin()+4);
//10,20,35


//insert function

vector<int> v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100}
v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

vector <int> copy(2,50);//{50,50}
v.insert(v.begin(),copy.begin(),copy.end());
//{50,50,300,10,10,100,100}

//{10,20}
cout<<v.size();//2

//{10,20}
v.pop_back();//{10}

//v1->{10,20}
//v2->{30,40}

v1.swap(v2);//v1->{30,40} v2->{10,20}
v.clear();//erase the entire vector

cout<<v.empty();
}*/

// list
/*
void explainList()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(); //{2,4}

    // rest functions same as vector
    // begin,end,rend,clear,rbegin,insert,size,swap
}

// dequeue

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}
    dq.pop_back();       //{3,4,1}
    dq.pop_front();      //{4,1}
    dq.back();
    dq.front();
    // rest functions same as vector
    // begin,end,rend,clear,rbegin,insert,size,swap
}

// stack

void explainStack()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(1);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(3);    //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top;    // 5
    st.pop();          //{3,3,2,1}
    cout << st.top();  // 3
    cout << st.size(); // 4
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}
// queue
void explainQueue()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;

    cout << q.back(); // prints 9

    // q is{1,2,9}
    cout << q.front(); // prints 1

    q.pop();           //{2,9}
    cout << q.front(); // prints 2

    // size swap empty same as stack
}

// PQ

void explainPQ()
{
    priority_queue<int> pq;
    pq.push(5);     //{5};
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); // print 10
    pq.pop();         // 8,5,2

    cout << pq.top(); // prints 8
    // size swap empty same as stack
    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);       //{5}
    pq.push(2);       //{2,5}
    pq.push(8);       //{2,5,8}
    pq.emplace(10);   //{2,5,8,10}
    cout << pq.top(); // print 2

}
*/

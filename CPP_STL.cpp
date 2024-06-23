#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000009

//pair lies inside the utility library

void explainPair(){
    cout<<"EXPLAIN PAIR IN C++ STL"<<endl;
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
    cout<<endl<<endl;
}

void explainVector(){
    cout<<"EXPLAIN VECTOR IN C++ STL"<<endl;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    v.push_back(3);
    v.push_back(4);
    
    vector<pair<int,int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    
    vector<int> v1(5,100);//vector containing 5 instances of 100
    
    vector<int> v2(5);//vector of size 5 with 0 or any garbage value
    
    vector<int> v3(v2);//copy v2 into v3 (so v3 would be a copy of v2)
    
    vector<int>::iterator it = v.begin();
    
    it++;
    cout<<*(it)<<" ";
    
    cout<<v.at(1)<<" ";
    
    it = it+2;
    cout<<*(it)<<" "<<endl;
    
    vector<int>::iterator it1 = v.end();//will point to a location that is right after the last element
    
    auto it2 = v.rend();//reverse end
    
    auto it3 = v.rbegin();//reverse begin
    
    cout<<"Back of vector v :"<<v.back()<<endl;
    
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //v : 1,2,3,4
    v.erase(v.begin()+1);
    cout<<"After erase : ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    
    v.erase(v.begin(),v.begin()+2);
    cout<<"After second erase : ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    
    vector<int> vv(2,100);//{100,100}
    vv.insert(vv.begin(),300);//{300,100,100}
    vv.insert(vv.begin()+1,2,100);//{300,10,10,100,100}
    
    vector<int> v_copy(3,13);
    vv.insert(vv.begin(),v_copy.begin(),v_copy.end());
    for(auto it:vv){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size of vv : "<<vv.size()<<endl;
    
    vv.pop_back();//100 is popped
    
    vv.swap(v_copy);
    
    vv.clear();
    
    cout<<bool(vv.empty());
    
    cout<<endl<<endl;
}

void explainList(){
    cout<<"EXPLAIN LIST IN C++ STL"<<endl;
    list<int> ls;
    
    ls.push_back(2);
    ls.emplace_back(4);
    
    ls.push_front(5);
    ls.emplace_front(3);
    
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl<<endl;
}

void explainDeque(){
    cout<<"EXPLAIN DEQUE IN C++ STL"<<endl;
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.emplace_front(-1);
    
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<endl;
    cout<<dq.back();
    cout<<endl<<endl;
}

void explainStack(){
    cout<<"EXPLAIN STACK IN C++ STL"<<endl;
    //All operations in stack are O(1)
    //Follows LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    stack<int> st1;
    st1.swap(st);
    cout<<endl<<endl;
}

void explainQueue(){
    cout<<"EXPLAIN QUEUE IN C++ STL"<<endl;
    //All operations in queue are O(1)
    //Follows FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    q.back()+=5;
    cout<<q.back()<<endl;//prints 8
    cout<<q.front()<<endl;//prints 1
    q.pop();//After pop : {2,8}
    cout<<q.front();//prints 2
    cout<<endl<<endl;
}

void explainPQ(){
    cout<<"EXPLAIN PRIORITY QUEUE IN C++ STL"<<endl;
    priority_queue<int>pq;
    //push and pop : O(log n) , top : O(1)
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    
    cout<<pq.top()<<endl;//prints 10
    
    pq.pop();//{8,5,2}
    
    cout<<pq.top()<<endl;//prints 8
    
    //Minmum heap
    /*priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
    cout<<pq.top();//prints 2*/
    cout<<endl<<endl;
}

void explainSet(){
    //Set stores everything in a sorted order and every element is unique
    cout<<"EXPLAIN SET IN C++ STL"<<endl;
    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
    
    auto it_st1 = st.find(3);//returns an iterator that points to 3
    
    auto it_st2 = st.find(6);//not in set so it returns st.end() i.e iterator that points one positon after the end
    
    st.erase(5);//erases 5 takes logarithmic time
    
    int cnt = st.count(1);//returns 1 for in set and 0 for not in set
    auto it = st.find(3);
    st.erase(it);//it takes constant time
    
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);//erases [first,last)
    
    auto it_l = st.lower_bound(2);
    auto it_u = st.upper_bound(3);
    cout<<endl<<endl;
}

void explainMultiSet(){
    //everything is same as SET
    //only stores duplicate elements also
    cout<<"EXPLAIN MULTI SET IN C++ STL"<<endl<<endl;
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    
    ms.erase(1);// all 1 s erased
    
    int cnt = ms.count(1);
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(ms.find(1));//only a single one is erased
    
    //ms.erase(ms.find(1),ms.find(1)+2);
    
}

void explainUSet(){
    cout<<"EXPLAIN UNORDERED SET IN C++ STL"<<endl;
    unordered_set<int> ust;
    //lower_bound and upper_bound don't work
    //does not store in any particular order
    //better time complexity than set, except when collision happens
    cout<<endl<<endl;
    
}

void explainMap(){
    cout<<"EXPLAIN MAP IN C++ STL"<<endl;
    //Map stores unique keys in sorted order
    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;
    
    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    
    for(auto it : mpp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    cout<<endl<<mpp[1]<<endl;
    cout<<mpp[5]<<endl;//output : 0 or NULL
    
    auto it9 = mpp.find(3);
    cout<<it9->second;
    cout<<endl<<endl;
    
}

void explainMultiMap(){
    cout<<"EXPLAIN MULTI MAP IN C++ STL"<<endl;
    //everything same as map, only it can store multiple keys
    //only mpp[key] cannot be used here
    cout<<endl<<endl;
}

void explainUnorderedMap(){
    cout<<"EXPLAIN UNORDERED MAP IN C++ STL"<<endl;
    //doesn't store sorted keys but no duplicate keys
    //almost all cases works in O(1)
    cout<<endl<<endl;
}

int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    return 0;
}
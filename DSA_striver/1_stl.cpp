// #include <bits/stdc++.h>
// using namespace std;

// void explain_pair() {
//     pair<int, string> p1 = {1, "Hello"};
//     cout << p1.first << " " << p1.second << endl;

//     pair<int, pair<string, int>> p2 = {2, {"World", 2024}};
//     cout << p2.first << " "
//          << p2.second.second << " "
//          << p2.second.first << endl;
// }
// void explain_vector(){
//     vector<int> vec = {1, 2, 3, 4, 5};
//     // for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
//     //     cout << *it << " ";
//     // }
//     for (auto it : vec) {
//         cout << it << " "; //1 2 3 4 5
//     }
//     vec.erase(vec.begin()+ 2);
//     cout << "\nAfter erase: ";
//     for (auto it : vec) {
//         cout << it << " "; //1 2 4 5
//     }
//     vec.erase(vec.begin( )+1, vec.end()-1);  //[start, end)
//     cout << "\nAfter erase: ";
//     for (auto it : vec){
//         cout << it << " "; //1 5
//     }
//     //insert function
//     vec.insert(vec.begin()+1, 2); //1 2 5
//     vec.insert(vec.begin()+2, 3, 4); //1 2 4 4 4 5

//     vector<int> copy(2,100);
//     vec.insert(vec.begin(), copy.begin(),copy.end()); //100 100 1 2 4 4 4 5
//     vec.size(); //8
//     cout << "\nAfter insert: ";
//     for (auto it : vec){
//         cout << it << " ";
//     }
//     vec.pop_back(); //removes last element
//     cout << "\nAfter pop_back: ";
//     for(auto it : vec){
//         cout <<it<<" ";
//     }
//     vector <int> v1 = {1,2,3};
//     vector <int> v2 = {4,5,6};

//     cout << "\nBefore swap v1: ";
//     for(auto it : v1){
//         cout << it << " "; //4 5 6
//     }
//     cout << "\nBefore swap v2: ";
//     for (auto it : v2){
//         cout << it << " "; //1 2 3
//     }
//     v1.swap(v2); //swaps v1 and v2
//     cout << "\nAfter swap v1: ";
//     for (auto it : v1){
//         cout << it << " ";  //1 2 3
//     }
//     cout << "\nAfter swap v2: ";
//     for (auto it : v2){
//         cout << it << " "; //4 5 6
//     }
//     cout << "\nVector empty or not: " << v1.empty(); //0 (false)
//     v1.clear(); //clears the vector
//     cout << "\nVector size after clear: " << v1.size(); //0

// }
// void explain_list(){
//     list<int> ls;
//     ls.push_back(2);    //{2}
//     ls.emplace_back(4); //{2,4}

//     ls.push_front(1);
//     ls.emplace_front(0);
//     for (auto it : ls){
//         cout << it << " ";
//     }
//     cout<< "\n";
//     list<int> lst = {1,2,3,4,5};
//     // for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it){
//     //     cout << *it << " ";
//     // }
//     for (auto it : lst){
//         cout << it << " "; //1 2 3 4 5
//     }
//     lst.push_back(6); //1 2 3 4 5 6
//     lst.push_front(0); //0 1 2 3 4 5 6
//     cout << "\nAfter push_back and push_front: ";
//     for (auto it : lst){
//         cout << it << " "; //0 1 2 3 4 5 6
//     }
//     lst.pop_back(); //0 1 2 3 4 5
//     lst.pop_front(); //1 2 3 4 5
//     cout << "\nAfter pop_back and pop_front: ";
//     for (auto it : lst){
//         cout << it << " "; //1 2 3 4 5
//     }
//     lst.remove(3); //1 2 4 5
//     cout << "\nAfter remove(3): ";
//     for (auto it : lst){
//         cout << it << " "; //1 2 4 5
//     }
// }
// void explain_Deque(){

//     deque<int> dq;
//     dq.push_back(1); //{1}
//     dq.emplace_back(2); //{1,2}
//     dq.push_front(0); //{0,1,2}
//     dq.emplace_front(-1); //{-1,0,1,2}

//     for (auto it : dq){
//         cout << it << " "; //-1 0 1 2
//     }
//     cout << "\nFront element: " << dq.front(); //-1
//     cout << "\nBack element: " << dq.back(); //2

//     dq.pop_front(); //{0,1,2}
//     dq.pop_back(); //{0,1}
//     cout << "\nAfter pop_front and pop_back: ";
//     for (auto it : dq){
//         cout << it << " "; //0 1
//     }

// }
// void explain_stack(){ //LIFO
//     stack<int> st;
//     st.push(1); //{1}
//     st.push(2); //{1,2}
//     st.push(3); //{1,2,3}

//     cout << "\nTop element: " << st.top(); //3
//     cout << "\nStack size: " << st.size(); //3

//     st.pop(); //{1,2}
//     cout << "\nAfter pop, top element: " << st.top(); //2
//     cout << "\nAfter pop, stack size: " << st.size(); //2

//     cout << "\nIs stack empty? " << st.empty(); //0 (false)
//     stack<int> st1, st2;
//     swap(st1, st2); //swaps st1 and st2
// }
// void explain_queue(){  //FIFO
//     queue<int> q;
//     q.push(1); //{1}
//     q.push(2); //{1,2}
//     q.emplace(3); //{1,2,3}

//     q.back() += 5; //modifies last element to 8
//     cout << "\nFront element: " << q.front(); //1
//     cout << "\nBack element: " << q.back(); //8
//     cout << "\nQueue size: " << q.size(); //3

//     q.pop(); //{2,8}
//     cout << "\nAfter pop, front element: " << q.front(); //2
//     cout << "\nAfter pop, queue size: " << q.size(); //2

//     cout << "\nIs queue empty? " << q.empty(); //0 (false)
//     queue<int> q1, q2;
//     swap(q1, q2); //swaps q1 and q2

// }
// void explain_priority_queue(){   //queue with priority
//     //max-heap
//     priority_queue<int> pq;
//     pq.push(5); //{5}
//     pq.push(2); //{5,2}
//     pq.push(8); //{8,5,2}
//     pq.emplace(1); //{8,5,2,1}

//     cout << "\nMax element: " << pq.top(); //8
//     cout << "\nPriority queue size: " << pq.size(); //4

//     pq.pop();   //{5,2,1}
//     cout << "\nAfter pop, max element: " << pq.top(); //5
//     cout << "\nAfter pop, priority queue size: " << pq.size(); //3

//     //min-heap
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     minHeap.push(5); //{5}
//     minHeap.push(2); //{2,5}
//     minHeap.push(8); //{2,5,8}
//     minHeap.emplace(1); //{1,2,5,8}

//     cout << "\nMin element: " << minHeap.top(); //1
//     cout << "\nMin-heap size: " << minHeap.size(); //4

//     minHeap.pop();
//     cout << "\nAfter pop, min element: " << minHeap.top(); //2
//     cout << "\nAfter pop, min-heap size: " << minHeap.size(); //3
// }
// void explain_set(){  //stores unique elements in sorted order
//     set<int> s;
//     s.insert(3); //{3}
//     s.emplace(1); //{1,3}
//     s.insert(2); //{1,2,3}
//     s.insert(2); //{1,2,3} (no duplicates)

//     for (auto it : s){
//         cout << it << " "; //1 2 3
//     }
//     cout << "\nSet size: " << s.size(); //3

//     auto it = s.find(2); //iterator to element 2
//     auto it2 = s.find(8); //iterator to element 8 (not found, it2 = s.end() which is after 3 )

//     cout << "\nAfter erase(2): ";
//     for (auto it : s){
//         cout << it << " "; //1 3
//     }

//     int count = s.count(2); //1 (exists)
//     auto it = s.find(3);
//     s.erase(it);
//     s.erase(2);

//     auto it1 = s.find(3);
//     auto it3 = s.find(5);
//     s.erase(it1, it3); //erases from it1 to it3 (not including it3)
//     cout << "\nIs set empty? " << s.empty(); //0 (false)

//     auto itlow = s.lower_bound(2); //iterator to first element >= 2
//     auto itup = s.upper_bound(2); //iterator to first element > 2
// }
// void explain_multiset(){ //stores multiple occurrences of elements in sorted order
//     multiset<int> ms;
//     ms.insert(1); //{1}
//     ms.insert(1); //{1,1}
//     ms.insert(2); //{1,1,2}
//     ms.insert(2); //{1,1,2,2}
//     ms.insert(3); //{1,1,2,2,3}

//     for (auto it : ms){
//         cout << it << " "; //1 1 2 2 3
//     }
//     cout << "\nMultiset size: " << ms.size(); //5

//     ms.erase(2); //erases all occurrences of 2
//     cout << "\nAfter erase(2): ";
//     for (auto it : ms){
//         cout << it << " "; //1 1 3
//     }

//     auto it = ms.find(1); //iterator to first occurrence of 1
//     ms.erase(it); //erases one occurrence of 1
//     cout << "\nAfter erasing one occurrence of 1: ";
//     for (auto it : ms){
//         cout << it << " "; //1 3
//     }

//     int count = ms.count(1); //1 (one occurrence of 1)
// }
// void explain_Uset(){ //unordered set, stores unique elements in arbitrary order
//     unordered_set<int> us;
//     us.insert(3); //{3}
//     us.emplace(1); //{1,3}
//     us.insert(2); //{1,2,3}
//     us.insert(2); //{1,2,3} (no duplicates)

//     for (auto it : us){
//         cout << it << " "; //order may vary
//     }
//     cout << "\nUnordered set size: " << us.size(); //3

//     auto it = us.find(2); //iterator to element 2
//     auto it2 = us.find(8); //iterator to element 8 (not found, it2 = us.end())

//     us.erase(2);
//     cout << "\nAfter erase(2): ";
//     for (auto it : us){
//         cout << it << " "; //order may vary
//     }

//     int count = us.count(2); //0 (does not exist)
//     cout << "\nIs unordered set empty? " << us.empty(); //0 (false)
// }
// void explain_map(){ //stores key-value pairs in sorted order of keys
//     map<int, string> mp;
//     mp[1] = "One";
//     mp.emplace(2, "Two");
//     mp[3] = "Three";

//     for (auto it : mp){
//         cout << it.first << " " << it.second << endl; //1 One \n 2 Two \n 3 Three
//     }

//     cout << "Map size: " << mp.size() << endl; //3

//     auto it = mp.find(2); //iterator to key 2
//     if (it != mp.end()){
//         cout << "Found key 2 with value: " << it->second << endl;
//     }

//     mp.erase(3); //erases key 3
//     cout << "After erase(3):" << endl;
//     for (auto it : mp){
//         cout << it.first << " " << it.second << endl; //1 One \n 2 Two
//     }

//     cout << "Is map empty? " << mp.empty() << endl; //0 (false)
// }
// void explain_multimap(){ //stores multiple key-value pairs in sorted order of keys
//     multimap<int, string> mmp;
//     mmp.insert({1, "One"});
//     mmp.emplace(1, "Uno");
//     mmp.insert({2, "Two"});
//     mmp.insert({2, "Dos"});

//     for (auto it : mmp){
//         cout << it.first << " " << it.second << endl; //1 One \n 1 Uno \n 2 Two \n 2 Dos
//     }

//     cout << "Multimap size: " << mmp.size() << endl; //4

//     auto range = mmp.equal_range(1);
//     cout << "Elements with key 1:" << endl;
//     for (auto it = range.first; it != range.second; ++it){
//         cout << it->first << " " << it->second << endl; //1 One \n 1 Uno
//     }

//     mmp.erase(2); //erases all entries with key 2
//     cout << "After erase(2):" << endl;
//     for (auto it : mmp){
//         cout << it.first << " " << it.second << endl; //1 One \n 1 Uno
//     }

//     cout << "Is multimap empty? " << mmp.empty() << endl; //0 (false)
// }
// void explain_Umap(){ //unordered map, stores key-value pairs in arbitrary order
//     unordered_map<int, string> ump;
//     ump[1] = "One";
//     ump.emplace(2, "Two");
//     ump[3] = "Three";

//     for (auto it : ump){
//         cout << it.first << " " << it.second << endl; //order may vary
//     }

//     cout << "Unordered map size: " << ump.size() << endl; //3

//     auto it = ump.find(2); //iterator to key 2
//     if (it != ump.end()){
//         cout << "Found key 2 with value: " << it->second << endl;
//     }

//     ump.erase(3); //erases key 3
//     cout << "After erase(3):" << endl;
//     for (auto it : ump){
//         cout << it.first << " " << it.second << endl; //order may vary
//     }

//     cout << "Is unordered map empty? " << ump.empty() << endl; //0 (false)
// }
// bool comp(pair<int,int> p1, pair<int,int> p2){
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;
//     //these are equal
//     if(p1.first > p2.first) return true;
//     return false;
// }
// void explain_extra(){
//     //sort
//     int a[] = {4, 2, 5, 1, 3};
//     int n = sizeof(a)/sizeof(a[0]);
//     vector<int> v = {4, 2, 5, 1, 3};
//     sort(a, a+n); //sorts array a of size n in ascending order
//     sort(v.begin(), v.end()); //sorts vector v in ascending order
//     sort(a+2 , a+4); //sorts from index 2 to 3
//     sort(a, a+n, greater<int>()); //sorts array a in descending order
//     sort(v.begin(), v.end(), greater<int>()); //sorts vector v in descending order
//     pair<int,int> a[] = {{1,3}, {2,2}, {3,3}, {4,1}};
//     // sort it according to second element
//     // if second element is same, then sort
//     // it according to first element but in descending
//     sort(a, a+n, comp); //using custom comparator function //{4,1}, {2,2}, {1,3}, {3,3}

//     int num = 5;

//     int cnt = __builtin_popcount(num); //number of set bits in num (for int)
//     long long num2 = 10982138293;
//     int cnt2 = __builtin_popcountll(num2); //number of set bits in num2 (for long long)

//     string str = "12345";
//     sort (str.begin(), str.end()); //sorts the string in lexicographical order
//     do
//     {
//         cout<< str << endl; //prints all permutations of str
//     } while (next_permutation(str.begin(), str.end()));
//     int maxi = *max_element(a, a+n); //maximum element in array a of size n
//     int mini = *min_element(v.begin(), v.end()); //minimum element in vector v

// }

// int main() {
//     explain_Deque();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void explain_pair()
{
    pair<int, string> p1 = {1, "Hello"};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<string, int>> p2 = {2, {"World", 2024}};
    cout << p2.first << " "
         << p2.second.second << " "
         << p2.second.first << endl;
}

void explain_vector()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for (auto it : vec)
        cout << it << " ";

    vec.erase(vec.begin() + 2);
    cout << "\nAfter erase: ";
    for (auto it : vec)
        cout << it << " ";

    vec.erase(vec.begin() + 1, vec.end() - 1);
    cout << "\nAfter erase: ";
    for (auto it : vec)
        cout << it << " ";

    vec.insert(vec.begin() + 1, 2);
    vec.insert(vec.begin() + 2, 3, 4);

    vector<int> copy(2, 100);
    vec.insert(vec.begin(), copy.begin(), copy.end());

    cout << "\nAfter insert: ";
    for (auto it : vec)
        cout << it << " ";

    vec.pop_back();
    cout << "\nAfter pop_back: ";
    for (auto it : vec)
        cout << it << " ";

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    v1.swap(v2);

    cout << "\nAfter swap v1: ";
    for (auto it : v1)
        cout << it << " ";

    cout << "\nAfter swap v2: ";
    for (auto it : v2)
        cout << it << " ";

    cout << "\nVector empty or not: " << v1.empty();
    v1.clear();
    cout << "\nVector size after clear: " << v1.size();
}

void explain_list()
{
    list<int> lst = {1, 2, 3, 4, 5};
    lst.push_back(6);
    lst.push_front(0);

    lst.pop_back();
    lst.pop_front();

    lst.remove(3);
    for (auto it : lst)
        cout << it << " ";
}

void explain_Deque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.emplace_front(-1);

    dq.pop_front();
    dq.pop_back();

    for (auto it : dq)
        cout << it << " ";
}

void explain_stack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
}

void explain_queue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back() += 5;
    q.pop();
}

void explain_priority_queue()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(1);
    pq.pop();

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);
    minHeap.emplace(1);
    minHeap.pop();
}

void explain_set()
{
    set<int> s;
    s.insert(3);
    s.emplace(1);
    s.insert(2);

    auto it2 = s.find(2);
    if (it2 != s.end())
        s.erase(it2);

    auto it3 = s.find(3);
    if (it3 != s.end())
        s.erase(it3);

    auto it1 = s.find(1);
    auto it4 = s.find(5);
    if (it1 != s.end())
        s.erase(it1, it4);
}

void explain_multiset()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    ms.erase(2);

    auto it = ms.find(1);
    if (it != ms.end())
        ms.erase(it);
}

void explain_Uset()
{
    unordered_set<int> us;
    us.insert(3);
    us.emplace(1);
    us.insert(2);
    us.erase(2);
}

void explain_map()
{
    map<int, string> mp;
    mp[1] = "One";
    mp.emplace(2, "Two");
    mp[3] = "Three";
    mp.erase(3);
}

void explain_multimap()
{
    multimap<int, string> mmp;
    mmp.insert({1, "One"});
    mmp.emplace(1, "Uno");
    mmp.insert({2, "Two"});
    mmp.insert({2, "Dos"});
    mmp.erase(2);
}

void explain_Umap()
{
    unordered_map<int, string> ump;
    ump[1] = "One";
    ump.emplace(2, "Two");
    ump[3] = "Three";
    ump.erase(3);
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second != p2.second)
        return p1.second < p2.second;
    return p1.first > p2.first;
}

void explain_extra()
{
    int arr[] = {4, 2, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v = {4, 2, 5, 1, 3};

    sort(arr, arr + n);
    sort(v.begin(), v.end());
    sort(arr + 2, arr + 4);
    sort(arr, arr + n, greater<int>());
    sort(v.begin(), v.end(), greater<int>());

    pair<int, int> pr[] = {{1, 3}, {2, 2}, {3, 3}, {4, 1}};
    int n2 = sizeof(pr) / sizeof(pr[0]);
    sort(pr, pr + n2, comp);

    int num = 5;
    int cnt = __builtin_popcount(num);

    long long num2 = 10982138293LL;
    int cnt2 = __builtin_popcountll(num2);

    string str = "12345";
    sort(str.begin(), str.end());
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    auto maxi = *max_element(arr, arr + n);
    auto mini = *min_element(v.begin(), v.end());
}

int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    return 0;
}

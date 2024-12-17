#include <bits/stdc++.h>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

//************************************************DEFiNED FUNCTION//*********************************************

#define int long long
#define pb push_back
#define F first
#define S second
#define pb push_back
#define sz(x) ((int)(x).size())
#define inv(a, n)               \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define fl(i, a, b) for (int i = a; i < b; i++)
#define rfl(i, a, b) for (int i = a; i > b; i--)
#define PIE 3.141592653589793238462
#define set_bits __builtin_popcountll
#define lld long double
#define string_to_int stoull(s, 0, 2)
#define vll vector<int>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define pi pair<int, int>
#define vpi vector<pll>
#define mem(arr, v) memset(arr, v, sizeof(arr))
#define nn "\n"
#define ull unsigned long long
#define no cout << "NO" << nn
#define yes cout << "YES" << nn
#define INF 1e18
#define sp(x, y) fixed << setprecision(y) << x

const int M = 1000000007;
const int M1 = 998244353;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // *find_by_order, order_of_key

/*+++++++++++++++++++++++++++++++++++++++++++++++DEBUG++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define print(x) \
    ;            \
    _kasu(x);    \
    cout << nn
void _kasu(int t) { cout << t; }
void _kasu(string t) { cout << t; }
void _kasu(char t) { cout << t; }
void _kasu(lld t) { cout << t; }
void _kasu(double t) { cout << t; }
void _kasu(ull t) { cout << t; }
// void     _kasu(ll t) {cout << t;}
template <class T>
void _kasu(stack<T> v)
{
    while (!v.empty())
    {
        _kasu(v.top());
        cout << ' ';
        v.pop();
    }
}
template <class T>
void _kasu(list<T> v)
{
    for (auto i : v)
    {
        _kasu(i);
        cout << ' ';
    }
}
template <class T, class V>
void _kasu(pair<T, V> p)
{
    _kasu(p.first);
    cout << ' ';
    _kasu(p.second);
}
template <class T>
void _kasu(vector<T> v)
{
    for (T i : v)
    {
        _kasu(i);
        cout << ' ';
    }
}
template <class T>
void _kasu(set<T> v)
{
    for (T i : v)
    {
        _kasu(i);
        cout << ' ';
    }
}
template <class T>
void _kasu(multiset<T> v)
{
    for (T i : v)
    {
        _kasu(i);
        cout << ' ';
    }
}
template <class T1, class T2>
void _kasu(map<T1, T2> m)
{
    for (auto x : m)
        cout << x.F << "->" << x.S << nn;
    cout << nn;
}
template <class T1, class T2>
void _kasu(unordered_map<T1, T2> m)
{
    for (auto x : m)
        cout << x.F << "->" << x.S << nn;
    cout << nn;
}
template <class T1, class T2>
void _kasu(map<T1, vector<T2>> m)
{
    for (auto x : m)
    {
        cout << x.F << "->";
        _kasu(x.S);
    }
    cout << nn;
}
template <class T1, class T2>
void _kasu(unordered_map<T1, vector<T2>> m)
{
    for (auto x : m)
    {
        cout << x.F << "->";
        _kasu(x.S);
    }
    cout << nn;
}
//+++++++++++++++++++++++++++++++++++++++++Debuging  ends++++++++++++++++++++++++++++++++++++++++++

//++++++++++++++++++++++++++++++++++++++Sorting+++++++++++++++++++++++++++++++++++++++++++++++++++
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
class Person
{
public:
    string name;
    int age;
    Person()
    {
        cout << "Base" << endl;
    }
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "Base" << endl;
    }
};
class Student : public Person
{
public:
    int rollno;
    void getinfo()
    {
        cout << " name : " << name << endl;
        cout << " age : " << age << endl;
        cout << " rollno : " << rollno << endl;
    }
    Student(int age, string s1, int roll) : Person(age, name)
    {
        cout << "Child" << endl;
    }
};

signed main()
{

    Student s1(23, "Kaushik", 12);

    s1.getinfo();
    return 0;
}
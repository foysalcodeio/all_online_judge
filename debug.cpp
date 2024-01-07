#include<bits/stdc++.h>
using namespace std;

void debug(int x) {cerr << x;}
void debug(long x) {cerr << x;}
void debug(long long x) {cerr << x;}
void debug(unsigned x) {cerr << x;}
void debug(unsigned long x) {cerr << x;}
void debug(unsigned long long x) {cerr << x;}
void debug(float x) {cerr << x;}
void debug(double x) {cerr << x;}
void debug(long double x) {cerr << x;}
void debug(char x) {cerr << '\'' << x << '\'';}
void debug(const char *x) {cerr << '\"' << x << '\"';}
void debug(const string &x) {cerr << '\"' << x << '\"';}
void debug(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>void debug(const pair<T, V> &x);
template<typename T>void debug(const T &x) {int comma = 0; cerr << '{'; for (auto &i: x) cerr << (comma++ ? ", " : ""), debug(i); cerr << "}";}
template<typename T, typename V>void debug(const pair<T, V> &x) {cerr << '{'; debug(x.first); cerr << ", "; debug(x.second); cerr << '}';}
template<typename T> void debug(stack<T> st) { cerr << " "; while(!st.empty()) { cerr << debug(st.top()) << " "; debug(st.pop()); }}
template<typename T> void debug(queue<T> que) { while(!que.empty()) { cerr << debug(que.front()) << " "; debug(que.pop()); }}
template<typename T> void debug(deque<T> dque) { while(!dque.empty()) { cerr << debug(dque.front()) << " "; debug(dque.pop_front()); }}
void dbg() {cerr << "]\n";}template <typename T, typename... V>void dbg(T t, V... v) {debug(t); if (sizeof...(v)) cerr << ", "; dbg(v...);}

#ifdef DEBUG
#define dbg(x...) cerr << "\e[34m"<<__func__<<":"<<__LINE__<<" [" << #x << "]\e[39m = \e[32m["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...) 32
#endif

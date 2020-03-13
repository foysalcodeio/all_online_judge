#include <cstdio>
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <algorithm>
using namespace std;
#define SQR(x) ((x)*(x))
#define PI 2*acos(0)
#define EPS 1e-7
#define MAX 200

typedef int ET;
enum{CCW,CW,CL};
struct Point{
    ET x;
    ET y;
    Point(){
        x=0;
        y=0;
        }
    Point(ET x, ET y){
    this->x = x;
    this->y = y;
    }
};
Point p[MAX], c[MAX];

double dist(const Point &a, const Point &b){
    return sqrt(SQR(a.x-b.x)+SQR(a.y-b.y));
}
double sqr_dist(const Point &a, const Point &b){
    return SQR(a.x-b.x)+SQR(a.y-b.y);
}


inline double triArea(const Point &a, const Point &b, const Point &c) {
	return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}

inline bool comp(const Point &b, const Point &c) {
	ET d = triArea(p[0], b, c);
	if(d > 0) return true;
	if(d <0)return false;
	return sqr_dist(p[0],b)<sqr_dist(p[0],c);
}
inline bool issame(const Point& a, const Point& b){
    if(a.x==b.x&&a.y==b.y)return true;
    return false;
}
void compress(int &nc) {
    int i, j, d;
    c[nc] = c[0];
    for(i=j=1; i < nc; i++) {
        d = triArea(c[j-1], c[i], c[i+1]);
        if(d || (!d && issame(c[j-1], c[i+1]))) c[j++] = c[i];
    }
    nc = j;
}
void convexHull(int &np, int &nc) {
	int i, top,pos = 0;
	for(i = 1; i < np; i++)
		if(p[i].y<p[pos].y || (p[i].y==p[pos].y && p[i].x<p[pos].x))
			pos = i;
	swap(p[0], p[pos]);
	sort(&p[1], &p[np], comp);
	np =unique(&p[0],&p[0]+np,issame)-p;
	for(i = 0; i < 2; i++) c[i] = p[i];
	for(i = 2,top = 1; i < np; i++) {
		while(top>0&&triArea(c[top-1], c[top], p[i]) <= 0) top--;
		c[++top] = p[i];
	}
	nc = top+1;

	compress(nc);
}



int main(){
    freopen("input.txt","r",stdin);
    int np,nc;
    scanf("%d", &np);
    for(int i=0;i<np;i++)cin>> p[i].x >> p[i].y;

    convexHull(np,nc);
    for(int i=0;i<nc;i++)cout << c[i].x << " " << c[i].y << endl;
return 0;
}

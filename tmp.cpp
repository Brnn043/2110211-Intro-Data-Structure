#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int score;
    Student(string a,int b) {
        name=a;
        score=b;
    }
    // bool operator< (const Student &other) const{
    //     int score1=-score,score2=-other.score;
    //     return tie(name,score1)>tie(other.name,score2);
    // } 
};

class SortStudent {
    public:
    bool operator() (const Student &left, const Student &right) const {
        return tie(left.name,left.score) < tie(right.name,right.score);
    } 
};

priority_queue<Student,vector<Student>,SortStudent> pq;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Student a("a",10);
    Student b("b",2);
    Student c("c",3);
    Student a1("a",3);
    pq.push(a);
    pq.push(b);
    pq.push(c);
    pq.push(a1);
    while(!pq.empty()) {
        Student u =pq.top();
        pq.pop();
        cout<<u.name<<" : "<<u.score<<'\n';
    }
}
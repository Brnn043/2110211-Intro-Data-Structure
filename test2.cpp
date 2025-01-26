#include <bits/stdc++.h>
using namespace std;

class test{
    public:
        char a;
        int b;
        // void setA(char a) {
        //     this->a = a;
        // }
        void setA(char b); // cannot be in protected
        test() {}
        test(char a,int b) : a(a) ,b(b) {}
};

void test::setA(char a) {
    this->a = a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int* x = new int[5]();
    // for(int i=0;i<5;i++) {
    //     cout<<x[i]<<" ";
    // }

    // cout<<"\n--------\n";
    // test *y = new test[5]();
    // for(int i=0;i<5;i++) {
    //     cout<<y[i].a<<' '<<y[i].b<<'\n';
    // }

    // int a=0;
    // do {
    //     cout<<a<<'\n';
    //     a++;
    // } while(a<10);


    // pair<string,int> p;
    // cout<<p.first<<' '<<p.second<<'\n';

    // vector<int> v(3,2);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';
    // v.resize(5,1);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';
    // v.resize(5);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';
    // v.resize(6);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';

    // v.insert(v.end()+1,3);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';

    // cout<<*v.end();

    // v.resize(v.size()+1);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';

    // v.insert(v.begin()-1,7);
    // for(auto &x:v) cout<<x<<' ';
    // cout<<'\n';

    test tst('4',3);
    cout<<tst.a<<'\n';
    tst.setA('b');
    cout<<tst.a<<'\n';
}
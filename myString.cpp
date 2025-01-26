#include <bits/stdc++.h>
using namespace std;

class MyString {
    public:
        string data;
        MyString() : data("default") {}

        MyString& operator++() {
            for(char &c: this->data) {
                ++c;
            }
            return *this;
        }

        MyString operator++(int) {
            MyString tmp = *this;
            for(char &c: this->data) {
                ++c;
            }
            return tmp;
        }

        MyString& operator=(const MyString &s) {
            data=s.data;
            return *this;
        }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    MyString tmp,tmp2;
    cout<<tmp.data<<'\n';
    tmp2 = tmp++;
    cout<<tmp.data<<'\n';
    cout<<tmp2.data<<'\n';

    // tmp.data = "hello";
    // cout<<tmp.data<<'\n';
    // tmp2 = tmp;
    // cout<<tmp2.data<<'\n';
    // tmp.data = "hi";
    // cout<<tmp2.data<<'\n';
}
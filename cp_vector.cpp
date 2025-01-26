#include <iostream>
using namespace std;

namespace CP {
template <typename T> // template is defind before sth such as class funtion
class vector {
    protected:
        T *mData;
        size_t mCap;
        size_t mSize;

        void expand(size_t capacity) {
            T *arr = new T[capacity]; //is this correct
            for(size_t i =0;i<mSize;i++) {
                arr[i]=mData[i];
            }
            delete [] mData;
            mData=arr;
            mCap=capacity;
        }

        void rangeCheck(int n) {
            if(n<0 || (size_t)n>=mCap) {
                throw out_of_range("index out of range");
            }
        }

        void ensureCapacity(size_t capacity) {
            if(capacity>mCap) { 
                size_t s = capacity>2*mCap? capacity : 2*mCap;
                expand(s); 
            }
        }

    public:

        vector() : mData(nullptr), mCap(0), mSize(0) {}

        vector(const vector<T> &a) {
            mData = new T[a.capacity()]();
            mCap = a.capacity();
            mSize = a.size();
            for(size_t i=0;i<a.size();i++) {
                mData[i]=a[i];
            }
        }

        ~vector() {
            delete [] mData;
        }

        // vector<T>& operator=(vector<T> &other) {
        //     if(mData!=other.mData) {
        //         delete [] mData;
        //         mData = new T[other.capacity()]();
        //         mSize = other.size();
        //         mCap = other.capacity();
        //         for(size_t i =0;i<mSize;i++) mData[i]=other[i];
        //     }
        //     return *this;
        // }

        vector<T>& operator=(vector<T> other) { //pass by value
            swap(mData,other.mData);
            swap(mSize,other.mSize);
            swap(mCap,other.mCap);
            return *this;
        }

        T& at(int idx) {
            rangeCheck(mSize+1);
            return mData[idx];
        }

        T& operator[] (int idx) {
            return mData[idx];
        }

        T& operator[] (int idx) const {
            return mData[idx];
        }

        void push_back(const T& element) {
            ensureCapacity(mSize+1);
            mData[mSize++]=element;
        }

        void pop_back() {
            mSize--;
        }

        bool empty() const {
            return mSize==0;
        }

        size_t size() const {
            return mSize;
        }

        size_t capacity() const {
            return mCap;
        }

        typedef T* iterator;

        iterator begin() {
            return &mData[0];
        }

        iterator end() {
            return begin()+mSize;
        }

        iterator insert(iterator it,const T& element) {
            size_t pos = it-begin();
            ensureCapacity(mSize+1);
            for(size_t i = mSize;i>pos;i--) {
                mData[i]=mData[i-1];
            }
            mData[pos]=element;
            mSize++;
            return begin()+pos;
        }

        void erase(iterator it) {
            while((it+1)!=end()) {
                *it=*(it+1);
                it++;
            }
            mSize--;
        }
};
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    CP::vector<int> v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    v1=v2;
    cout<<v1[0];
}
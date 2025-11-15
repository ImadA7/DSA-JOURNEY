#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Heap{
    vector<int> vec;
public:
    void push(int val){
        //step1
        vec.push_back(val);
        ///fix heap
        int x= vec.size()-1;
        int parI=(x-1)/2;
        while(parI>=0 && vec[x]>vec[parI]){//max heap
            swap(vec[x],vec[parI]);
            x=parI;
            parI=(x-1)/2;
        }
    }

    void heapify(int i){
        if(i>=vec.size()){
            return;
        }
        int l= 2*i+1;
        int r=2*i+2;
        int maxIdx=i;
        if(l<vec.size() && vec[l]>vec[maxIdx]){
            maxIdx=l;
        }
        if(r<vec.size() && vec[r]>vec[maxIdx]){
            maxIdx=r;
        }
        swap(i,maxIdx);
        if(maxIdx!=i){//swapping with child node
            heapify(maxIdx);

        }

    }

    void pop(){
        //step1
        swap(vec[0],vec[vec.size()-1]);
        //step2
        vec.pop_back();
        //step3
        heapify(0);//o(logn)

    }

    void top(){
        return vec[0];//highest prioirty eleent
    }

    bool empty(){
        return vec.size()==0;
    }
}

class Student{ //"<" overload
public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name=name;
        this->marks=marks;

    }

    bool operator < (const Studdnt &obj) const {
        return this->marks<obj.marks;
    }


}

int main()
{
    priority_queue<Student> pq;
    pq.push(Student("aman",85));
    pq.push(Student("imad",95));
    pq.push(Student("ayan",65));
    while(!pq.empty()){
        cout<<"top="<<<pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}

//last vido of this day is left
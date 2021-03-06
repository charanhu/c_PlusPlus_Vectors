#include <iostream>
#include <list>
using namespace std;


void dispaly(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){
    list<int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    dispaly(list1);
    list1.sort();
    dispaly(list1);
    list1.pop_back();
    dispaly(list1);
    list1.pop_front();
    dispaly(list1);
    list1.remove(7);
    dispaly(list1);

    list<int> list2(3);
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=5;
    iter++;
    *iter=25;
    iter++;
    dispaly(list2);
    list1.merge(list2);
    dispaly(list1);
    list1.sort();
    dispaly(list1);
    list1.push_front(13);
    dispaly(list1);
    list1.sort();
    dispaly(list1);
    list1.reverse();
    dispaly(list1);
   return 0;
}

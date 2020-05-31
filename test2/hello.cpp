#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

typedef pair<pair<int, int>, string> VarAssign;
typedef set<VarAssign> VarSet;
typedef map<VarAssign, VarSet> DerivMap;

int main() {
    DerivMap derivMap_;
    VarSet deriv_;
    VarAssign var0(make_pair(1, 1), "a");
    VarAssign var1(make_pair(2, 1), "b");
    VarAssign var2(make_pair(3, 1), "c");
    VarAssign var3(make_pair(4, 2), "a");
    VarAssign var4(make_pair(5, 1), "d");
    VarAssign var5(make_pair(6, 1), "e");
    VarAssign var6(make_pair(7, 2), "b");
    VarAssign var7(make_pair(8, 2), "c");
    VarAssign var8(make_pair(9, 3), "a");
    VarAssign var9(make_pair(10, 2), "e");

    deriv_.insert(var0);
    deriv_.insert(var3);
    deriv_.insert(var7);
    deriv_.insert(var9);
    deriv_.insert(var1);
    deriv_.insert(var2);
    deriv_.insert(var5);
    deriv_.insert(var6);
    deriv_.insert(var8);
    deriv_.insert(var4);

    VarSet::const_iterator iter = deriv_.begin();
    for (; iter != deriv_.end(); ++iter) {
        cout << iter->second << "$" << iter->first.first << "  <===>  " << iter->second << "$" << iter->first.second << endl;
    }
}
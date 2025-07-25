#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
void push_on_vec_morethanone(int p, vector<int> &vec, int &carry) {
    for (int i = 0; i < vec.size(); i++) {
        int prod = vec[i] * p + carry;
        vec[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry > 0) {
        vec.push_back(carry % 10);
        carry /= 10;
    }
}

void printVec(vector<int> vec) {
    for (int i = vec.size() - 1; i >= 0; i--) {
        cout << vec[i];
    }
    cout << endl;
}

int main(){
	 int n, carry = 0;
	 cout<<"enter the number u want to enter:";
    cin >> n;

    vector<int> vec;
    vec.push_back(1); 

    for (int i = 2; i <= n; i++) {
        carry = 0;
        push_on_vec_morethanone(i, vec, carry);
    }

    printVec(vec);
    // long long int val=vecval(vec);
    // printf("%lld",val);//overflow
    return 0;
		}
		
		
	 



1.// Problem name: U. Some Sums  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;
    for (int i = 1; i <= N; ++i) {
        int sum = digitSum(i);
        if (sum >= A && sum <= B) {
            total += i;
        }
    }

    cout << total << endl;
}

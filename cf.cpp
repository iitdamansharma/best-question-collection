he distance of a value x
 in an array c
, denoted as dx(c)
, is defined as the largest gap between any two occurrences of x
 in c
.

Formally, dx(c)=max(j−i)
 over all pairs i<j
 where ci=cj=x
. If x
 appears only once or not at all in c
, then dx(c)=0
.

The beauty of an array is the sum of the distances of each distinct value in the array. Formally, the beauty of an array c
 is equal to ∑1≤x≤ndx(c)
.

Given an array a
 of length n
, an array b
 is nice if it also has length n
 and its elements satisfy 1≤bi≤ai
 for all 1≤i≤n
. Your task is to find the maximum possible beauty of any nice array.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — the elements of array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer representing the maximum possible beauty among all nice arrays.

Example
InputCopy
4
4
1 2 1 2
2
2 2
10
1 2 1 5 1 2 2 1 1 2
8
1 5 2 8 4 1 4 2
OutputCopy
4
1
16
16
Note
In the first test case, if b=[1,2,1,2]
, then d1(b)=3−1=2
 and d2(b)=4−2=2
, resulting in a beauty of 2+2=4
. It can be proven that there are no nice arrays with a beauty greater than 4
.

In the second test case, both b=[1,1]
 and b=[2,2]
 are valid solutions with a beauty of 1
.

In the third test case, if b=[1,2,1,4,1,2,1,1,1,2]
 with d1(b)=9−1=8
, d2(b)=10−2=8
, and d4(b)=0
, resulting in a beauty of 16
.



write solution in c++
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main() {
//     ios_base::sync_with_stdio(0);

//     cin.tie(0);
//     cout.tie(0);     
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         vector<int> b(n);
//         vector<int> cnt(n + 1, 0):
//         vector<int> last(n + 1, -1);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             cnt[a[i]]++;
//             last[a[i]] = i;
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> b[i];
//         }
//         vector<int> dp(n + 1, 0);
//         for (int i = 1; i <= n; i++) {

//             if (cnt[i] == 0) {
//                 dp[i] = dp[i - 1];
//             } else {
//                 dp[i] = max(dp[i - 1], dp[i - 1] + last[i] - i + 1);

//             }
//         }
//         cout << dp[n] << endl;
//     }
//     return 0;
// }
// }
 #include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);     
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> cnt(n + 1, 0);
        vector<int> last(n + 1, -1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
            last[a[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {

            if (cnt[i] == 0) {
                dp[i] = dp[i - 1];
            } else {
                dp[i] = max(dp[i - 1], dp[i - 1] + last[i] - i + 1);

            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}






/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/13
|Time: 20:37:36
|Problem: L_Balanced_Brackets
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e5 + 5
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
#define int long long

int nCr(int n, int r){ int ans=1; for(int i=1;i<=r;i++){ ans=ans*(n-i+1)/i; } return ans; }

int fact(int n){if (n <= 1)return 1;return n*fact(n-1);}

int nPr(int n, int r){return fact(n)/fact(n-r);}

int intDigitSum(int n){int sum = 0; while(n){sum += n % 10; n /= 10;} return sum;}

int strDigitSum(string s){int sum = 0; for(int i = 0; i < s.size(); i++){sum += (s[i] - '0');} return sum;}

vector<int> prime(N, 1);
void seive(){ prime[0] = prime[1] = 0; for(int i = 2; i * i <= N; i++){ if(prime[i] == 1){ for(int j = i * i; j <= N; j += i){ prime[j] = 0;}}}}

int trailZero(int n){ int ans = 0; while(n > 0){ n /= 5; ans += n; } return ans; }

//lamda function
auto compare = [](const pair<int, int>& a, const pair<int, int>& b) { if (a.first > b.first) { return true; } else if (a.first == b.first) { return a.second < b.second; } return false; };


void solve() {

    tc{
        string s; cin >> s;
        stack<char> q;
        bool f = false;
        for(int i = 0; i < s.length(); i++){
            if(q.empty()){
                q.push(s[i]);
            }
            else{
                if(s[i] == ')' and q.top() == '('){
                    // cout << q.top() << endl;
                    q.pop();
                }
                else if(s[i] == '}' and q.top() == '{'){
                    // cout << q.top() << endl;
                    q.pop();

                }
                else if(s[i] == ']' and q.top() == '['){
                    // cout << q.top() << endl;
                    q.pop();

                }
                else{
                    q.push(s[i]);
                }
            }
        }
        if(q.size() == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
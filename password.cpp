#include <iostream>

using namespace std;

string _reverse(string s)
{
    string ans = "";
    for(int i = s.length()-1; i >= 0; i--)
        ans += s[i];
    return ans;
}

int main()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    string ans;
    int num;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(s[j] == _reverse(s[i])) {
                ans = s[i];
                num = s[i].length();
            }
        }
    }
    cout << num << ' ' << ans[(num-1)/2];
}

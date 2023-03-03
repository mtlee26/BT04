#include <iostream>

using namespace std;

int sum(int a[], int n)
{
    int ans = 0;
    for(int i = 1; i < n; i++){
        ans += a[i];
    }
    return ans;
}

bool check(int a[], int n)
{
    int sum_left = 0;
    int sum_right = sum(a, n);
    for(int i = 0; i < n; i++){
        if(sum_left == sum_right) return true;
        else {
            sum_left += a[i];
            sum_right -= a[i+1];
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
            cin >> a[j];
        if(check(a, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

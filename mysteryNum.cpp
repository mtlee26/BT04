#include <iostream>

using namespace std;

void sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] < a[i]){
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n], b[n+1];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n+1; i++)
        cin >> b[i];
    sort(a, n);
    sort(b, n+1);
    for(int i = 0; i < n+1; i++){
        if(a[i] != b[i]) {
            cout << b[i];
            break;
        }
    }
    return 0;
}

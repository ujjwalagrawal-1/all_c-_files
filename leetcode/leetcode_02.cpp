#include <iostream>
using namespace std;
/*
void input(int arr[], int size){
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}
void output(int arr[] ,int s){
  for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }  
}
int main() {
    int array1[100];
    int s;
    cin>>s;
input(array1 ,s);
int left = 0; int right = s - 1;
while(left < right){
    while(array1[left] == 0 && left < right){
        left ++;
    }
    while(array1[right] == 1 && left<right){
        right--;
    }
    if(array1[left] == 1 && array1[right] == 0 && left<right){
        swap(array1[left],array1[right]);
    }
}
output(array1,s);
}

*/
int sqrtininteger(int n){
    int s = 0;
    int e = n;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        int square = mid*mid;
        if(square == n){
            ans = mid ;
        }
        if(square > n){
            e = mid -1;
        }
        else{
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s)/2;
    }
    cout<<ans<<endl;
}
int precised(int n , int prec ,int tempsqrt){
    int factor = 1;
    int ans = tempsqrt;
    for(int i = 0;i<prec;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j = j + factor){
            ans = j;
        }
        }
        return ans;
     
}

 int main () {
    int n;
    cin>>n;
   // return sqrtininteger(n);
    return precised(n,5,sqrtininteger);
 }
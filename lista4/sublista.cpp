#include <iostream>
unsigned int sublista(int a[], int n){
    unsigned int ans = 1, current = 1;
    for(int i=1; i<n; i++){
        if(a[i-1] > a[i]){
            current =1;

        }else{
            current = current +1;
        }
        if(current > ans) ans = current;
    } 
    return ans;
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for (auto &x: a) std::cin >> x;
    auto result = sublista(a,n);
    std::cout << result << std::endl;
    return 0;
}
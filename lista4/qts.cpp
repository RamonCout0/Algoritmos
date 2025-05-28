
//1
int fA(int n){ // 
int i,a=1; // 3
for ( i=0 ; i < n ; i= i+1 ){ // 1, n, 2*n 
a += i; // 2*n
}
return a;// 1

// 3 + 1 + n + 2*n + 2*n + 1
// 4 + (2*n + 2*n + n)
// 5n + 5
// O(n)

//2
int fB(int n){
int i, a=1;// 3
for ( i=1 ; i<=n ; i∗=2 ){// 1, 1 *n, 2 * n
a += i; // 2*n
}
return a;//1
// 3 + 1 + 1 *n + 2 * n + 2 * n + 1
// 5 + ( 1*n + 2 *n + 2 * n)
// 5 + 5n
// O(n)
}

//3

int fC(int n){
int i,j,x=1,y;// 5
for ( i=0 ; i<n ; i++ ){//1, 1*n, 2*n
y = 2;// 1*n
for ( j=1 ; j<=n ; j++ ){//1 * n, 1n * n, 2n * n
y+=j;// 2n * n
}
x∗=y;// 2n
}
return x; //1
}
// 5 + 1 + 1 + 3*n + 1*n + 1 * n , 1n *n + 2n* n + 2n* n + 2n + 1
// 4 + 6n + 5 * n 

#include<iostream>
using namespace std;
int main() {
	int m;
	int n;
	cin>>n>>m;

	int A[20][20];
	
	for (int i=0;i<m;i++){
		for (int j= 0 ;j<n;j++){
			cin>> A[i][j];
		}
		cout<<A[20][20];
}

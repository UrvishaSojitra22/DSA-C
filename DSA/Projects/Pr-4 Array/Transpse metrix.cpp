#include<iostream>
using namespace std;
main(){
	int row,col,a[50][50],i,j;
	cout<<"Enter no row";
	cin>>row;
	cout<<"Enter no column";
	cin>>col;
	 for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){
	 		cin>>a[i][j];
		 }
	 }
	 cout<<"Print metrix A"<<endl;
	 for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){
	 		cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	  cout<<"Print metrix B"<<endl;
	 for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){
	 		cout<<a[j][i]<<" ";
		 }
		 cout<<endl;
	 }
}

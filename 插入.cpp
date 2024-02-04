#include<bits/stdc++.h>
using namespace std;
vector<int> InsertSort(vector<int>&nums){
	for(int i=1;i<nums.size();i++){//从第一个开始循环 
		int temp=nums[i];//用于8行对比 
		int j=i-1;
		for(j;j>=0 && nums[j]>temp;j--){//前面的数不能小于零和前面的数大于后面的数 
			nums[j+1] = nums[j];//j==1
		}//i==0 
		nums[j+1]=temp;//插入 
	}
	
	return nums;
}
int main(){
	int a;
	vector<int> nums;
	vector<int> num;
	for(int i=0;i<6;i++){
	cin>>a;
	nums.push_back(a);//插入数据
	}
	num=InsertSort(nums);
	for(int i=0;i<nums.size();i++)
	cout<<nums[i]<<' ';
	return 0;
}


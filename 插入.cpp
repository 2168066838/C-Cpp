#include<bits/stdc++.h>
using namespace std;
vector<int> InsertSort(vector<int>&nums){
	for(int i=1;i<nums.size();i++){//�ӵ�һ����ʼѭ�� 
		int temp=nums[i];//����8�жԱ� 
		int j=i-1;
		for(j;j>=0 && nums[j]>temp;j--){//ǰ���������С�����ǰ��������ں������ 
			nums[j+1] = nums[j];//j==1
		}//i==0 
		nums[j+1]=temp;//���� 
	}
	
	return nums;
}
int main(){
	int a;
	vector<int> nums;
	vector<int> num;
	for(int i=0;i<6;i++){
	cin>>a;
	nums.push_back(a);//��������
	}
	num=InsertSort(nums);
	for(int i=0;i<nums.size();i++)
	cout<<nums[i]<<' ';
	return 0;
}


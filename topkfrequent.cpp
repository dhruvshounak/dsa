#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

vector<int> topkelements(vector<int>& nums , int k){
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap; //first element frequency second element number
    for(auto& [num,count]:freq){
        minHeap.push({count,num});
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    vector<int> result;
    while(!minHeap.empty()){
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }
    return result;

}

int main(){
    vector<int> nums = {1,2,2,3,3,3};
    int k = 2;
    vector<int> res = topkelements(nums,k);
    cout << "Top " << k << " frequent elements:\n";
    for(int num:res){
        cout<<num<<"";
    }
    cout<<endl;
    
    return 0;
}




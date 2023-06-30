#include <bits/stdc++.h> 
class Minheap
{
    public:
    vector<int>heap;
    Minheap()
    {
        heap.push_back(-1);
    }

    void insert(int n)
    {
        heap.push_back(n);
        int index = heap.size()-1;

        while(index>1)
        {
            int parentidx = index/2;
            if(heap[parentidx]>heap[index])
            {
                swap(heap[parentidx], heap[index]);
                index = parentidx;
            }
            else
                return;
        }
    }

    int getMin()
    {
        if(heap.size()==1)
            return -1;
        int topEle = heap[1];
        heap[1] = heap.back();
        heap.pop_back();
    
        int idx = 1;
        while(idx<=heap.size()/2)
        {
            int left = 2*idx;
            int right = 2*idx+1;
            int largest = idx;
            if(left<heap.size()&&heap[idx]>heap[left])
            {
                largest = left;
            }
            if(right<heap.size()&&heap[largest]>heap[right])
            {
                largest = right;
            }

            if(idx==largest)
                break;
            swap(heap[idx], heap[largest]);
            idx = largest;
        }

        return topEle;
    }
};
vector<int> minHeap(int n, vector<vector<int>>& q) {
    vector<int>ans;
    Minheap m;
    for(auto &it:q)
    {
        int command = it[0];
        if(command == 1)
        {
            ans.push_back(m.getMin());
        }
        else{
            m.insert(it[1]);
        }
    }
    return ans;
}

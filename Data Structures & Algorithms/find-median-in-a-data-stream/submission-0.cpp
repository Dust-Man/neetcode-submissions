class MedianFinder {
private:
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> large;

public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        small.push(num);
        bool exists = small.size() > 0 and large.size() > 0;
        if(exists and small.top() > large.top()){
            large.push(small.top());
            small.pop();
        }
        
        if(small.size() > large.size() + 1){
            large.push(small.top());
            small.pop();
        }
        
        if(large.size() > small.size() + 1){
            small.push(large.top());
            large.pop();
        }
    }
    
    double findMedian() {
        if(small.size() > large.size()){
            return small.top();
        }
        if(large.size()>small.size()){
            return large.top();
        }
        return (small.top() + large.top()) / 2.;
    }
};

class MedianFinder {
public:
    priority_queue<int> q1;
    priority_queue <int, vector<int>, greater<int>> q2;
    int N;
    MedianFinder() {
        int N=0;
    }
    
    void addNum(int num) {
        N++;
        if(q1.empty() || num < q1.top()){
            q1.push(num);
        }
        else{
            q2.push(num);
        }
        if(q1.size() > q2.size() + 1) {
            q2.push(q1.top());
            q1.pop();
        }
        else if(q2.size() > q1.size() + 1) {
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    double findMedian() {
        // int N = q1.size() + q2.size(); //
        if(N&1) {
            if(q1.size() > q2.size()) {
                return (q1.top()*1.0);
            }
            else{
                return (q2.top()*1.0);
            }
        }
        else{
            return ((q1.top()*0.5)+(q2.top()*0.5));
        }
    }
    
    
    
    
    
    
    
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
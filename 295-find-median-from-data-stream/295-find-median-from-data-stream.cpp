class MedianFinder {
public:
    priority_queue<int> q1;
    priority_queue <int, vector<int>, greater<int>> q2;
    int N;
    MedianFinder() {
        N = 0;
    }
    
    void addNum(int num) {
        N++;
        if(q1.size() == 0 or q1.top() > num) {
            q1.push(num);
        }
        else {
            q2.push(num);
        }
        if(q1.size() > q2.size() + 1) {
            q2.push(q1.top());
            q1.pop();
        }
        if(q2.size() > q1.size() + 1) {
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    double findMedian() {
        if(N%2 == 0) {
            double v = q1.top() + q2.top();
            return v/2.0;
        }
        else {
            if(q1.size() > q2.size()) {
                return q1.top();
            }
            else if(q2.size() > q1.size()) {
                return q2.top();
            }
        }
        return 99.9;
    }






};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
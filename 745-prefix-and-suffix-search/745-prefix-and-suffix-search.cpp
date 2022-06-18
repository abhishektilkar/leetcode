// i
struct Node{
    Node *links[26];
    bool lag;
    
    bool contains(char Ch) {
        return (links[Ch-'a'] != NULL);
    }
    
    Node* getrefrence(char Ch){
        return links[Ch-'a'];
    }
    
    void put(char Ch, Node* node) {
        links[Ch-'a'] = node;
    }
    
    void setone(){
        lag = 1;
    }
    
    bool isone(){
        return (lag == 1);
    }
};
class Trie {
    private: Node * root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        
        int N = word.size();
        int i=0;
        
        while(i < N){
            
            if(!node->contains(word[i])){
                node->put(word[i],new Node());
            }
            node = node->getrefrence(word[i]);
            i++;
        }
        
        node->setone();
    }
    
    bool search(string word) {
        Node* node = root;
        
        int i=0;
        int N = word.size();
        
        while(i < N) {
            if(!node->contains(word[i])){
                return 0;
            }
            node = node->getrefrence(word[i]);
            i++;
        }
        return (node->isone());
    }
    
    bool startsWith(string word) {
        Node *node = root;
        
        int N = word.size();
        int i=0;
        
        while(i < N) {
            if(!node->contains(word[i])){
                return 0;
            }
            node = node->getrefrence(word[i]);
            i++;
        }
        return 1;
    }
};


class WordFilter {
public:
    
    unordered_map<string ,int> map;
    
    WordFilter(vector<string>& words) {
        
        int index = -1;
        for(string word : words) {
            index++;
            
            for(int i=0;i<=word.size();i++) {
                
                for(int j=0;j<word.size();j++) {
                    string toput = word.substr(0,i) + "#" + word.substr(j);
                    map[toput] = index;
                }
                
            }
            
        }
        
    }
    
    int f(string prefix, string suffix) {
        
        string toput = prefix + "#" + suffix;
        
        if(map.find(toput) != map.end()) {
            return map[toput];
        }
        return -1;
    }
































};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
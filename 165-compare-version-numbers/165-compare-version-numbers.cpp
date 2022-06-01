class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n1 = version1.size();
        int n2 = version2.size();
        string a1;
        string a2;
        cout << (stoi("00001") == stoi("1"));
        
        for(int i=0,j=0;i<n1 or j<n2;i++,j++) {
            
            a1 = "0";
            a2 = "0";
            
            while(i < n1 and version1[i] != '.') {
                a1 += version1[i++];
            }
            while(j < n2 and version2[j] != '.') {
                a2 += version2[j++];
            }
            
            if(stoi(a1) < stoi(a2)) {
                return -1;
            }
            
            else if(stoi(a1) > stoi(a2)) {
                return 1;
            }
        }
        if(stoi(a1) < stoi(a2)) {
            return -1;
        }

        else if(stoi(a1) > stoi(a2)) {
            return 1;
        }
        return 0;
    }
















};
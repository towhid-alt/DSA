class Solution {
public:
    string sortSentence(string s) {
        string ans;
        int idx = 1,count=0;
        int len = s.length();
        // Append a space at the end to simplify word extraction
        s += ' ';
        //To count the number of words
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                count++;
            }
        }
        for (int i = 0; i < len + 1; i++) {
            if (s[i] == ' ') {
                // Find the word's last digit, which indicates the position
                int pos = s[i - 1] - '0'; // Convert char to int
                
                if (pos == idx) {
                    // Extract the word (excluding the last digit)
                    int j = i - 2; // Start from the second last character
                    
                    while (j >= 0 && s[j] != ' ') j--;
                    
                    for (int k = j + 1; k <= i - 2; k++) {
                        ans += s[k];
                    }
                    ans += " ";
                    idx++;
                    if (idx<=count+1){
                        i=0;
                    }
                }
            }
        }
        
        // Remove the trailing space
        ans.pop_back();
        
        return ans;
    }
};

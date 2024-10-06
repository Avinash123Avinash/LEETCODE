class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
           vector<string> words1 = split(sentence1);
        vector<string> words2 = split(sentence2);
        
        // Ensure words1 is the shorter one for simplicity
        if (words1.size() > words2.size()) {
            swap(words1, words2);
        }

        int i = 0;
        int n1 = words1.size(), n2 = words2.size();
        
        // Match prefix
        while (i < n1 && words1[i] == words2[i]) {
            i++;
        }

        // Match suffix
        int j = 0;
        while (j < n1 && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }

        // Check if all words in the shorter sentence are matched
        return i + j >= n1;
    }
    
    // Helper function to split a sentence into words
    vector<string> split(const string& sentence) {
        istringstream iss(sentence);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        return words;
    }

};
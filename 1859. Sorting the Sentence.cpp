class Solution {
public:
    string sortSentence(string s) {
        stringstream str(s);
        string word;
        vector<pair<int,string>> mypair;
        
        while(str>>word)
        {
            int n=word[word.size()-1] -'0';
            word.pop_back();
            mypair.push_back(make_pair(n,word));
            
        }
        
        string finalstr="";
        sort(mypair.begin(),mypair.end());
        for(int i=0;i<mypair.size();i++)
        {
            finalstr = finalstr + mypair[i].second +" ";
        }
        finalstr.pop_back();
        return finalstr;
    }
};

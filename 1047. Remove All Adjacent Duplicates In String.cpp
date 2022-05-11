class Solution {
public:
    string removeDuplicates(string s) {
	if(s.size()==1){
		return s;
	}

	string final_s = "";

	for(int i = 0; i < s.size(); i++){
		if(!final_s.empty() && final_s.back() == s[i]){
			final_s.pop_back();
			//i++;
		}else{
			final_s.push_back(s[i]);
		}
	}
	return final_s;
}
};

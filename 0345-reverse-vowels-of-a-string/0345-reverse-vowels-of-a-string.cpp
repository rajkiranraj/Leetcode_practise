class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s1) {
    //   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    int high = s1.length()-1;
    int low = 0;
    while(low<high){
        if(!isVowel(s1[low])){
           low++;
        }
        else if(!isVowel(s1[high])){
            high--;
        }
        else{
            swap(s1[low++],s1[high--]);
        }
    }
      return s1;
    }
};
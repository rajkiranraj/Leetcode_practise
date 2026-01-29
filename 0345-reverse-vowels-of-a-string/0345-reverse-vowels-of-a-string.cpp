class Solution
{
    public:
        bool isVowel(char c)
        {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        }
    string reverseVowels(string s)
    {
       	//Brute force
       	//     vector<char> v;
       	//     for(char c:s){
       	//         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
       	//             v.push_back(c);
       	//         }
       	//     }
       	// int j = v.size()-1;
       	//    for(int i = 0; i < s.size(); i++){
       	//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
       	//            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
       	//             s[i] = v[j--];
       	//         }
       	//     }
       	//    return s;

       	//Optimal approach
        int low = 0;
        int high = s.size() - 1;
        while (low < high)
        {
            if (isVowel(s[low]) && isVowel(s[high]))
            {
                swap(s[low++], s[high--]);
            }
            else if(!isVowel(s[low])) low++;
            else high--;
        }
        return s;
    }
};
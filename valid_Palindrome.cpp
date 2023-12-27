class Solution 
{
private:
bool valid(char c)
{
if((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0' && c<='9'))
{
    return 1;
}
else
{
    return 0;
}
}
char ToLowerCase(char c)
{
  if((c>='a' && c<='z') ||  (c>='0'&&c<='9'))
  {
      return c;
  }
  else
  {
      char temp = c+'a'-'A';
      return temp;
  }
}

 bool checkPelindrome(string s)
    {
        int st = 0;
        int e = s.length() - 1;
        while (st <= e)
        {
            if (s[st] != s[e])
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        //removing faltu character
       string temp="";
       for (int i=0;i<=s.length();i++)
       {
           if(valid(s[i]))
           {
               temp.push_back(s[i]);
           }
       }


    ////lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = ToLowerCase(temp[j]);
        }



      //check palindrome
        return checkPelindrome(temp);

    }
};
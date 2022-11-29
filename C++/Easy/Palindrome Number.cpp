class Solution 
{
public:
    bool isPalindrome(int x)
    {
        std::string input_string = std::to_string(x);
        std::string reversed_string;

        for (int i = input_string.length() -1; i >= 0; i--)
        {
            reversed_string.push_back(input_string[i]);
        }

        return !(bool)std::strcmp(input_string.c_str(), reversed_string.c_str());
    }
};
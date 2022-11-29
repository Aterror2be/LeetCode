int romanToInt(std::string s) 
{
    std::map<char, int> conversions
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        (conversions[s[i]] < conversions[s[i + 1]]) ? total -= conversions[s[i]] : total += conversions[s[i]];
    }
    return total;
}
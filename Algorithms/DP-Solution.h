
int editDistRecursive(string str1 , string str2 , int m ,int n)
{
    // If first string is empty, insert all characters
    if (m == 0) return n;
 
    // If second string is empty, remove all characters
    if (n == 0) return m;
 
    // If last characters of two strings are same,
    if (str1[m-1] == str2[n-1])
        return editDistRecursive(str1, str2, m-1, n-1);
 
    // If last characters are not same, 
    // consider all three on operations on last character of first and result is minimum of 3
    return 1 + min ( editDistRecursive(str1,  str2, m, n-1),  // Insert
                     editDistRecursive(str1,  str2, m-1, n),  // Remove
                     editDistRecursive(str1,  str2, m-1, n-1) // Replace,sub                     
                   );
}


// Leetcode - 383 Ransome Note

// class Solution {
//     public:
//         bool canConstruct(string ransomNote, string magazine) {
//             int a = ransomNote.length();
//             int b = magazine.length();
    
//             sort(ransomNote.begin(), ransomNote.end());
//             sort(magazine.begin(), magazine.end());
    
//             int i = 0; // ransomNote
//             int j = 0; // magazine
          
//             bool flag = true;
//             while (i <= a && j <= b) {
//                 if (ransomNote[i] != magazine[j]) {
//                      j++;
//                     flag = false;
    
//                 } else {
//                     i++;
//                     j++;
//                     flag = true;
//                 }
//             }
//             return flag;
//         }
//     };


// HashMap ->
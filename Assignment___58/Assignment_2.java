import java.util.*;

class AnagramString
{
   public  boolean isAnagram(String s1, String s2) {
      
        s1 = s1.replaceAll("\\s", "").toLowerCase();
        s2 = s2.replaceAll("\\s", "").toLowerCase();

      
        if(s1.length() != s2.length()) {
            return false;
        }

       
        int[] count = new int[26];

        for(int i = 0; i < s1.length(); i++) {
            count[s1.charAt(i) - 'a']++;
            count[s2.charAt(i) - 'a']--;
        }

        
        for(int i = 0; i < 26; i++) {
            if(count[i] != 0) {
                return false;
            }
        }

        return true;
    }
}

class Assignment_2
{
    public static void main(String A[])
    {    
        Scanner sobj = new Scanner(System.in);
        System.out.println("\nEnter first string to check anagram: ");
        String s1 = sobj.next();
        
        System.out.println("Enter second string to check anagram: ");
        String s2 = sobj.next();
        
        AnagramString obj = new AnagramString();

        if(obj.isAnagram(s1, s2))
        {
            System.out.println("Strings are anagrams.");
        }
        else
        {
            System.out.println("Strings are NOT anagrams.");
        }
    }
}

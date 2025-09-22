import java.util.*;

class MyArray
{
    private String Arr[];

    public MyArray()
    {
        Arr = new String[0];
    }

    public void Accept() 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a String : ");
        String line = sobj.nextLine();

        Arr = line.split("\\s+");  // split by spaces
    }
    
    public void WordFrequency() 
    {
        boolean visited[] = new boolean[Arr.length];
        String maxWord = "";
        int maxCount = 0;

        System.out.println("Word Frequencies:");
        for (int i = 0; i < Arr.length; i++) 
        {
            if (visited[i] == true)   
                continue;

            int count = 1;
            for (int j = i + 1; j < Arr.length; j++) 
            {
                if (Arr[i].equals(Arr[j])) 
                {
                    count++;
                    visited[j] = true;  
                }
            }

            if (count > maxCount) 
            {
                maxCount = count;
                maxWord = Arr[i].toLowerCase();
            }
        }
        System.out.println(maxWord);
    }
}

class Assignment_3
{
    public static void main(String A[])
    {
        MyArray Mobj1 = new MyArray();
        Mobj1.Accept();

        System.out.println("Words in Array are : ");
        Mobj1.Display();

        Mobj1.WordFrequency();   
    }
}

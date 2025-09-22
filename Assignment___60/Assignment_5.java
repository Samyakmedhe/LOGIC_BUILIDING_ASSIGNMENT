import java.io.*;
import java.util.Scanner;

class FileCharacterCounter 
{
    String fileName;

    void readFileName(Scanner sc) 
    {
        System.out.print("Enter file name: ");
        fileName = sc.nextLine();
    }

    void countCharacters() 
    {
        int charCount = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) 
        {
            int c;
            while ((c = br.read()) != -1) 
            {
                charCount++;
            }

            System.out.println("Number of characters in the file: " + charCount);
        } 
        catch (IOException e) 
        {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

public class Assignment_5
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        FileCharacterCounter fcc = new FileCharacterCounter();
        fcc.readFileName(sc);
        fcc.countCharacters();

        sc.close();
    }
}

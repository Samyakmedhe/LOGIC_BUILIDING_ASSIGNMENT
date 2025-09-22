import java.io.*;
import java.util.Scanner;

class FileMerger 
{
    String file1, file2, mergedFile;

    void readFileNames(Scanner sc) 
    {
        System.out.print("Enter first file name: ");
        file1 = sc.nextLine();

        System.out.print("Enter second file name: ");
        file2 = sc.nextLine();

        System.out.print("Enter merged output file name: ");
        mergedFile = sc.nextLine();
    }

    void mergeFiles() 
    {
        try (BufferedReader br1 = new BufferedReader(new FileReader(file1));
             BufferedReader br2 = new BufferedReader(new FileReader(file2));
             BufferedWriter bw = new BufferedWriter(new FileWriter(mergedFile))) 
        {
            String line;

           
            while ((line = br1.readLine()) != null) 
            {
                bw.write(line);
                bw.newLine();
            }

            
            while ((line = br2.readLine()) != null) 
            {
                bw.write(line);
                bw.newLine();
            }

            System.out.println("Files merged successfully into " + mergedFile);

        } 
        catch (IOException e) 
        {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

public class Assignment_4
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        FileMerger fm = new FileMerger();
        fm.readFileNames(sc);
        fm.mergeFiles();

        sc.close();
    }
}

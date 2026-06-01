using System;

public class GFG
{
    public static void Main()
    {
        int i;

        Console.WriteLine("Alphabets from (A-Z) are:");
        
        // ASCII value of A=65 and Z=90
        for (i = 65; i <= 90; i++)
        {
            // Integer i with (char) will be converted to character
            // before printing. (char) will take its equivalent
            // character value
            Console.Write((char)i + " ");
        }

        Console.WriteLine("\nAlphabets from (a-z) are:");

        // ASCII value of a=97 and z=122
        for (i = 97; i <= 122; i++)
        {
            // Integer i with (char) will be converted to character
            // before printing. (char) will take its equivalent
            // character value
            Console.Write((char)i + " ");
        }
    }
}
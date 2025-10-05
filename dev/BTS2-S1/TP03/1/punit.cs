// MADE UP UNIT TEST CUZ I CAN'T INSTALL VS ON SCHOOL COMPUTERS
public static class Assert
{
    public static bool AreEqual<T>(T expected, T actual, string message){
        try
        {
            if(expected.Equals(actual)) return true;
        }
        catch (System.Exception e)
        {
            Console.WriteLine(e);
        }
        Console.WriteLine(message);
        return false;
    }

    public static bool hasKey(Dictionary array, string key, string message){
        if (array.ContainsKey(key))
        {
            Console.WriteLine(message);
            return true;
        }
        return false;
    }
}
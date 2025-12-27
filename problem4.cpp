public static string Truncate(this string str, int maxLength)
{
    return str.Length <= maxLength ? str : str.Substring(0, maxLength);
}

// Использование:
string destination = source.Truncate(13);
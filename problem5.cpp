bool IsNumber(string str)
{
    return int.TryParse(str, out _);
}
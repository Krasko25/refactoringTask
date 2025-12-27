private const int INDEX_NOT_FOUND = 5000; // Большое число, означающее "не найдено"
string GetTextDiv2(string text)
{
    int mid = text.Length / 2;
    int rightIndex = text.IndexOf(' ', mid);
    if (rightIndex < 0) rightIndex = INDEX_NOT_FOUND;

    int leftIndex = text.LastIndexOf(' ', mid);
    if (leftIndex < 0) leftIndex = INDEX_NOT_FOUND;

    if (rightIndex == INDEX_NOT_FOUND && leftIndex == INDEX_NOT_FOUND)
    {
        return "&nbsp" + text;
    }

    if (rightIndex - mid > mid - leftIndex)
    {
        mid = leftIndex;
    }
    else
    {
        mid = rightIndex;
    }

    return "&nbsp" + text.Substring(0, mid) + " <br/>&nbsp" + text.Substring(mid);
}
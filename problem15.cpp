public string GenerateEmail()
{
    int spaceIndex = PersonName.IndexOf(' ');
    if (spaceIndex <= 0) return string.Empty; // Нет имени или фамилии

    string firstName = PersonName.Substring(0, spaceIndex);
    string lastName = PersonName.Substring(spaceIndex + 1);
    string localPart = $"{firstName}.{lastName}";

    if (localPart.Length > 20)
    {
        localPart = localPart.Substring(0, 20); // Обрезка, может испортить данные
    }

    return localPart + "@domain.ua";
}
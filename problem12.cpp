var ids = form.Keys;
if (ids.Length != 1)
{
    throw new ArgumentException("Должен быть ровно один ID.");
}
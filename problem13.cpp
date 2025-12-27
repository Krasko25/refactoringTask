string[] nameParts = customer.Name.Split(' ', 2); 
string firstName = nameParts[0];
string lastName = nameParts.Length > 1 ? nameParts[1] : string.Empty;
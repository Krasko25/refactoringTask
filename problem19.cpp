string mailTo;
string adminEmail = Config.GetSetting("AdminNotifications_EmailAddress");
if (string.IsNullOrEmpty(adminEmail))
{
    // Скорее всего, тут должна быть настройка SMTPEmail, а не Password
    mailTo = Globals.GetHostPortalSettings().HostSettings["SMTPEmail"]?.ToString();
}
else
{
    mailTo = adminEmail;
}
public bool CheckPath(string basePath)
{
    // Проверяем обязательные папки
    string[] requiredDirectories = { "SCLAD", "REAL", "DOSTAVKA" };
    foreach (var dir in requiredDirectories)
    {
        if (!Directory.Exists(Path.Combine(basePath, dir)))
            return false;
    }

    // Проверяем обязательные файлы
    string[] requiredFiles = {
        "analit.dbf",
        "partner.dbf",
        Path.Combine("SCLAD", "mdoc.dbf"),
        Path.Combine("SCLAD", "mdoc.fpt"),
        Path.Combine("SCLAD", "mdocm.dbf"),
        Path.Combine("SCLAD", "mgrup.dbf"),
        Path.Combine("SCLAD", "mlabel.dbf"),
        Path.Combine("SCLAD", "mlabel.fpt"),
        Path.Combine("REAL", "rbookm.dbf"),
        Path.Combine("REAL", "rbook.dbf"),
        Path.Combine("REAL", "rbook.fpt"),
        Path.Combine("DOSTAVKA", "avt.dbf"),
        Path.Combine("DOSTAVKA", "avtm.dbf"),
        Path.Combine("DOSTAVKA", "avtm.fpt"),
        Path.Combine("DOSTAVKA", "cargo.dbf"),
        Path.Combine("DOSTAVKA", "cargom.dbf"),
        Path.Combine("DOSTAVKA", "zamena.dbf")
    };

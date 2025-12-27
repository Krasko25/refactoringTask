foreach (DirectoryInfo dir in dirs.GetDirectories())
{
    string relativePath = SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/');
    byte[] pathBytes = Encoding.UTF8.GetBytes(relativePath);

    stream.Write(new byte[] { (byte)NetworkMessage.MakeDir }, 0, 1);
    stream.Read(new byte[1], 0, 1);

    stream.Write(BitConverter.GetBytes(pathBytes.Length), 0, 4);
    stream.Write(pathBytes, 0, pathBytes.Length);

    stream.Read(new byte[1], 0, 1); // Ok
}

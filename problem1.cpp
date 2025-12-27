private void SetEditMode(bool isEditMode)
{
    label1.Enabled = isEditMode;
    button1.Enabled = isEditMode;
    button2.Enabled = isEditMode;
    button3.Enabled = !isEditMode;
    button4.Enabled = !isEditMode;
}
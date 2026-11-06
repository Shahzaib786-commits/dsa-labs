//
//#include <iostream>
//using namespace std;
//
//class TextEditor
//{
//private:
//    char text[100];
//    char undoStack[100][100];
//    char redoStack[100][100];
//    int undoCount, redoCount;
//
//    void copyText(char dest[], const char source[])
//    {
//        int i = 0;
//
//        while (source[i] != '\0')
//        {
//            dest[i] = source[i];
//            i++;
//        }
//
//        dest[i] = '\0';
//    }
//
//    void saveUndo()
//    {
//        if (undoCount < 100)
//            copyText(undoStack[undoCount++], text);
//
//        redoCount = 0;
//    }
//
//public:
//    TextEditor()
//    {
//        text[0] = '\0';
//        undoCount = 0;
//        redoCount = 0;
//    }
//
//    void typeText()
//    {
//        char input[100];
//        cout << "Enter text: ";
//        cin.ignore(10000, '\n');
//        cin.getline(input, 100);
//
//        saveUndo();
//
//        int i = 0;
//        while (text[i] != '\0')
//            i++;
//
//        int j = 0;
//        while (input[j] != '\0' && i < 99)
//            text[i++] = input[j++];
//
//        text[i] = '\0';
//    }
//
//    void deleteLastCharacter()
//    {
//        int i = 0;
//
//        while (text[i] != '\0')
//            i++;
//
//        if (i == 0)
//        {
//            cout << "Text is empty\n";
//            return;
//        }
//
//        saveUndo();
//        text[i - 1] = '\0';
//    }
//
//    void undo()
//    {
//        if (undoCount == 0)
//        {
//            cout << "Nothing to undo\n";
//            return;
//        }
//
//        copyText(redoStack[redoCount++], text);
//        copyText(text, undoStack[--undoCount]);
//    }
//
//    void redo()
//    {
//        if (redoCount == 0)
//        {
//            cout << "Nothing to redo\n";
//            return;
//        }
//
//        saveRedo();
//    }
//
//    void saveRedo()
//    {
//        copyText(undoStack[undoCount++], text);
//        copyText(text, redoStack[--redoCount]);
//    }
//
//    void display()
//    {
//        cout << "Current text: " << text << endl;
//    }
//};
//
//int main()
//{
//    TextEditor editor;
//    int choice;
//
//    do
//    {
//        cout << "\n1. Type Text\n2. Delete Last Character";
//        cout << "\n3. Undo\n4. Redo\n5. Display Text\n6. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            editor.typeText();
//            break;
//
//        case 2:
//            editor.deleteLastCharacter();
//            break;
//
//        case 3:
//            editor.undo();
//            break;
//
//        case 4:
//            editor.redo();
//            break;
//
//        case 5:
//            editor.display();
//            break;
//
//        case 6:
//            cout << "Program ended\n";
//            break;
//
//        default:
//            cout << "Invalid choice\n";
//        }
//    } while (choice != 6);
//
//    return 0;
//}

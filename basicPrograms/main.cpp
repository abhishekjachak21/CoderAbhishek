#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the main window
    QMainWindow mainWindow;
    QWidget centralWidget;
    mainWindow.setCentralWidget(&centralWidget);

    // Create layouts for the left and right sides
    QHBoxLayout mainLayout;
    QVBoxLayout leftLayout;
    QVBoxLayout rightLayout;

    centralWidget.setLayout(&mainLayout);
    mainLayout.addLayout(&leftLayout);
    mainLayout.addLayout(&rightLayout);

    // Create file upload button and text input field
    QPushButton uploadButton("Upload Video/Audio");
    QLineEdit textInput;

    leftLayout.addWidget(&uploadButton);
    rightLayout.addWidget(&textInput);

    // Connect the file upload button to a slot for opening the file dialog
    QObject::connect(&uploadButton, &QPushButton::clicked, [&]() {
        QString filePath = QFileDialog::getOpenFileName(&mainWindow, "Select Video/Audio File");
        if (!filePath.isEmpty()) {
            // Process the selected file here, e.g., store the file path
            qDebug() << "File selected: " << filePath;
        }
    });

    // Create the main window
    mainWindow.setWindowTitle("File Upload and Text Input Example");
    mainWindow.show();

    return app.exec();
}

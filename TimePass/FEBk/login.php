<?php
// Replace these with your database credentials
$servername = "your_server";
$username = "your_username";
$password = "your_password";
$database = "your_database";

// Create a database connection
$conn = new mysqli($servername, $username, $password, $database);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if (isset($_POST["username"]) && isset($_POST["password"])) {
    $username = $_POST["username"];
    $password = $_POST["password"];

    // Perform a SQL query to check if the user exists
    $sql = "SELECT * FROM users WHERE username = '$username' AND password = '$password'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        echo json_encode(array("success" => true));
    } else {
        echo json_encode(array("success" => false));
    }
} else {
    echo json_encode(array("success" => false));
}

// Close the database connection
$conn->close();
?>

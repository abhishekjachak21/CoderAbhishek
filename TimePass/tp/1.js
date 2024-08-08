

const todoInput = document.getElementById('todoInput');
const addTodoButton = document.getElementById('addTodo');
const todoList = document.getElementById('todoList');


// Function to add a new todo item
function addTodo() {
  const todoText = todoInput.value;
  if (todoText.trim() === '') {
    alert('Please enter a valid todo.');
    return;
  }

  const todoItem = document.createElement('li');
  todoItem.innerText = todoText;

  // Add a click event listener to remove the todo item when clicked
  todoItem.addEventListener('click', () => {
    todoItem.remove();
  });

  todoList.appendChild(todoItem);
  todoInput.value = '';
}

// Event listener to add a todo item when the button is clicked
addTodoButton.addEventListener('click', addTodo);

// Event listener to add a todo item when 'Enter' is pressed in the input field
todoInput.addEventListener('keypress', function(event) {
  if (event.key === 'Enter') {
    addTodo();
  }
});













/* Explanation and Important Points:

Todo List Structure:

The HTML structure includes an input field to add a new todo, a button to add the todo, and an unordered list to display todos.
DOM Element Selection:

We use document.getElementById to select the relevant DOM elements for the input, button, and todo list.
Adding a Todo (addTodo):

The addTodo function is responsible for creating a new todo item and appending it to the todo list.
It checks if the input is empty and displays an alert if so.
Each todo item is a list item (<li>) and contains the todo text entered by the user.
A click event listener is attached to each todo item to allow for removal when clicked.
Event Listeners:

Event listeners are added to the "Add" button and the input field to trigger the addTodo function when the button is clicked or when the 'Enter' key is pressed.
Event Delegation:

The event listener for todo item removal is added to the parent <ul> element (todoList) using event delegation.
This allows us to handle events on dynamically added todo items.
Dynamic Elements:

The todo items are dynamically created and added to the DOM in response to user actions.
This example demonstrates how events can be used to create an interactive todo list application, where users can add and remove items. Event listeners play a crucial role in enabling this interactivity by responding to user actions and executing appropriate functions.





 */
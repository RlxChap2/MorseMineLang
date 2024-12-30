# 📡 MorseLang - A Programming Language Based on Morse Code

Welcome to **MorseLang**, a fun and educational programming language that uses **Morse code** to write and execute programs. This language allows you to declare variables, define functions, perform conditional logic, and more—all in the timeless dots and dashes of Morse code!

---

## 🛠 Features

- 📜 **Declarative Syntax**: Write code using dots (`.`) and dashes (`-`) for programming constructs.
- 🔄 **Control Flow**: Use `IF` and `WHILE` statements written in Morse code.
- 🔢 **Arithmetic Operations**: Perform addition, subtraction, and assignment.
- 🖨 **I/O Support**: Print messages and variables to the console.
- 🌐 **Cross-Platform**: Runs on any system with a C++ compiler.

---

## 📥 Installation

### **Prerequisites**

- A C++ compiler (e.g., `g++` for Linux/macOS or MinGW for Windows).
- Git for cloning the repository.

### **Steps**

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/MorseLang.git
   cd MorseLang
   ```
2. Build the project:
   ```bash
   g++ -o morse_interpreter main.cpp
   ```
3. Run the interpreter:
   ```bash
   ./morse_interpreter
   ```

---

## 🚀 Getting Started

### **Hello, World!**

Write the following in Morse code to print a message:

```
-.-. .... .- .-.. .-.- .... . .-.. .-.. --- --..-- .-- --- .-. .-.. -..
```

Run it, and you'll see:

```
Hello, World!
```

---

## 📚 Tutorial

### **1. Basic Syntax**

| Morse Code | Command  | Example Output             |
| ---------- | -------- | -------------------------- |
| `.-`       | VARIABLE | Declares a variable.       |
| `.-..`     | ASSIGN   | Assigns a value.           |
| `-.-.`     | PRINT    | Prints a message or value. |

Example:

```
.- .-.. ..---
```

Code Output:

```cpp
VARIABLE x;
x = 2;
```

---

### **2. Control Flow**

#### **Conditional Statements**

Morse Code:

```
-.--. .- ..--- ...- .-...-
-.-. .... .- .-.. .-.- ..---
...-...-
```

Translation:

```cpp
IF (x == 2) {
    PRINT("x is 2");
}
```

---

#### **Loops**

Morse Code:

```
---.. ...- .- ..--- .-.- --....-
    -.-. .... .- .-.. .-.- ..---
    .- .-.. .-....-
```

Translation:

```cpp
WHILE (x > 0) {
    PRINT(x);
    x = x - 1;
}
```

---

### **3. Functions**

Morse Code:

```
...---... ...- .- .-.. .-.- ..---
...-...-
```

Translation:

```cpp
FUNCTION {
    RETURN 2;
}
```

---

### **4. Complete Example**

#### Morse Code:

```
...---... ...- .- .-.. .-.- ..--- -.-. --..-- .-.. .-.. ...-...-
-.--. .- ..--- ...- .-...-
    -.-. .... .- .-.. .-.- ..---
...-...-
```

#### Translation:

```cpp
FUNCTION {
    VARIABLE x;
    x = 2;
    PRINT(x, "Hello World");
}

IF (x == 2) {
    PRINT("x is 2");
}
```

#### Execution Output:

```
2 Hello World
x is 2
```

---

## 📄 Language Reference

### **Keywords**

| Morse Code  | Keyword/Operator | Description            |
| ----------- | ---------------- | ---------------------- |
| `.-`        | VARIABLE         | Declare a variable.    |
| `.-..`      | ASSIGN           | Assign a value.        |
| `-.-.`      | PRINT            | Print a message.       |
| `-.--.`     | IF               | Conditional statement. |
| `---..`     | WHILE            | While loop.            |
| `...---...` | FUNCTION         | Define a function.     |
| `.-.-`      | RETURN           | Return a value.        |
| `.-.-.`     | `+`              | Addition operator.     |
| `-....-`    | `-`              | Subtraction operator.  |

---

## 🧪 Testing

### **Run Tests**

You can test the language by running:

```bash
./morse_interpreter test.morse
```

The file `test.morse` can contain any MorseLang code.

### **Example Test Case**

File: `test.morse`

```
.- .-.. ..--- -.-. .... .- .-.. .-.- ..--- --....-
```

Expected Output:

```
x = 2
5
```

---

## 🌟 Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository.
2. Create a branch for your feature or fix:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add feature"
   ```
4. Push to your fork and submit a pull request.

---

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

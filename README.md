<p align="center">
  <a href="https://github.com/marialmeidafr/Ft_printf" target="_blank">
    <img src="https://github.com/danielleseragioli/42_duck_badges/blob/main/badges/printf_pin.png" alt="printf duck badge" />
  </a>
</p>

<h1 align="center">Ft_printf</h1>

<p align="center">
  <b>Because putstr and putnbr are not enough.</b><br>
  This project is a custom implementation of the famous <code>printf</code> function from the <code>stdio.h</code> library.
</p>

<p align="center">
  <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExOW5iN2g5eWI5NGlkZDR0b2E3bDZjaXJkOTczcXlmZng0a2I0YTZ4ZyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/tzfot7N6riKwa4Csly/giphy.gif" width="300" alt="printf animation"/>
</p>

---
## <p align="center">💡 About the Project</p>

The goal of **ft_printf** is to learn how to handle **variadic functions** (functions that accept a variable number of arguments) in C. The challenge is to create a versatile function that can format and print different data types efficiently, mimicking the behavior of the original C standard library function.

---

## <p align="center">🛠️ Supported Conversions</p>

The function handles the following format specifiers:
  
  | Specifier | Description |
| :--- | :--- |
| **%c** | Prints a single character. |
| **%s** | Prints a string. |
| **%p** | Prints a void pointer in hexadecimal format. |
| **%d** | Prints a decimal (base 10) number. |
| **%i** | Prints an integer (base 10). |
| **%u** | Prints an unsigned decimal (base 10) number. |
| **%x** | Prints a number in hexadecimal (base 16) lowercase. |
| **%X** | Prints a number in hexadecimal (base 16) uppercase. |
| **%%** | Prints a percent sign. |


---

## <p align="center"> 🎯 The Challenge</p>

Unlike standard functions, `printf` can take an unlimited number of arguments. To handle this, I implemented the `<stdarg.h>` macros:



* **`va_list`**: To create a pointer to the argument list.
* **`va_start`**: To initialize the list.
* **`va_arg`**: To retrieve each argument based on its type.
* **`va_end`**: To clean up the list after processing.

## <p align="center">⚙️ How it works</p>

1. **Parsing:** The function scans the input string character by character.
2. **Detection:** When it hits a `%`, it triggers a "dispatcher" that identifies the format specifier (like `d`, `s`, or `x`).
3. **Conversion:** It converts the raw data (like an integer or a pointer address) into a string format.
4. **Counting:** Every character printed is tracked, as the function must return the total length of the printed string.

---

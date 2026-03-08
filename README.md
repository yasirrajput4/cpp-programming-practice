# C++ Programming Practice

A collection of C++ practice programs covering patterns, algorithms, calculators, and various programming concepts. Ideal for learning and practicing C++ fundamentals.

## Getting Started

### Prerequisites

- C++ compiler (g++, clang++, or MSVC)
- C++11 or later

### Clone the repository

Using **HTTPS**:

```bash
git clone https://github.com/your-username/cpp-programming-practice.git
cd cpp-programming-practice
```

Using **SSH**:

```bash
git clone git@github.com:your-username/cpp-programming-practice.git
cd cpp-programming-practice
```

Replace `your-username` with your actual GitHub username.

## Project Structure

```
cpp-programming-practice/
├── src/
│   ├── patterns/      # Pattern printing programs
│   ├── algorithms/    # Sorting and algorithmic implementations
│   ├── calculators/   # Calculator and utility programs
│   └── misc/          # Miscellaneous programs
├── README.md
├── LICENSE
├── .gitignore
└── .gitattributes
```

## Contents

### Patterns (10 programs)

| File                   | Description               |
| ---------------------- | ------------------------- |
| `alphabet-pattern.cpp` | Alphabet pattern printing |
| `complex-pattern.cpp`  | Complex pattern designs   |
| `dabangg.cpp`          | Dabangg pattern           |
| `diamond.cpp`          | Diamond pattern           |
| `diamond-star.cpp`     | Diamond star pattern      |
| `num-triangle.cpp`     | Number triangle pattern   |
| `pascal-triangle.cpp`  | Pascal's triangle         |
| `pyramid.cpp`          | Pyramid pattern           |
| `star-pattern.cpp`     | Star pattern              |
| `star-triangle.cpp`    | Star triangle pattern     |

### Algorithms (3 programs)

| File                                | Description                   |
| ----------------------------------- | ----------------------------- |
| `bubble-sort.cpp`                   | Bubble sort implementation    |
| `fibonacci.cpp`                     | Fibonacci sequence            |
| `selection-sort-implementation.cpp` | Selection sort implementation |

### Calculators (5 programs)

| File                         | Description                 |
| ---------------------------- | --------------------------- |
| `arithmetic-calc.cpp`        | Basic arithmetic calculator |
| `grade-calc.cpp`             | Grade calculator            |
| `permutation-calculator.cpp` | Permutation calculator      |
| `power-calculator.cpp`       | Power/exponent calculator   |
| `profit-loss-calculator.cpp` | Profit/Loss calculator      |

### Miscellaneous (6 programs)

| File                       | Description            |
| -------------------------- | ---------------------- |
| `array-reverse-print.cpp`  | Reverse array printing |
| `countdown.cpp`            | Countdown timer        |
| `even-digit-sum.cpp`       | Even digit sum         |
| `number-reverse-sum.cpp`   | Number reverse and sum |
| `prime-number-checker.cpp` | Prime number checker   |
| `quiz.cpp`                 | Quiz program           |

## Building & Running

Each `.cpp` file is a standalone program. Compile and run individually:

```bash
# Example: Compile and run fibonacci
g++ src/algorithms/fibonacci.cpp -o fibonacci
./fibonacci   # Linux/macOS
# fibonacci.exe   # Windows
```

**Windows (PowerShell/CMD):**

```powershell
g++ src/algorithms/fibonacci.cpp -o fibonacci.exe
.\fibonacci.exe
```

### Git and Line Endings

This project includes a `.gitattributes` configuration that standardizes **LF** line endings for text files.
This keeps the codebase consistent across **Windows**, **Linux**, and **macOS**, and helps reduce `CRLF ↔ LF` warnings when running `git add`.

If you are on Windows and still see line‑ending messages, you can optionally configure Git globally:

```bash
git config --global core.autocrlf false
git config --global core.eol lf
```

---

## Contributing

Contributions are welcome! Feel free to:

- Add new practice programs
- Fix bugs or improve existing code
- Suggest new program ideas

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

# **Simple Cricket Game**

### **Description**
A fun, terminal-based cricket game built in C where you compete against the computer in a single-over match. Test your batting and bowling skills, and see if you can outscore the computer! The game features randomized computer actions, input validation, and dynamic score updates for an engaging experience.

---

### **How to Play**
1. **Batting**:
   - Enter a number between 1 and 6 as your run.
   - If your input matches the computer’s ball, you’re "OUT!"
2. **Bowling**:
   - Enter a number between 1 and 6 as your ball.
   - If your input matches the computer’s run, the computer is "OUT!"
3. The player with the highest score wins. If the scores are tied, it’s a draw.

---

### **Features**
- **Simple Gameplay**: Easy-to-understand rules for quick matches.
- **Randomized Actions**: Computer generates random moves for fairness.
- **Input Validation**: Prompts the user for valid inputs (1-6).
- **Dynamic Results**: Updates scores in real-time and declares the winner.

---

### **Setup and Execution**
1. **Prerequisites**:
   - A C compiler (e.g., GCC).
   - A terminal or IDE to run the program.

2. **Steps to Run**:
   - Clone this repository:
     ```bash
     git clone https://github.com/<your-username>/simple-cricket-game.git
     cd simple-cricket-game
     ```
   - Compile the program:
     ```bash
     gcc cricket_game.c -o cricket_game
     ```
   - Run the program:
     ```bash
     ./cricket_game
     ```

---

### **Sample Gameplay**
```plaintext
Welcome to the Simple Cricket Game!
Rules: You and the computer take turns playing. If your number matches the computer's number, you're out!

You are batting!
Enter your run (1-6): 3
Computer's ball: 4
Your score: 3

Enter your run (1-6): 5
Computer's ball: 5
You're OUT!

Computer is batting now!
Enter your ball (1-6): 2
Computer's run: 4
Computer's score: 4
Computer has chased your score!

Final Scores:
You: 3 runs
Computer: 4 runs
Computer wins! Better luck next time!

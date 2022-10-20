
# Task 1

## Step 1

This step involved forking the main repository from the website and forking it into my own. 

Steps followed:
- Forked the repository to [arnavxkohli/Lab1-Counter](https://github.com/arnavxkohli/Lab1-Counter).
- Cloned the repository to the path: **/Documents/iac** on my local system.

---

## Step 2
  The next step was to open VS Code and find the **Task1** directory (where this readme is stored).

---
## Step 3
  After VS Code was opened in the directory for the task to be implemented, I created the file **counter.sv** which contains the synthesizable **System Verilog** code for the counter. The module **counter** implements the counter required for this task.   

  ![counter code block](images-task1/counter-svcode.png)

  The code for the counter was implemented as shown by the module shown above.

  Some things to note are:
  - The **file name** and the **module name** are the same.
  - The number of bits in the counter is specified with the parameter **WIDTH**. It is currently set to 8-bit. This allows me to dynamically change the number of bits as needed and generate an **n-bit counter** as needed in the future.
  - The always_ff @ (posedge clk) is the way that one specifies a **clocked** circuit.
  - ‘<=’ in line 12 and 13 are non-block assignments which should be used within an always_ff block. Non blocking assignments ensure that the circuit is synthesized **parallelly** instead of **sequentially** (refer to notes for the reason).
  - **{WIDTH{1’b0}}** in line 12 uses the concatenation operator { } to form **WIDTH(8)** bits of ‘0’.
  - How it works is, the code ensures that the current value of the counter is updated to count + 0000000 + en where en is the **LSB**. Here, 1 is added to the existing value of count everytime en goes **high**. Until and unless en goes high, the count stays at the same value (unless reset is called).
  ![how the counter works](images-task1/counter-work.png)


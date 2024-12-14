# Hotel Management System

This is a simple **C++ program** that acts as a basic hotel management system. It allows the user to manage the inventory of rooms and food items in a hotel, record sales, calculate total collections, and display detailed information about inventory and sales.

## Features

1. **Room Booking**
   - Allows customers to book rooms.
   - Calculates total revenue from room bookings.

2. **Food Orders**
   - Supports the following food items:
     - Pasta
     - Burger
     - Noodles
     - Shake
     - Chicken-Roll
   - Keeps track of the quantity of each item sold and updates the inventory.

3. **Sales and Inventory Information**
   - Displays:
     - Initial quantity of rooms and food items.
     - Quantity sold for each item.
     - Remaining inventory.
     - Total revenue generated from each category.

4. **Exit Option**
   - Gracefully exits the program.

---

## How to Use

1. Compile and run the program in a C++ compiler.
2. Upon starting, the program will ask for the **initial quantity of items** available in the hotel (rooms, food items, etc.).
3. A menu will be displayed with the following options:
    - Book rooms or order food items.
    - View sales and inventory details.
    - Exit the program.
4. Choose an option by entering the corresponding number (1 to 8).

---

## Menu Options

1. **Rooms**  
   - Enter the number of rooms to book.
   - The system checks availability and updates the sales and inventory.

2. **Pasta**  
   - Enter the quantity of pasta to order.
   - The system checks availability and updates the sales and inventory.

3. **Burger**  
   - Enter the quantity of burgers to order.
   - The system checks availability and updates the sales and inventory.

4. **Noodles**  
   - Enter the quantity of noodles to order.
   - The system checks availability and updates the sales and inventory.

5. **Shake**  
   - Enter the quantity of shakes to order.
   - The system checks availability and updates the sales and inventory.

6. **Chicken-Roll**  
   - Enter the quantity of chicken-rolls to order.
   - The system checks availability and updates the sales and inventory.

7. **Sales and Collection Information**  
   - Displays:
     - Total items initially available.
     - Items sold.
     - Remaining inventory.
     - Total revenue for each category.

8. **Exit**  
   - Terminates the program.

---

## Code Explanation

The program uses:
- **Switch-Case** for menu-driven functionality.
- **Variables** to store initial quantities, sales data, and total collections.
- **Loops and Conditional Statements** to handle user input and manage inventory.

---

## Sample Input and Output

### Example Workflow:
1. **Input initial quantities**:  
Rooms available: 10\
Quantity of Pasta: 20\
Quantity of Burger: 15\
Quantity of Noodles: 10\
Quantity of Shake: 12\
Quantity of Chicken-Roll: 8\

2. **Menu Options**:  
1 Rooms\
2 Pasta\
3 Burger\
4 Noodles\
5 Shake\
6 Chicken-Roll\
7 Information regarding sales and collection\
8 Exit

3. **Sample Interaction**:  
- Book 3 rooms.  
  ```
  Enter the number of rooms you want: 3  
  3 room/rooms have been alloted to you!  
  ```
- Order 2 burgers.  
  ```
  Enter Burger Quantity: 2  
  2 Burger is the order!  
  ```

4. **View Sales and Collection**:  
Number of rooms we had: 10\
Number of rooms we gave for rent: 3\
Remaining rooms: 7\
Total room collection for the day: 3600\

Number of Burger we had: 15\
Number of Burger we sold: 2\
Remaining Burger: 13\
Total Burger collection for the day: 200



---

## Program Requirements

- A **C++ compiler** (e.g., GCC, Clang, or Visual Studio).
- Basic knowledge of C++ programming for execution and modification.

---

## Potential Improvements

1. Use **functions** to reduce redundancy in the code.
2. Implement **file handling** to store sales data permanently.
3. Add **user authentication** for better security.
4. Add **graphical user interface (GUI)** for improved usability.

---

## License

This program is free to use for educational purposes. Feel free to modify or extend it to meet your requirements.

---

## Author

- **Name**: pain-killer786  

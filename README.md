# LuxorHub

Welcome to the **LuxorHub**! This interactive C++ project enables efficient management of hotel rooms, restaurant orders, and employee details, making it ideal for businesses seeking streamlined operations.

## Features

### Hotel Management
- **Room Operations**:
  - Add, search, and display room details.
  - Check room availability.
- **Customer Operations**:
  - Customer check-in and check-out.
  - Search customer details.
- **Summary Reports**:
  - Guest summary report for all checked-in customers.

### Restaurant Management
- **Order Operations**:
  - Add, search, and view orders.
  - Display a summary of restaurant orders.

### Employee Management
- **Employee Operations**:
  - Add, search, and update employee records.
  - View employee details and generate reports.

### Admin Features
- Password-protected admin access for secure operations.
- Separate admin passwords for Hotel, Restaurant, and Employee sections:

## Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/pain-killer786/LuxorHub.git
   ```

2. **Navigate to the Project Directory**:
   ```bash
   cd Luxorhub
   ```

3. **Compile the Code**:
   Use any C++ compiler, e.g., g++:
   ```bash
   g++ -o management_system Source_Code.cpp
   ```

4. **Run the Application**:
   ```bash
   ./management_system
   ```

## Usage

### Main Menu
- Navigate through the main menu to select operations for Hotel, Restaurant, or Employee management.
- Use corresponding numeric inputs to select menu options.

### Admin Access
- Enter the correct admin password when prompted to perform admin-specific operations.

### Key Functionalities
- **Hotel Management**:
  - Add and search rooms or customers.
  - View available rooms and generate guest reports.
- **Restaurant Management**:
  - Add and manage restaurant orders.
  - View and summarize order details.
- **Employee Management**:
  - Manage employee records securely with file-based storage.

## Project Structure

- **Source_Code.cpp**: Contains the main implementation for hotel, restaurant, and employee management.
- **Data Files** (auto-generated):
  - `employee_data.txt`: Stores employee records.
  - `restaurant_data.txt`: Stores restaurant order details.
  - `customer_data.txt`: Stores customer information for hotel operations.

## Future Enhancements
- Add GUI for enhanced user experience.
- Extend multi-user support with roles and permissions.
- Integrate with database systems for scalable data management.

## Contributing

We welcome contributions to enhance the system! Please follow these steps:
1. Fork the repository.
2. Create a new feature branch.
3. Commit your changes and push them to your fork.
4. Submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

---

Happy Managing! 🎉

# Online Movie Ticket Booking

**Course:** Programming Fundamentals (1st Semester)  
**Project Type:** Final Project  

---

## Group Members
- **Azeem Mohamed Husain** - B22F0759CS142  
- **Faththima Misna** - B22F0757AI142  

---

## Project Overview
This project is a **C++ console-based application** for booking movie tickets online. It simulates a real-world movie ticket booking system and includes functionalities for user registration, login, viewing movie showings, checking active branches, and booking tickets with seat selection.

The program uses a **menu-driven interface** to make navigation simple and interactive. It is designed to run in a terminal/console environment.

---

## Features
- **User Signup and Login:**  
  - Users can register with a username and password.  
  - Password requirements: at least 8 characters, one uppercase letter, and one digit.  
  - Login authentication ensures secure access.

- **View Today's Showings:**  
  - List of current movies available in theaters.  

- **Active Branches:**  
  - Shows the cinema branches available today for ticket booking.  

- **Online Ticket Booking:**  
  - Select movie, branch, and showtime.  
  - Reserve seats with a visual representation of the theater layout.  
  - Calculates total ticket amount.  

- **Upcoming Movies:**  
  - Displays upcoming movie releases with dates.

---

## How to Run
1. Clone the repository:  
   ```bash
   git clone https://github.com/<your-username>/online-movie-ticket-booking.git
   cd online-movie-ticket-booking
   g++ PF_Project.cpp -o movie_booking
   ./movie_booking

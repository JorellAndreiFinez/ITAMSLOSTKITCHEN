# 🍴 ITAM’S LOST KITCHEN – Your Food Guide and Ordering System in FEU Tech Campus


> **A C++-based menu-driven program that serves as a food guide and ordering system for the FEU Tech campus canteen.**
> Developed as part of the Computer Programming 1 (CCS0003) course under the College of Computer Studies, FEU Institute of Technology.

---

## 🧭 Overview

**ITAM’S LOST KITCHEN** is a C++ program designed to help students and visitors easily explore available food stalls, view menus, and order meals inside the FEU Tech campus canteen.
Created by 1st year BSIT student, the project was submitted to **Dr. Marie Luvett I. Goh** on **November 24, 2022**, as partial fulfillment for the course **CCS0003 – Computer Programming 1**.

This project represents the team’s understanding of structured programming concepts such as switch statements, loops, conditional branching, and user-defined functions, applied in a real-world context that promotes convenience and efficiency within the university environment.

---

## 🧩 Project Rationale

In a busy academic setting like FEU Tech, students often struggle to decide what and where to eat. The canteen offers a wide range of food stalls and menu options, which can be overwhelming, especially for new students and visitors.

**ITAM’S LOST KITCHEN** addresses this by providing a simple, offline system that serves both as a **food directory and ordering platform**. It allows users to browse food stalls, view menu prices, and place simulated orders that generate receipts for easy verification at the canteen.

By integrating programming logic with a relatable real-life scenario, this project showcases how C++ can be used to develop practical and interactive systems that improve user experience on campus.

---

## 🎯 Project Objectives

### General Objective

To create a C++ program called ITAM’S LOST KITCHEN, serving as a food guide and ordering system for the FEU Tech campus canteen.

### Specific Objectives

1. Provide an efficient and user-friendly ordering system with an order-receipt feature.
2. Display a complete food guide with available food stalls, menu directories, and prices.
3. Design a simple, menu-driven interface allowing users to choose actions easily.
4. Enable users to navigate between menus or exit the program conveniently.
5. Promote FEU Tech’s food stalls through an “About” section with information about the program and developers.
6. Include a simple map showing the 8th floor layout and location of the canteen.
7. Generate receipts for user orders, including payment method and total amount.
8. Allow users to select from various meals, beverages, and snacks from different stalls.

---

## 🧠 Core Features

### 🍽️ Food Stall Directory

* Lists all available food stalls in the FEU Tech canteen.

* Displays menus with corresponding prices.

* Highlights the best-seller and budget-friendly meals from each stall.

### 🛒 Ordering System

* Allows users to select food items, quantities, and confirm their orders.
* Computes the total price and generates a detailed receipt.
* Supports both cash and Gcash payment options.

### 🧾 Receipt Generation

* Prints customer name, order details, payment method, total price, and change.
* Can be presented to the food stall as proof of order.

### 🗺️ Canteen Map

* Displays a simple representation of the FEU Tech 8th floor where food stalls are located.

### ℹ️ About Section

* Provides information about the programmers, course, and project background.

---

## 🖥️ User Interface Overview

## 🖥️ User Interface Overview

The following screenshots and descriptions illustrate the key interfaces of **ITAM’S LOST KITCHEN**, a menu-driven C++ console program designed to help **FEU Tech students** explore canteen food options and place simulated orders.

---

### 🧭 Title Menu
- This is the first interface users see when launching the program.  
  It displays the title of the system along with the instruction **“Press Enter to continue”**, prompting the user to proceed to the main menu.

  ![ITAM'S LOST KITCHEN Title Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%201.jpg)

---

### 📋 Main Menu
- The main menu serves as the central hub of navigation with three primary options:  
  - **A – Find Food in the FEU Tech Campus**: Opens the list of available food stalls.  
  - **B – About Us**: Displays background information about the program and developers.  
  - **C – Exit**: Closes and terminates the program.
 
 ![ITAM'S LOST KITCHEN Main Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%202.jpg)
  ![ITAM'S LOST KITCHEN About Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20ABOUT.jpg)
  

---

### 🍴 Find Food Menu
- This section allows users to explore options related to food selection:  
  - **A – View List of Food Stalls**: Displays all available stalls in the canteen.  
  - **B – Floor Mapping**: Shows a simple layout of the FEU Tech 8th floor canteen.  
  - **C – Back**: Returns to the main menu.
    
     ![ITAM'S LOST KITCHEN Find Food Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20FIND%20FOOD.jpg)

---

### 🏪 Food Stall Directory
- Displays a list of food stalls available at the FEU Tech canteen:  
  - **A – Famous Belgian Waffle**  
  - **B – V & V Café**  
  - **C – The Original: Sisig-Ok**  
  - **D – De Original Jamaican Pattie Shop**  
  - **E – I Don’t Wanna Miss a Tea’**  
  - **F – Back** – Returns to the Find Food Menu.
    
   ![ITAM'S LOST KITCHEN Food Stall Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20FOODSTALL.jpg)

---

### 🗺️ Floor Mapping Menu
- Shows an overview of the canteen layout located on the 8th floor of FEU Tech.  
  Includes an option:  
  - **A – Back**: Returns to the previous menu.
    
     ![ITAM'S LOST KITCHEN Floor Plan Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20FLOORPLAN.jpg)

---

### 🍱 Specific Food Stall Menu
- After selecting a stall, users can choose:  
  - **A – See Food Menu**: Displays all available food and drink items for that stall.  
  - **B – Order**: Allows the user to choose items and input quantities.  
  - **C – Back**: Returns to the list of food stalls.
    
     ![ITAM'S LOST KITCHEN Specific Food Stall Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20SPECIFICFOOD.jpg)

---

### 📜 Food Menu
- Shows the detailed menu for the selected stall, including prices.  
  Users may return to the previous screen by pressing:  
  - **A – Back**
    
   ![ITAM'S LOST KITCHEN Food Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20FOODMENU.jpg)

---

### 🛒 Order Menu
- Allows users to place their orders by selecting food items and quantities.  
  If no items are selected, the program prompts:  
  > “You need to order at least one [1] food in order to proceed.”  
  After ordering, users can choose:  
  - **11 – Done Ordering**: Proceeds to payment options.  
  - **12 – Back**: Returns to the previous menu.

     ![ITAM'S LOST KITCHEN Order Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20ORDERMENU.jpg)

---

### 💳 Post-Order Menu
- Once ordering is complete, users decide how to proceed:  
  - **A – Continue to Receipt**: Moves to the receipt verification process.  
  - **B – Remove Order**: Deletes all current orders and resets variables.  
  - **X – Exit**: Ends the ordering process and returns to the main menu.
 
   ![ITAM'S LOST KITCHEN Post Order Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20POSTORDER.jpg)

---

### 💵 Receipt Verification
- Users choose their payment method:  
  - **A – Cash**: Prompts for payment amount and calculates total and change.  
  - **B – GCash**: Displays a digital receipt showing total amount and transaction record.

     ![ITAM'S LOST KITCHEN Rceipt Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20RECEIPT%202.jpg)

---

### 🧾 Final Receipt
- The final output shows a detailed proof of purchase, including:  
  - Customer name  
  - Date and time of order  
  - Payment method (Cash or GCash)  
  - Order details and total amount  
  - Cash received and change (if applicable)

This receipt serves as a simulated verification for the canteen stall transaction.

![ITAM'S LOST KITCHEN Main Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20RECEIPT%201.jpg)
![ITAM'S LOST KITCHEN Main Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20RECEIPT%203.jpg)
![ITAM'S LOST KITCHEN Main Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20RECEIPT%204.jpg)
![ITAM'S LOST KITCHEN Main Menu](https://fucdounsdyfahuicxpls.supabase.co/storage/v1/object/public/ITAMS/ITK%20-%20RECEIPT%205.jpg)
 
---

## 🧩 Technologies

| Technology / Concept  | Purpose                                             |
| --------------------- | --------------------------------------------------- |
| **C++ Programming**   | Core language used to build the system              |
| **Switch Statements** | Manage menu-driven navigation                       |
| **If–Else & Loops**   | Handle logic flow and user input repetition         |
| **Functions**         | Organize features into reusable modules             |
| **Console I/O**       | Interface for displaying menus and user interaction |


---

## 🧩 Development Objectives

1. Apply fundamental programming structures such as decision-making, looping, and modular functions.
2. Simulate real-world ordering and transaction systems through C++ logic.
3. Design a clear and organized console-based interface for user ease.
4. Showcase integration of multiple programming concepts in one cohesive project.
5. Encourage creativity and campus appreciation through a food-centered application.

---

## 🏆 Project Team

Submitted by:

- Finez, Jorell Andrei
- De Ramas, Francis Jr. T.
- Lacandazo, Larry Louie T.
- Reyes, Joana Ester C.


Submitted to:

**Dr. Marie Luvett I. Goh**  
Department of Information Technology  
FEU Institute of Technology 

> Computer Programming 1 (CCS0003)

> Submission Date: November 24, 2022

---

## 🔗 Related Links  

- [ITAM’S LOST KITCHEN Official Documentation](https://drive.google.com/file/d/1n-cPP_5iRZkjEs24KekNU941qUq1sXLa/view?usp=sharing)  

---

## 📜 License

This project is licensed under the **MIT License** — open for educational and personal use.

---

> “Good food, smart choice — ITAM’S LOST KITCHEN helps you find and order your favorites with ease.”

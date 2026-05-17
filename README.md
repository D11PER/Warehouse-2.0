# Warehouse 2.0 🏭

**Warehouse 2.0** is a simple **C++ console application** for warehouse management.  
It provides an easy way to **add, delete, replace, search, sort, and display products** stored in a warehouse.

✨ Key highlights:
- Lightweight and beginner-friendly C++ project
- Interactive text-based menu
- Covers basic data structures and algorithms (arrays, sorting, searching)
- Perfect for learning file handling and console applications



▶️ How to Run

1. Compile the project:
g++ main.cpp -o warehouse

2. Run the program:
./warehouse

## 📋 Program Menu

| Option | Action |
|--------|--------|
| 1 | Add product |
| 2 | Delete product |
| 3 | Replace product |
| 4 | Search by name |
| 5 | Search by manufacturer |
| 6 | Search by price |
| 7 | Search by group |
| 8 | Search by arrival date |
| 9 | Search by expiration date |
| 10 | Sort by price |
| 11 | Sort by group |
| 12 | Show all products |
| 0 | Exit |


## 📌 Functions Overview

| Function | Description |
|----------|-------------|
| `add_product(Product_haus products[], int& count)` | Adds a new product to the warehouse. |
| `dell_product(Product_haus products[], int& count, int neg)` | Deletes a product at a given position. |
| `replace_product(Product_haus products[], int& count, int& pos)` | Replaces an existing product with new data. |
| `search_name(Product_haus products[], int& count)` | Searches products by name. |
| `search_manufacturer(Product_haus products[], int& count)` | Searches products by manufacturer. |
| `search_price(Product_haus products[], int& count)` | Searches products by price. |
| `search_group(Product_haus products[], int& count)` | Searches products by group. |
| `search_arriveldate(Product_haus products[], int& count)` | Searches products by arrival date. |
| `search_expirationdate(Product_haus products[], int& count)` | Searches products by expiration date. |
| `sort_by_price(Product_haus products[], int count)` | Sorts products by price. |
| `sort_by_group(Product_haus products[], int count)` | Sorts products by group. |
| `show_product(Product_haus products[], int count)` | Displays all products. |
| `print_struct_array(Product_haus* products, int count)` | Prints products in a structured format. |



## 🚀 Future Improvements

Planned enhancements for the project include:

- **File storage support** – Save and load products from external files.
- **Improved input handling** – Allow string input with spaces (e.g., product names with multiple words).
- **Advanced filtering** – Add filtering options such as searching by price range.
- **User interface upgrades** – Make the console menu more user-friendly and visually appealing.











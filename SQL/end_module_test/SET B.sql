SET B:



1. Retrieve the names of all customers from the `Customers` table, sorted in alphabetical order.

->  select customer_name
    from Customers
    order by customer_name asc;



2. Fetch the top 10 most expensive products from the `Products` table.


-> select product_name, price
   from Products
   order by price desc
   limit 10;

3:Write a query to get the second-highest salary from the `Employees` table.

->  select max(salary) as second_highest_salary
    from employees
    where salary<(select max(salary) from employees);


4. Get the total count of customers from each city in the `Customers` table.


-> select city, count(*) as customer_count
   from Customers
   group by city;

5: Retrieve department-wise total salary from the `Employees` table but only include
departments where the total salary is greater than 2,00,000.

-> select department, sum(salary) AS total_salary
   from Employees
   group by department
   having sum(salary)>200000;


6:. Extract only the last four characters of the `phone\_number` column and first three characters
     **from `customerName` columns from the `Customers` table.** 

-> select substring(phone_number, -4) as last_four_digits,
   substring(customerName, 1, 3) as first_three_letters
   from Customers;


7: Write a query to retrieve products where the `product\_name` contains "Pro".


-> select *
   from Products
   where product_name like "%Pro%";

8: Fetch the total number of students per course from the `Students` table, only for courses that
have at least 30 students enrolled.

-> select course, count(*) AS student_count
   from Students
   group by course
   having count(*)>=30;


9: Write an SQL query to find the number of orders placed in each month of the year.

->select month(order_date) AS order_month,
  count(*) as order_count
  from Orders
  group by month(order_date)
  order by order_month;


10:Get the highest and lowest salary per department from the `Employees` table.

-> select
  department,
  max(salary) as highest_salary,
  min(salary) as lowest_salary
  from employees
  group by department;


11:SELECT SUBSTRING('Database', 1, 4);

->  a)data


12. Which clause is used to sort the results in descending order?

-> a) order by desc

13. What is the default sorting order of `ORDER BY` if no direction (ASC/DESC) is specified?

->a) ASC

14:SELECT ROUND(15.678, 2);

15.68

15. Which SQL function is used to count the number of rows in a table?

->b) count()


16. Question:
You have two tables:
• Orders with columns: order_id, customer_id, order_date, total_amount.
• Customers with columns: customer_id, customer_name.
• O/P- customer_id, customer_name, avg_order_value
Write an SQL query to find the average order value (total_amount) for each customer. Only
include customers who have made more than 2 orders.

-> select c.customer_id,c.customer_name,
   avg(o.total_amount) as avg_order_value
   from Customers c
   join Orders o on c.customer_id = o.customer_id
   group by c.customer_id, c.customer_name
   having count(o.order_id)>=2;


17. Question:
You have two tables:
• Products with columns: product_id, product_name.
• Sales with columns: sale_id, product_id, sale_date, amount.
• O/P- product_id | product_name | sales_count
Write an SQL query to find the number of sales made for each product. Only include products
with more than 50 sales.


-> select
   p.product_id,
   p.product_name,
   count(s.sale_id) as sales_count
   from Products p
   join Sales s on p.product_id = s.product_id
   group by p.product_id, p.product_name
   having count(s.sale_id)>50;

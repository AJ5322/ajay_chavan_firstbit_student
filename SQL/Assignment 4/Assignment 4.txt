1. Write a query to display the names (first_name, last_name) using alias
name “First Name", "Last Name.

mysql> select first_name as "first_name",
    -> last_name as "last name"
    -> from employees;
+------------+-----------+
| first_name | last name |
+------------+-----------+
| steven     | king      |
| neena      | kochhar   |
| lex        | de haan   |
| alexander  | hunold    |
| bruce      | ernst     |
| david      | austin    |
| valli      | pataballa |
| diana      | lorentz   |
| nancy      | greenberg |
| daniel     | faviet    |
+------------+-----------+
10 rows in set (0.06 sec)

2. Write a query to get unique department ID from employee table.

mysql> select distinct department_id
    -> from employees;
+---------------+
| department_id |
+---------------+
| 10            |
| 60            |
| 30            |
| 80            |
+---------------+
4 rows in set (0.05 sec)

3. Write a query to get all employee details from the employee table order
by first name, descending

mysql> select * from employees
    -> order by first_name desc;
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email        | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+4. Write a query to get the names (first_name, last_name), salary, PF of all
the employees (PF is calculated as 15% of salary).
|         106 | valli      | pataballa | not availble | 590-423-4560 | 1987-06-23 | IT-PROG | 52272.00 |          0.10 | 103        | 60            |
|         100 | steven     | king      | not availble | 515-123-4567 | 1987-06-17 | AD-PRES | 26136.00 |          0.10 | 200        | 10            |
|         101 | neena      | kochhar   | not availble | 515-123-4568 | 1987-06-18 | AD-VP   | 18513.00 |          0.10 | 200        | 10            |
|         108 | nancy      | greenberg | not availble | 515-124-4569 | 1987-06-25 | SA-MAN  | 13068.00 |          0.10 | 145        | 80            |
|         102 | lex        | de haan   | not availble | 515-123-4569 | 1987-06-19 | AD-VP   | 18513.00 |          0.10 | 200        | 10            |
|         107 | diana      | lorentz   | not availble | 590.423.5567 | 1987-06-24 | IT-PROG |  4573.80 |          0.10 | 114        | 30            |
|         105 | david      | austin    | not availble | 590.423.4569 | 1987-06-22 | IT-PROG |  5227.20 |          0.10 | 103        | 60            |
|         109 | daniel     | faviet    | not availble | 515.124.4169 | 1987-06-26 | SA-MAN  |  9801.00 |          0.10 | 145        | 80            |
|         104 | bruce      | ernst     | not availble | 590-423-4568 | 1987-06-21 | IT-PROG |  6534.00 |          0.10 | 103        | 60            |
|         103 | alexander  | hunold    | not availble | 590.423.4567 | 1987-06-20 | IT-PROG |  9801.00 |          0.10 | 103        | 60            |
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+
10 rows in set (0.01 sec)

4. Write a query to get the names (first_name, last_name), salary, PF of all
the employees (PF is calculated as 15% of salary).

mysql> select first_name,last_name,
    -> salary,salary*0.015 as "PF"
    -> from employees;
+------------+-----------+----------+-----------+
| first_name | last_name | salary   | PF        |
+------------+-----------+----------+-----------+
| steven     | king      | 26136.00 | 392.04000 |
| neena      | kochhar   | 18513.00 | 277.69500 |
| lex        | de haan   | 18513.00 | 277.69500 |
| alexander  | hunold    |  9801.00 | 147.01500 |
| bruce      | ernst     |  6534.00 |  98.01000 |
| david      | austin    |  5227.20 |  78.40800 |
| valli      | pataballa | 52272.00 | 784.08000 |
| diana      | lorentz   |  4573.80 |  68.60700 |
| nancy      | greenberg | 13068.00 | 196.02000 |
| daniel     | faviet    |  9801.00 | 147.01500 |
+------------+-----------+----------+-----------+
10 rows in set (0.01 sec)


5. Write a query to get the employee ID, names (first_name, last_name),
salary in ascending order of salary.

mysql> select employee_id,first_name,last_name,salary
    -> from employees
    -> order by salary asc;
+-------------+------------+-----------+----------+
| employee_id | first_name | last_name | salary   |
+-------------+------------+-----------+----------+
|         107 | diana      | lorentz   |  4573.80 |
|         105 | david      | austin    |  5227.20 |
|         104 | bruce      | ernst     |  6534.00 |
|         103 | alexander  | hunold    |  9801.00 |
|         109 | daniel     | faviet    |  9801.00 |
|         108 | nancy      | greenberg | 13068.00 |
|         101 | neena      | kochhar   | 18513.00 |
|         102 | lex        | de haan   | 18513.00 |
|         100 | steven     | king      | 26136.00 |
|         106 | valli      | pataballa | 52272.00 |
+-------------+------------+-----------+----------+
10 rows in set (0.01 sec)

6. Write a query to get the total salaries payable to employees.

mysql> select sum(salary)
    -> from employees;
+-------------+
| sum(salary) |
+-------------+
|   164439.00 |
+-------------+
1 row in set (0.01 sec)

7. Write a query to get the maximum and minimum salary from employees
table.

mysql> select max(salary),
    -> min(salary)
    -> from employees;
+-------------+-------------+
| max(salary) | min(salary) |
+-------------+-------------+
|    52272.00 |     4573.80 |
+-------------+-------------+
1 row in set (0.01 sec)

8. Write a query to get the average salary and number of employees in the
employees table.

mysql> select avg(salary),
    -> count(*)
    -> from employees;
+--------------+----------+
| avg(salary)  | count(*) |
+--------------+----------+
| 16443.900000 |       10 |
+--------------+----------+
1 row in set (0.01 sec)


9. Write a query to get the number of employees working with the
company.


mysql> select count(*)
    -> from employees;
+----------+
| count(*) |
+----------+
|       10 |
+----------+
1 row in set (0.01 sec)


10.Write a query to get the number of jobs available in the employees table

mysql> select count(distinct job_id)
    -> from employees;
+------------------------+
| count(distinct job_id) |
+------------------------+
|                      4 |
+------------------------+
1 row in set (0.01 sec)


11.Write a query to select first 10 records from a table.

mysql> select * from employees
    -> limit 10;
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email        | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+
|         100 | steven     | king      | not availble | 515-123-4567 | 1987-06-17 | AD-PRES | 26136.00 |          0.10 | 200        | 10            |
|         101 | neena      | kochhar   | not availble | 515-123-4568 | 1987-06-18 | AD-VP   | 18513.00 |          0.10 | 200        | 10            |
|         102 | lex        | de haan   | not availble | 515-123-4569 | 1987-06-19 | AD-VP   | 18513.00 |          0.10 | 200        | 10            |
|         103 | alexander  | hunold    | not availble | 590.423.4567 | 1987-06-20 | IT-PROG |  9801.00 |          0.10 | 103        | 60            |
|         104 | bruce      | ernst     | not availble | 590-423-4568 | 1987-06-21 | IT-PROG |  6534.00 |          0.10 | 103        | 60            |
|         105 | david      | austin    | not availble | 590.423.4569 | 1987-06-22 | IT-PROG |  5227.20 |          0.10 | 103        | 60            |
|         106 | valli      | pataballa | not availble | 590-423-4560 | 1987-06-23 | IT-PROG | 52272.00 |          0.10 | 103        | 60            |
|         107 | diana      | lorentz   | not availble | 590.423.5567 | 1987-06-24 | IT-PROG |  4573.80 |          0.10 | 114        | 30            |
|         108 | nancy      | greenberg | not availble | 515-124-4569 | 1987-06-25 | SA-MAN  | 13068.00 |          0.10 | 145        | 80            |
|         109 | daniel     | faviet    | not availble | 515.124.4169 | 1987-06-26 | SA-MAN  |  9801.00 |          0.10 | 145        | 80            |
+-------------+------------+-----------+--------------+--------------+------------+---------+----------+---------------+------------+---------------+
10 rows in set (0.01 sec)


12.Write a query to display the name (first_name, last_name) and salary for
all employees whose salary is not in the range $10,000 through $15,000

mysql> select first_name ,last_name,salary
    -> from employees
    -> where salary not between 10000 and 15000;
+------------+-----------+----------+
| first_name | last_name | salary   |
+------------+-----------+----------+
| steven     | king      | 26136.00 |
| neena      | kochhar   | 18513.00 |
| lex        | de haan   | 18513.00 |
| alexander  | hunold    |  9801.00 |
| bruce      | ernst     |  6534.00 |
| david      | austin    |  5227.20 |
| valli      | pataballa | 52272.00 |
| diana      | lorentz   |  4573.80 |
| daniel     | faviet    |  9801.00 |
+------------+-----------+----------+
9 rows in set (0.01 sec)



13.Write a query to display the name (first_name, last_name) and
department ID of all employees in departments 30 or 100 in ascending
order.

mysql> select first_name,last_name department_id
    -> from employees
    -> where department_id in(30,100)
    -> order by department_id asc;
+------------+---------------+
| first_name | department_id |
+------------+---------------+
| diana      | lorentz       |
+------------+---------------+
1 row in set (0.01 sec)


14.Write a query to display the name (first_name, last_name) and salary for
all employees whose salary is not in the range $10,000 through $15,000
and are in department 30 or 100.




15.Write a query to display the name (first_name, last_name) and hire date
for all employees who were hired in 1987.

mysql> select first_name,
    -> last_name,
    -> hire_date
    -> from employees
    -> where year(hire_date)=1987;
+------------+-----------+------------+
| first_name | last_name | hire_date  |
+------------+-----------+------------+
| steven     | king      | 1987-06-17 |
| neena      | kochhar   | 1987-06-18 |
| lex        | de haan   | 1987-06-19 |
| alexander  | hunold    | 1987-06-20 |
| bruce      | ernst     | 1987-06-21 |
| david      | austin    | 1987-06-22 |
| valli      | pataballa | 1987-06-23 |
| diana      | lorentz   | 1987-06-24 |
| nancy      | greenberg | 1987-06-25 |
| daniel     | faviet    | 1987-06-26 |
+------------+-----------+------------+
10 rows in set (0.01 sec)



16.Write a query to display the first_name of all employees who have both
"b" and "c" in their first name

mysql> select first_name
    -> from employees
    -> where first_name like '%b%' and first_name like '%c%';
+------------+
| first_name |
+------------+
| bruce      |
+------------+
1 row in set (0.01 sec)


17.Write a query to display the last name, job, and salary for all employees
whose job is that of a Programmer or a Shipping Clerk, and whose salary
is not equal to $4,500, $10,000, or $15,000.

mysql> select last_name,job_id,salary
    -> from employees
    -> where job_id in("programmer","shipping cleark")
    -> and salary not in(4500,10000,15000);
Empty set (0.00 sec)

18.Write a query to display the last name of employees whose names have
exactly 6 characters.

mysql> select last_name
    -> from employees
    -> where length(last_name)=6;
+-----------+
| last_name |
+-----------+
| hunold    |
| austin    |
| faviet    |
+-----------+
3 rows in set (0.01 sec)


19.Write a query to display the last name of employees having 'e' as the third
character.


mysql> select last_name
    -> from employees
    -> where last_name like '--e%';
Empty set (0.00 sec)


20.Write a query to display the jobs/designations available in the employees
table.


mysql> select distinct job_id
    -> from employees;
+---------+
| job_id  |
+---------+
| AD-PRES |
| AD-VP   |
| IT-PROG |
| SA-MAN  |
+---------+
4 rows in set (0.03 sec)


21.Write a query to select all record from employees where last name in
'BLAKE', 'SCOTT', 'KING' and 'FORD'


mysql> select * from employees
    -> where last_name in("blake","scott","frod");
Empty set (0.01 sec)



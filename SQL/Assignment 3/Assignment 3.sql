QUE:-1

mysql> insert into employees values(100,"steven","king","sking","515-123-4567","1987-06-17","AD-PRES","24000.00","0.00","200","10");
Query OK, 1 row affected (0.01 sec)

mysql> table employees;
+-------------+------------+-----------+-------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+-------+--------------+------------+---------+----------+---------------+------------+---------------+
|         100 | steven     | king      | sking | 515-123-4567 | 1987-06-17 | AD-PRES | 24000.00 |          0.00 | 200        | 10            |
+-------------+------------+-----------+-------+--------------+------------+---------+----------+---------------+------------+---------------+
1 row in set (0.00 sec)

mysql> insert into employees values(101,"neena","kochhar","nkocchar","515-123-4568","1987-06-18","AD-VP","17000.00","0.00","200","10");
Query OK, 1 row affected (0.01 sec)

mysql> insert into employees values(102,"lex","de haan","ldehaan","515-123-4569","1987-06-19","AD-VP","17000.00","0.00","200","10"),(103,"alexander","hunold","ahunold","590.423.4567","1987-06-20","IT-PROG","9000.00","0.00","103","60");
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> insert into employees values(104,"bruce","ernst","bernst","590-423-4568","1987-06-21","IT-PROG","6000.00","0.00","103","60"),(105,"david","austin","daustin","590.423.4569","1987-06-22","IT-PROG","4800.00","0.00","103","60");
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> insert into employees values(106,"valli","pataballa","vpatabal","590-423-4560","1987-06-23","IT-PROG","48000.00","0.00","103","60"),(107,"diana","lorentz","dlorentz","590.423.5567","1987-06-24","IT-PROG","4200.00","0.00","114","30");
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> insert into employees values(108,"nancy","greenberg","ngreenbe","515-124-4569","1987-06-25","SA-MAN","12000.00","0.00","145","80"),(109,"daniel","faviet","dfaviet","515.124.4169","1987-06-26","SA-MAN","9000.00","0.00","145","80");
Query OK, 2 rows affected (0.02 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> table employees;
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email    | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
|         100 | steven     | king      | sking    | 515-123-4567 | 1987-06-17 | AD-PRES | 24000.00 |          0.00 | 200        | 10            |
|         101 | neena      | kochhar   | nkocchar | 515-123-4568 | 1987-06-18 | AD-VP   | 17000.00 |          0.00 | 200        | 10            |
|         102 | lex        | de haan   | ldehaan  | 515-123-4569 | 1987-06-19 | AD-VP   | 17000.00 |          0.00 | 200        | 10            |
|         103 | alexander  | hunold    | ahunold  | 590.423.4567 | 1987-06-20 | IT-PROG |  9000.00 |          0.00 | 103        | 60            |
|         104 | bruce      | ernst     | bernst   | 590-423-4568 | 1987-06-21 | IT-PROG |  6000.00 |          0.00 | 103        | 60            |
|         105 | david      | austin    | daustin  | 590.423.4569 | 1987-06-22 | IT-PROG |  4800.00 |          0.00 | 103        | 60            |
|         106 | valli      | pataballa | vpatabal | 590-423-4560 | 1987-06-23 | IT-PROG | 48000.00 |          0.00 | 103        | 60            |
|         107 | diana      | lorentz   | dlorentz | 590.423.5567 | 1987-06-24 | IT-PROG |  4200.00 |          0.00 | 114        | 30            |
|         108 | nancy      | greenberg | ngreenbe | 515-124-4569 | 1987-06-25 | SA-MAN  | 12000.00 |          0.00 | 145        | 80            |
|         109 | daniel     | faviet    | dfaviet  | 515.124.4169 | 1987-06-26 | SA-MAN  |  9000.00 |          0.00 | 145        | 80            |
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
10 rows in set (0.00 sec)

QUE:-2

Write a SQL statement to insert 3 rows by a single insert statement.

mysql> insert into departments values
    -> (90,"finance",205,2300),
    -> (100,"accounting",206,2300),
    -> (110,"legal",207,2200);
Query OK, 3 rows affected (0.01 sec)
Records: 3  Duplicates: 0  Warnings: 0
       ^C
mysql> table departments;
+---------------+-----------------+------------+-------------+
| department_id | department_name | manager_id | location_id |
+---------------+-----------------+------------+-------------+
|            10 | administration  |        200 |        1700 |
|            20 | marketing       |        201 |        1800 |
|            30 | purchasing      |        114 |        1700 |
|            40 | human resources |        203 |        2400 |
|            50 | shipping        |        121 |        1500 |
|            60 | IT              |        103 |        1400 |
|            70 | public relation |        204 |        2700 |
|            80 | sales           |        145 |        2500 |
|            90 | finance         |        205 |        2300 |
|           100 | accounting      |        206 |        2300 |
|           110 | legal           |        207 |        2200 |
+---------------+-----------------+------------+-------------+
11 rows in set (0.00 sec)


Que:-3

Write a SQL statement to insert one row in jobs table to ensure that no duplicate
value will be entered in the job_id column.



mysql> insert into jobs values("AD_PRES","President","20000","40000"),("AD-VP","Administration vice precident","15000","30000"),("AD-ASST","Administration assistant","3000","6000"),("FI-MGR","finance manager","8200","16000"),("FI-ACCOUNT","Accountant","4200","9000"),("AC-MGR","Accounting manager","8200","16000"),("AC_ACCOUNT","Public_Accounting","4200","9000"),("SA-MAN","Sales manager","10000","20000");
Query OK, 8 rows affected (0.01 sec)
Records: 8  Duplicates: 0  Warnings: 0

mysql> table jobs;
+------------+-------------------------------+------------+------------+
| job_id     | job_title                     | min_salary | max_salary |
+------------+-------------------------------+------------+------------+
| AC_ACCOUNT | Public_Accounting             |    4200.00 |    9000.00 |
| AC-MGR     | Accounting manager            |    8200.00 |   16000.00 |
| AD_PRES    | President                     |   20000.00 |   40000.00 |
| AD-ASST    | Administration assistant      |    3000.00 |    6000.00 |
| AD-VP      | Administration vice precident |   15000.00 |   30000.00 |
| FI-ACCOUNT | Accountant                    |    4200.00 |    9000.00 |
| FI-MGR     | finance manager               |    8200.00 |   16000.00 |
| SA-MAN     | Sales manager                 |   10000.00 |   20000.00 |
+------------+-------------------------------+------------+------------+
8 rows in set (0.00 sec)

mysql> insert into jobs values("mk_analyst","marketing","5000","11000");
Query OK, 1 row affected (0.01 sec)

mysql> table jobs;
+------------+-------------------------------+------------+------------+
| job_id     | job_title                     | min_salary | max_salary |
+------------+-------------------------------+------------+------------+
| AC_ACCOUNT | Public_Accounting             |    4200.00 |    9000.00 |
| AC-MGR     | Accounting manager            |    8200.00 |   16000.00 |
| AD_PRES    | President                     |   20000.00 |   40000.00 |
| AD-ASST    | Administration assistant      |    3000.00 |    6000.00 |
| AD-VP      | Administration vice precident |   15000.00 |   30000.00 |
| FI-ACCOUNT | Accountant                    |    4200.00 |    9000.00 |
| FI-MGR     | finance manager               |    8200.00 |   16000.00 |
| mk_analyst | marketing                     |    5000.00 |   11000.00 |
| SA-MAN     | Sales manager                 |   10000.00 |   20000.00 |
+------------+-------------------------------+------------+------------+
9 rows in set (0.00 sec)

QUE:-4
Write SQL statement to increment salary of each emp by 10%.

mysql> update employees
    -> set salary=salary*1.10;
Query OK, 10 rows affected (0.01 sec)
Rows matched: 10  Changed: 10  Warnings: 0

mysql> table employees;
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email    | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
|         100 | steven     | king      | sking    | 515-123-4567 | 1987-06-17 | AD-PRES | 26400.00 |          0.00 | 200        | 10            |
|         101 | neena      | kochhar   | nkocchar | 515-123-4568 | 1987-06-18 | AD-VP   | 18700.00 |          0.00 | 200        | 10            |
|         102 | lex        | de haan   | ldehaan  | 515-123-4569 | 1987-06-19 | AD-VP   | 18700.00 |          0.00 | 200        | 10            |
|         103 | alexander  | hunold    | ahunold  | 590.423.4567 | 1987-06-20 | IT-PROG |  9900.00 |          0.00 | 103        | 60            |
|         104 | bruce      | ernst     | bernst   | 590-423-4568 | 1987-06-21 | IT-PROG |  6600.00 |          0.00 | 103        | 60            |
|         105 | david      | austin    | daustin  | 590.423.4569 | 1987-06-22 | IT-PROG |  5280.00 |          0.00 | 103        | 60            |
|         106 | valli      | pataballa | vpatabal | 590-423-4560 | 1987-06-23 | IT-PROG | 52800.00 |          0.00 | 103        | 60            |
|         107 | diana      | lorentz   | dlorentz | 590.423.5567 | 1987-06-24 | IT-PROG |  4620.00 |          0.00 | 114        | 30            |
|         108 | nancy      | greenberg | ngreenbe | 515-124-4569 | 1987-06-25 | SA-MAN  | 13200.00 |          0.00 | 145        | 80            |
|         109 | daniel     | faviet    | dfaviet  | 515.124.4169 | 1987-06-26 | SA-MAN  |  9900.00 |          0.00 | 145        | 80            |
+-------------+------------+-----------+----------+--------------+------------+---------+----------+---------------+------------+---------------+
10 rows in set (0.00 sec)

QUE:-5

Write a SQL statement to change the email column of employees table with 'not
available' for those employees whose department_id is 80 and gets a
commission is less than .20%


mysql> update employees
    -> set email="not available"
    -> where department_id=80
    -> and commision_pct<0.002;
Query OK, 2 rows affected (0.01 sec)
Rows matched: 2  Changed: 2  Warnings: 0

QUE:-6

Write a SQL statement to change the email column of employees table with 'not
available' for those employees who belongs to the 'Purchasing' department.

mysql> update employees
    -> set email="not available"
    -> where department_id=30;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> table employees;
+-------------+------------+-----------+---------------+--------------+------------+---------+----------+---------------+------------+---------------+
| employee_id | first_name | last_name | email         | phone_number | hire_date  | job_id  | salary   | commision_pct | manager_id | department_id |
+-------------+------------+-----------+---------------+--------------+------------+---------+----------+---------------+------------+---------------+
|         100 | steven     | king      | sking         | 515-123-4567 | 1987-06-17 | AD-PRES | 26136.00 |          0.00 | 200        | 10            |
|         101 | neena      | kochhar   | nkocchar      | 515-123-4568 | 1987-06-18 | AD-VP   | 18513.00 |          0.00 | 200        | 10            |
|         102 | lex        | de haan   | ldehaan       | 515-123-4569 | 1987-06-19 | AD-VP   | 18513.00 |          0.00 | 200        | 10            |
|         103 | alexander  | hunold    | ahunold       | 590.423.4567 | 1987-06-20 | IT-PROG |  9801.00 |          0.00 | 103        | 60            |
|         104 | bruce      | ernst     | bernst        | 590-423-4568 | 1987-06-21 | IT-PROG |  6534.00 |          0.00 | 103        | 60            |
|         105 | david      | austin    | daustin       | 590.423.4569 | 1987-06-22 | IT-PROG |  5227.20 |          0.00 | 103        | 60            |
|         106 | valli      | pataballa | vpatabal      | 590-423-4560 | 1987-06-23 | IT-PROG | 52272.00 |          0.00 | 103        | 60            |
|         107 | diana      | lorentz   | not available | 590.423.5567 | 1987-06-24 | IT-PROG |  4573.80 |          0.00 | 114        | 30            |
|         108 | nancy      | greenberg | not available | 515-124-4569 | 1987-06-25 | SA-MAN  | 13068.00 |          0.00 | 145        | 80            |
|         109 | daniel     | faviet    | not available | 515.124.4169 | 1987-06-26 | SA-MAN  |  9801.00 |          0.00 | 145        | 80            |
+-------------+------------+-----------+---------------+--------------+------------+---------+----------+---------------+------------+---------------+
10 rows in set (0.00 sec)


QUE:-7

Write a SQL statement to change the email and commission_pct column of
employees table with 'not available' and 0.10 for all employees.


mysql> update employees
    -> set email="not availble",
    -> commision_pct=0.10;
Query OK, 10 rows affected (0.01 sec)
Rows matched: 10  Changed: 10  Warnings: 0

mysql> table employees;
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
10 rows in set (0.00 sec)




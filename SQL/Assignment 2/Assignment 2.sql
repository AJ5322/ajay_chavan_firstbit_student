1) Create the table Member, Books and Issue without any constraints as
mentioned in the schema description above.

2) View the structure of the tables.


mysql> create table member(
    -> member_id int,
    -> member_name varchar(30),
    -> member_address varchar(50),
    -> acc_open_date date,
    -> membership_date varchar(20),
    -> fees_paid int,
    -> max_books_allowed int,
    -> penalty_amount decimal(7,2));
Query OK, 0 rows affected (0.03 sec)

mysql> desc member ;
+-------------------+--------------+------+-----+---------+-------+
| Field             | Type         | Null | Key | Default | Extra |
+-------------------+--------------+------+-----+---------+-------+
| member_id         | int          | YES  |     | NULL    |       |
| member_name       | varchar(30)  | YES  |     | NULL    |       |
| member_address    | varchar(50)  | YES  |     | NULL    |       |
| acc_open_date     | date         | YES  |     | NULL    |       |
| membership_date   | varchar(20)  | YES  |     | NULL    |       |
| fees_paid         | int          | YES  |     | NULL    |       |
| max_books_allowed | int          | YES  |     | NULL    |       |
| penalty_amount    | decimal(7,2) | YES  |     | NULL    |       |
+-------------------+--------------+------+-----+---------+-------+
8 rows in set (0.00 sec)

mysql> create table issue(
    -> lib_issue_id int,
    -> book_no int,
    -> member_id int,
    -> issue_date date,
    -> return_date date);
Query OK, 0 rows affected (0.02 sec)

mysql> desc issue;
+--------------+------+------+-----+---------+-------+
| Field        | Type | Null | Key | Default | Extra |
+--------------+------+------+-----+---------+-------+
| lib_issue_id | int  | YES  |     | NULL    |       |
| book_no      | int  | YES  |     | NULL    |       |
| member_id    | int  | YES  |     | NULL    |       |
| issue_date   | date | YES  |     | NULL    |       |
| return_date  | date | YES  |     | NULL    |       |
+--------------+------+------+-----+---------+-------+
5 rows in set (0.01 sec)

mysql> create table books(
    -> book_no int,
    -> book_name varchar(30),
    -> author_name varchar(30),
    -> cost decimal(7,2),
    -> category char(10));
Query OK, 0 rows affected (0.02 sec)

mysql> desc books;
+-------------+--------------+------+-----+---------+-------+
| Field       | Type         | Null | Key | Default | Extra |
+-------------+--------------+------+-----+---------+-------+
| book_no     | int          | YES  |     | NULL    |       |
| book_name   | varchar(30)  | YES  |     | NULL    |       |
| author_name | varchar(30)  | YES  |     | NULL    |       |
| cost        | decimal(7,2) | YES  |     | NULL    |       |
| category    | char(10)     | YES  |     | NULL    |       |
+-------------+--------------+------+-----+---------+-------+
5 rows in set (0.01 sec)

3) Drop the Member table

mysql> drop table member;
Query OK, 0 rows affected (0.02 sec)

4) Create the table Member again as per the schema description with the
following constraints.
a. Member_Id – Primary Key
b. Membership_type - ‘Lifetime’,’ Annual’, ‘Half Yearly’,’ Quarterly’

mysql> create table member(
    -> member_id int primary key,
    -> member_name varchar(30),
    -> member_address varchar(50),
    -> acc_open_date date,
    -> membership_date varchar(20),
    -> fees_paid int,
    -> max_books_allowed int,
    -> penalty_amount decimal(7,2),
    -> membership_type enum('lifetime','annual','half yearly','quarterly'));
Query OK, 0 rows affected (0.02 sec)

mysql> desc member;
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
| Field             | Type                                                | Null | Key | Default | Extra |
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
| member_id         | int                                                 | NO   | PRI | NULL    |       |
| member_name       | varchar(30)                                         | YES  |     | NULL    |       |
| member_address    | varchar(50)                                         | YES  |     | NULL    |       |
| acc_open_date     | date                                                | YES  |     | NULL    |       |
| membership_date   | varchar(20)                                         | YES  |     | NULL    |       |
| fees_paid         | int                                                 | YES  |     | NULL    |       |
| max_books_allowed | int                                                 | YES  |     | NULL    |       |
| penalty_amount    | decimal(7,2)                                        | YES  |     | NULL    |       |
| membership_type   | enum('lifetime','annual','half yearly','quarterly') | YES  |     | NULL    |       |
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
9 rows in set (0.00 sec)

5) Modify the table Member increase the width of the member name to 30
characters.

mysql> alter table member
    -> modify column member_name varchar(30);
Query OK, 0 rows affected (0.01 sec)
Records: 0  Duplicates: 0  Warnings: 0

6) Add a column named as Reference of Char(30) to Issue table.

mysql> alter table issue
    -> add column reference char(30);
Query OK, 0 rows affected (0.04 sec)
Records: 0  Duplicates: 0  Warnings: 0

7) Delete/Drop the column Reference from Issue.

mysql> alter table issue
    -> drop column reference;
Query OK, 0 rows affected (0.03 sec)
Records: 0  Duplicates: 0  Warnings: 0

8) Rename the table Issue to Lib_Issue.

mysql> rename table issue to lib_issue;
Query OK, 0 rows affected (0.02 sec)

Q:9

mysql> insert into member values(1,"richa sharma","pune","10-12-05","lifetime",25000,5,50),(2,"garima sen","pune","25-07-08","annual",1000,3,null);
Query OK, 2 rows affected (0.00 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> table member;
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
| member_id | member_name  | member_address | acc_open_date | membership_type | fees_paid | max_books_allowed | penalty_amount |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
|         1 | richa sharma | pune           | 2010-12-05    | lifetime        |     25000 |                 5 |          50.00 |
|         2 | garima sen   | pune           | 2025-07-08    | annual          |      1000 |                 3 |           NULL |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
2 rows in set (0.00 sec)

10) Insert at least 5 records with suitable data.

mysql> table member;
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
| member_id | member_name  | member_address | acc_open_date | membership_type | fees_paid | max_books_allowed | penalty_amount |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
|         1 | richa sharma | pune           | 2010-12-05    | lifetime        |     25000 |                 5 |          50.00 |
|         2 | garima sen   | pune           | 2025-07-08    | annual          |      1000 |                 3 |           NULL |
|         3 | sneha        | banglore       | 2009-11-04    | lifetime        |     20000 |                 6 |          60.00 |
|         4 | shweta       | mumbai         | 2024-06-07    | half yearly     |      1200 |                 4 |           NULL |
|         5 | Ajay         | chennai        | 2012-06-03    | half yearly     |     15000 |                 4 |          40.00 |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
5 rows in set (0.00 sec)


11) Modify the column Member_name. Decrease the width of the member
name to 20 characters. (If it does not allow state the reason for that)

mysql> alter table member
    -> modify column member_name varchar(20);
Query OK, 5 rows affected (0.04 sec)
Records: 5  Duplicates: 0  Warnings: 0

12) Try to insert a record with Max_Books_Allowed = 110, Observe the
error that comes.

mysql> insert into member
    -> (max_books_allowed)
    -> values(110);
ERROR 1364 (HY000): Field 'member_id' doesn't have a default value

13) Generate another table named Member101 using a Create command
along with a simple SQL query on member table.

mysql> create table member101
    -> as
    -> select * from member;
Query OK, 5 rows affected (0.08 sec)
Records: 5  Duplicates: 0  Warnings: 0

14) Add the constraints on columns max_books_allowed and penalty_amt
as follows
a. max_books_allowed < 100
b. penalty_amt maximum 1000
Also give names to the constraints.

mysql> alter table member
    -> add constraint chk_max_book_allowed
    -> check(max_books_allowed<=100);
    -> check(penalty_amount<=1000);
Query OK, 5 rows affected (0.05 sec)
Records: 5  Duplicates: 0  Warnings: 0

15) Drop the table books.

mysql> drop table books;
Query OK, 0 rows affected (0.01 sec)

16) Create table Books again as per the schema description with the
following constraints.
a. Book_No – Primary Key
b. Book_Name – Not Null
c. Category – System, Fiction, Database, RDBMS, Others.

mysql> create table books(
    -> book_no int primary key,
    -> book_name varchar(20) not null,
    -> author_name varchar(20),
    -> cost decimal(7,2),
    -> category enum('system','fiction','database','RDBMS','others'));
Query OK, 0 rows affected (0.03 sec)

Q-17:

mysql> insert into books values(101,"let us C","denis ritchie","450",'system'),(102,"oracle-complete ref","loni","550",'database'),(103,"mastering SQL","loni","250",'database'),(104,"pl sql-ref","scott urman","750",'database');
Query OK, 4 rows affected (0.03 sec)
Records: 4  Duplicates: 0  Warnings: 0

mysql> table member;
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
| member_id | member_name  | member_address | acc_open_date | membership_type | fees_paid | max_books_allowed | penalty_amount |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
|         1 | richa sharma | pune           | 2010-12-05    | lifetime        |     25000 |                 5 |          50.00 |
|         2 | garima sen   | pune           | 2025-07-08    | annual          |      1000 |                 3 |           NULL |
|         3 | sneha        | banglore       | 2009-11-04    | lifetime        |     20000 |                 6 |          60.00 |
|         4 | shweta       | mumbai         | 2024-06-07    | half yearly     |      1200 |                 4 |           NULL |
|         5 | Ajay         | chennai        | 2012-06-03    | half yearly     |     15000 |                 4 |          40.00 |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
5 rows in set (0.01 sec)

18) Insert more records in Book table.

mysql> insert into books values(105,"The Guide","R.K. Narayan","450",'system'),(106,"Leo Tolstoy","War and Peace","550",'database'),(107,"The Hobbit","J.R.R. Tolkien","255",'database');
Query OK, 3 rows affected (0.01 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> table books
    -> ;
+---------+---------------------+----------------+--------+----------+
| book_no | book_name           | author_name    | cost   | category |
+---------+---------------------+----------------+--------+----------+
|     101 | let us C            | denis ritchie  | 450.00 | system   |
|     102 | oracle-complete ref | loni           | 550.00 | database |
|     103 | mastering SQL       | loni           | 250.00 | database |
|     104 | pl sql-ref          | scott urman    | 750.00 | database |
|     105 | The Guide           | R.K. Narayan   | 450.00 | system   |
|     106 | Leo Tolstoy         | War and Peace  | 550.00 | database |
|     107 | The Hobbit          | J.R.R. Tolkien | 255.00 | database |
+---------+---------------------+----------------+--------+----------+
7 rows in set (0.00 sec)


19) View the data in the tables using simple SQL query.

mysql>  select * from books;
+---------+---------------------+----------------+--------+----------+
| book_no | book_name           | author_name    | cost   | category |
+---------+---------------------+----------------+--------+----------+
|     101 | let us C            | denis ritchie  | 450.00 | system   |
|     102 | oracle-complete ref | loni           | 550.00 | database |
|     103 | mastering SQL       | loni           | 250.00 | database |
|     104 | pl sql-ref          | scott urman    | 750.00 | database |
|     105 | The Guide           | R.K. Narayan   | 450.00 | system   |
|     106 | Leo Tolstoy         | War and Peace  | 550.00 | database |
|     107 | The Hobbit          | J.R.R. Tolkien | 255.00 | database |
+---------+---------------------+----------------+--------+----------+
7 rows in set (0.08 sec)

20) Insert into Book following data.

mysql> update books
    -> set book_name="national geographic",
    -> author_name="adis scott",
    -> cost="1000",
    -> category="science" where book_no=105;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

21) Rename the table Lib_Issue to Issue.

mysql> rename table lib_issue to issue;
Query OK, 0 rows affected (0.01 sec)

22) Drop table Issue.

mysql> drop table issue;
Query OK, 0 rows affected (0.01 sec)

23) As per the given structure Create table Issue again with following
constraints.

 Lib_Issue_Id-Primary key
 Book_No- foreign key
 Member_id - foreign key
 Issue_date
 Return_date

mysql> create table issue(
    -> lib_issue_id int primary key,
    -> book_no int,
    -> member_id int,
    -> issue_date date,
    -> return_date date,
    -> constraint fk_book foreign key(book_no)references books(book_no),
    -> constraint fk_member foreign key(member_id)references member(member_id));
Query OK, 0 rows affected (0.06 sec)

Q:24-

mysql> insert into issue (lib_issue_id,book_no,member_id,issue_date)values(7001,101,1,"2006-12-10"),
    -> (7002,102,2,"2006-12-25"),
    -> (7003,104,1,"2006-01-15"),
    -> (7004,101,1,"2006-07-04"),
    -> (7005,104,2,"2006-11-15"),
    -> (7006,101,3,"2006-02-18");
Query OK, 6 rows affected (0.01 sec)
Records: 6  Duplicates: 0  Warnings: 0

mysql> table issue;
+--------------+---------+-----------+------------+-------------+
| lib_issue_id | book_no | member_id | issue_date | return_date |
+--------------+---------+-----------+------------+-------------+
|         7001 |     101 |         1 | 2006-12-10 | NULL        |
|         7002 |     102 |         2 | 2006-12-25 | NULL        |
|         7003 |     104 |         1 | 2006-01-15 | NULL        |
|         7004 |     101 |         1 | 2006-07-04 | NULL        |
|         7005 |     104 |         2 | 2006-11-15 | NULL        |
|         7006 |     101 |         3 | 2006-02-18 | NULL        |
+--------------+---------+-----------+------------+-------------+
6 rows in set (0.01 sec)

25) Remove the constraints on Issue table


mysql> alter table issue
    -> drop foreign key fk_book;
Query OK, 0 rows affected (0.02 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> alter table issue
    -> drop foreign key fk_member;
Query OK, 0 rows affected (0.01 sec)
Records: 0  Duplicates: 0  Warnings: 0

26) Insert a record in Issue table. The member_id should not exist in

member table.

mysql> insert into issue(lib_issue_id,book_no,member_id,issue_date) values(103,2,6,"2006-03-23");
Query OK, 1 row affected (0.01 sec)

mysql> table issue;
+--------------+---------+-----------+------------+-------------+
| lib_issue_id | book_no | member_id | issue_date | return_date |
+--------------+---------+-----------+------------+-------------+
|          103 |       2 |         6 | 2006-03-23 | NULL        |
|         7001 |     101 |         1 | 2006-12-10 | NULL        |
|         7002 |     102 |         2 | 2006-12-25 | NULL        |
|         7003 |     104 |         1 | 2006-01-15 | NULL        |
|         7004 |     101 |         1 | 2006-07-04 | NULL        |
|         7005 |     104 |         2 | 2006-11-15 | NULL        |
|         7006 |     101 |         3 | 2006-02-18 | NULL        |
+--------------+---------+-----------+------------+-------------+
7 rows in set (0.00 sec)

27) Now enable the constraints of Issue table. Observe the error

mysql> alter table issue
    -> add constraint fk_book foreign key (book_no) references books(book_no),
    -> add constraint fk_member foreign key (member_id) references member(member_id);
ERROR 1452 (23000): Cannot add or update a child row: a foreign key constraint fails (`library_system`.`#sql-5bec_1a`, CONSTRAINT `fk_book` FOREIGN KEY (`book_no`) REFERENCES `books` (`book_no`))

28) Delete the record inserted at Q-27) and enable the constraints.

mysql> delete from issue where member_id=6;
Query OK, 1 row affected (0.01 sec)

mysql> alter table issue
    -> add constraint fk_book foreign key (book_no) references books(book_no),
    -> add constraint fk_member foreign key (member_id) references member(member_id);
Query OK, 6 rows affected (0.06 sec)
Records: 6  Duplicates: 0  Warnings: 0

29) Try to delete the record of member id 1 from member table and

observe the error .

mysql> delete  from member where member_id=1;
ERROR 1451 (23000): Cannot delete or update a parent row: a foreign key constraint fails (`library_system`.`issue`, CONSTRAINT `fk_member` FOREIGN KEY (`member_id`) REFERENCES `member` (`member_id`))

30) View the data and structure of all the three tables Member,

Issue, Book.

mysql> table issue;
+--------------+---------+-----------+------------+-------------+
| lib_issue_id | book_no | member_id | issue_date | return_date |
+--------------+---------+-----------+------------+-------------+
|         7001 |     101 |         1 | 2006-12-10 | NULL        |
|         7002 |     102 |         2 | 2006-12-25 | NULL        |
|         7003 |     104 |         1 | 2006-01-15 | NULL        |
|         7004 |     101 |         1 | 2006-07-04 | NULL        |
|         7005 |     104 |         2 | 2006-11-15 | NULL        |
|         7006 |     101 |         3 | 2006-02-18 | NULL        |
+--------------+---------+-----------+------------+-------------+
6 rows in set (0.00 sec)

mysql> table books;
+---------+---------------------+----------------+---------+----------+
| book_no | book_name           | author_name    | cost    | category |
+---------+---------------------+----------------+---------+----------+
|     101 | let us C            | denis ritchie  |  450.00 | system   |
|     102 | oracle-complete ref | loni           |  550.00 | database |
|     103 | mastering SQL       | loni           |  250.00 | database |
|     104 | pl sql-ref          | scott urman    |  750.00 | database |
|     105 | national geographic | adis scott     | 1000.00 | science  |
|     106 | Leo Tolstoy         | War and Peace  |  550.00 | database |
|     107 | The Hobbit          | J.R.R. Tolkien |  255.00 | database |
+---------+---------------------+----------------+---------+----------+
7 rows in set (0.00 sec)

mysql> table member;
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
| member_id | member_name  | member_address | acc_open_date | membership_type | fees_paid | max_books_allowed | penalty_amount |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
|         1 | richa sharma | pune           | 2010-12-05    | lifetime        |     25000 |                 5 |          50.00 |
|         2 | garima sen   | pune           | 2025-07-08    | annual          |      1000 |                 3 |           NULL |
|         3 | sneha        | banglore       | 2009-11-04    | lifetime        |     20000 |                 6 |          60.00 |
|         4 | shweta       | mumbai         | 2024-06-07    | half yearly     |      1200 |                 4 |           NULL |
|         5 | Ajay         | chennai        | 2012-06-03    | half yearly     |     15000 |                 4 |          40.00 |
+-----------+--------------+----------------+---------------+-----------------+-----------+-------------------+----------------+
5 rows in set (0.00 sec)

mysql> desc member;
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
| Field             | Type                                                | Null | Key | Default | Extra |
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
| member_id         | int                                                 | NO   | PRI | NULL    |       |
| member_name       | varchar(20)                                         | YES  |     | NULL    |       |
| member_address    | varchar(50)                                         | YES  |     | NULL    |       |
| acc_open_date     | date                                                | YES  |     | NULL    |       |
| membership_type   | enum('lifetime','annual','half yearly','quartelry') | YES  |     | NULL    |       |
| fees_paid         | int                                                 | YES  |     | NULL    |       |
| max_books_allowed | int                                                 | YES  |     | NULL    |       |
| penalty_amount    | decimal(7,2)                                        | YES  |     | NULL    |       |
+-------------------+-----------------------------------------------------+------+-----+---------+-------+
8 rows in set (0.00 sec)

mysql> desc issue;
+--------------+------+------+-----+---------+-------+
| Field        | Type | Null | Key | Default | Extra |
+--------------+------+------+-----+---------+-------+
| lib_issue_id | int  | NO   | PRI | NULL    |       |
| book_no      | int  | YES  | MUL | NULL    |       |
| member_id    | int  | YES  | MUL | NULL    |       |
| issue_date   | date | YES  |     | NULL    |       |
| return_date  | date | YES  |     | NULL    |       |
+--------------+------+------+-----+---------+-------+
5 rows in set (0.00 sec)

mysql> desc books;
+-------------+----------------------------------------------------------------+------+-----+---------+-------+
| Field       | Type                                                           | Null | Key | Default | Extra |
+-------------+----------------------------------------------------------------+------+-----+---------+-------+
| book_no     | int                                                            | NO   | PRI | NULL    |       |
| book_name   | varchar(20)                                                    | NO   |     | NULL    |       |
| author_name | varchar(20)                                                    | YES  |     | NULL    |       |
| cost        | decimal(7,2)                                                   | YES  |     | NULL    |       |
| category    | enum('system','fiction','database','RDBMS','science','others') | YES  |     | NULL    |       |
+-------------+----------------------------------------------------------------+------+-----+---------+-------+
5 rows in set (0.00 sec)


31) Modify the Return_Date of 7004,7005 to 15 days after the

Issue_date.

mysql> update issue
    -> set return_date=date_add(issue_date,interval 15 day)
    -> where lib_issue_id in(7004,7005);
Query OK, 2 rows affected (0.01 sec)
Rows matched: 2  Changed: 2  Warnings: 0

mysql> table issue
    -> ;
+--------------+---------+-----------+------------+-------------+
| lib_issue_id | book_no | member_id | issue_date | return_date |
+--------------+---------+-----------+------------+-------------+
|         7001 |     101 |         1 | 2006-12-10 | NULL        |
|         7002 |     102 |         2 | 2006-12-25 | NULL        |
|         7003 |     104 |         1 | 2006-01-15 | NULL        |
|         7004 |     101 |         1 | 2006-07-04 | 2006-07-19  |
|         7005 |     104 |         2 | 2006-11-15 | 2006-11-30  |
|         7006 |     101 |         3 | 2006-02-18 | NULL        |
+--------------+---------+-----------+------------+-------------+
6 rows in set (0.00 sec)

32) Remove all the records from Issue table where member_ID is 1

and Issue date in before 10-Dec-06.

mysql> delete from issue
    -> where member_id=1 and issue_date<="2006-12-10";
Query OK, 3 rows affected (0.01 sec)

mysql> table issue
    -> ;
+--------------+---------+-----------+------------+-------------+
| lib_issue_id | book_no | member_id | issue_date | return_date |
+--------------+---------+-----------+------------+-------------+
|         7002 |     102 |         2 | 2006-12-25 | NULL        |
|         7005 |     104 |         2 | 2006-11-15 | 2006-11-30  |
|         7006 |     101 |         3 | 2006-02-18 | NULL        |
+--------------+---------+-----------+------------+-------------+
3 rows in set (0.00 sec)

33) Remove all the records from Book table with category other

than RDBMS and Database.

mysql> delete from books
    -> where category not in('RDBMS','database');
ERROR 1451 (23000): Cannot delete or update a parent row: a foreign key constraint fails (`library_system`.`issue`, CONSTRAINT `fk_book` FOREIGN KEY (`book_no`) REFERENCES `books` (`book_no`))

34) Remove the table Member.

mysql> drop table member;
ERROR 3730 (HY000): Cannot drop table 'member' referenced by a foreign key constraint 'fk_member' on table 'issue'.

35) Remove the table Book.
mysql> drop table books;
ERROR 3730 (HY000): Cannot drop table 'books' referenced by a foreign key constraint 'fk_book' on table 'issue'.


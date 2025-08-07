Assignment 1:

hotel management table

create database hotel;
use hotel;

1: Create table customer(
    -> c_id int primary key,
    -> c_name varchar(20),
    -> email_id varchar(20),
    -> mob_no varchar(20),
    -> reg_date date);
Query OK, 0 rows affected (0.06 sec)

mysql> desc customer;
+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| c_id     | int         | NO   | PRI | NULL    |       |
| c_name   | varchar(20) | YES  |     | NULL    |       |
| email_id | varchar(20) | YES  |     | NULL    |       |
| mob_no   | varchar(20) | YES  |     | NULL    |       |
| reg_date | date        | YES  |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+
5 rows in set (0.01 sec)

-----------------------------------------------------------
2:mysql> create table Room(
    -> room_id int primary key,
    -> room_type varchar(20),
    -> room_per_night varchar(20),
    -> availability_status varchar(20));
Query OK, 0 rows affected (0.02 sec)



mysql> desc room;
+---------------------+-------------+------+-----+---------+-------+
| Field               | Type        | Null | Key | Default | Extra |
+---------------------+-------------+------+-----+---------+-------+
| room_id             | int         | NO   | PRI | NULL    |       |
| room_type           | varchar(20) | YES  |     | NULL    |       |
| room_per_night      | varchar(20) | YES  |     | NULL    |       |
| availability_status | varchar(20) | YES  |     | NULL    |       |
+---------------------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

-----------------------------------------------------------
3: mysql> create table Booking(
    -> booking_id int primary key,
    -> c_id int,
    -> room_id int,
    -> booking_date date
    -> ,
    -> check_in_date date,
    -> check_out_date date,
    -> total_rent int);
Query OK, 0 rows affected (0.03 sec)

mysql> desc booking;
+----------------+------+------+-----+---------+-------+
| Field          | Type | Null | Key | Default | Extra |
+----------------+------+------+-----+---------+-------+
| booking_id     | int  | NO   | PRI | NULL    |       |
| c_id           | int  | YES  |     | NULL    |       |
| room_id        | int  | YES  |     | NULL    |       |
| booking_date   | date | YES  |     | NULL    |       |
| check_in_date  | date | YES  |     | NULL    |       |
| check_out_date | date | YES  |     | NULL    |       |
| total_rent     | int  | YES  |     | NULL    |       |
+----------------+------+------+-----+---------+-------+
7 rows in set (0.00 sec)


---------------------------------------------------------

4:mysql> create table food_service(
    -> food_item_id int primary key,
    -> item_name varchar(20),
    -> item_price int,
    -> quantity varchar(20),
    -> service_date date);
    -> c_id int, 
Query OK, 0 rows affected (0.02 sec)

mysql> desc food_service;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| food_item_id | int         | NO   | PRI | NULL    |       |
| item_name    | varchar(20) | YES  |     | NULL    |       |
| item_price   | int         | YES  |     | NULL    |       |
| quantity     | varchar(20) | YES  |     | NULL    |       |
| service_date | date        | YES  |     | NULL    |       |
| c_id         | int         | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
6 rows in set (0.00 sec)
-----------------------------------------------------------
-----------------------------------------------------------


5:mysql> create table laundry_service(
    -> service_id int primary key,
    -> c_id int,
    -> number_of_clothes int,
    -> rate_per_cloth int,
    -> service_date date,
    -> total_charge int);
Query OK, 0 rows affected (0.01 sec)

mysql> desc laundry_service;
+-------------------+------+------+-----+---------+-------+
| Field             | Type | Null | Key | Default | Extra |
+-------------------+------+------+-----+---------+-------+
| service_id        | int  | NO   | PRI | NULL    |       |
| c_id              | int  | YES  |     | NULL    |       |
| number_of_clothes | int  | YES  |     | NULL    |       |
| rate_per_cloth    | int  | YES  |     | NULL    |       |
| service_date      | date | YES  |     | NULL    |       |
| total_charge      | int  | YES  |     | NULL    |       |
+-------------------+------+------+-----+---------+-------+
6 rows in set (0.00 sec)

-----------------------------------------------------------
6:mysql> create table site_visit(
    -> visit_id int primary key,
    -> c_id int,
    -> vehicle_type varchar(20),
    -> rate_per_day int,
    -> number_of_days int,
    -> total_cost int,
    -> visit_date date);
Query OK, 0 rows affected (0.02 sec)

mysql> desc site_visit;
+----------------+-------------+------+-----+---------+-------+
| Field          | Type        | Null | Key | Default | Extra |
+----------------+-------------+------+-----+---------+-------+
| visit_id       | int         | NO   | PRI | NULL    |       |
| c_id           | int         | YES  |     | NULL    |       |
| vehicle_type   | varchar(20) | YES  |     | NULL    |       |
| rate_per_day   | int         | YES  |     | NULL    |       |
| number_of_days | int         | YES  |     | NULL    |       |
| total_cost     | int         | YES  |     | NULL    |       |
| visit_date     | date        | YES  |     | NULL    |       |
+----------------+-------------+------+-----+---------+-------+
7 rows in set (0.00 sec)

-----------------------------------------------------------

8:mysql> create table invoice(
    -> invoice_id int primary key,
    -> c_id int,
    -> booking_id int,
    -> total_room_rent int,
    -> total_service_charges int,
    -> grand_total int,
    -> invoice_date date);
Query OK, 0 rows affected (0.01 sec)

mysql> desc invoice;
+-----------------------+------+------+-----+---------+-------+
| Field                 | Type | Null | Key | Default | Extra |
+-----------------------+------+------+-----+---------+-------+
| invoice_id            | int  | NO   | PRI | NULL    |       |
| c_id                  | int  | YES  |     | NULL    |       |
| booking_id            | int  | YES  |     | NULL    |       |
| total_room_rent       | int  | YES  |     | NULL    |       |
| total_service_charges | int  | YES  |     | NULL    |       |
| grand_total           | int  | YES  |     | NULL    |       |
| invoice_date          | date | YES  |     | NULL    |       |
+-----------------------+------+------+-----+---------+-------+
7 rows in set (0.00 sec)

----------------------------------------------------------

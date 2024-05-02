Here's the content formatted into markdown:

```markdown
# SQL Cheat Sheet

## Table Creation and Manipulation

```sql
CREATE TABLE Sanchit(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50)
);

INSERT INTO Sanchit(id, name)
VALUES
(1, “Sanchit” ),
(2, “John”),
(3, “Doe”);
```

## Different Types of SQL Commands

- DDL: Create, Alter, Drop, Truncate, Rename
- DQL: Select
- DML: Insert, Update, Delete
- DCL: Grant, Revoke
- TCL: Start Transaction, SavePoint, Rollback, Commit

## Constraints

- NOT NULL
- Primary key
- Foreign Key
- Unique 
- Default
- Check

###
```sql
CREATE TABLE your_table_name (
    UniqueColumn INT UNIQUE,
    DefaultColumn VARCHAR(50) DEFAULT 'default_value',
    CheckColumn INT,
    CONSTRAINT check_constraint CHECK (CheckColumn > 0)
);
```

## Rename Command 

```sql
RENAME TABLE table_name TO new_table_name;
```

## Add Constraint

```sql
ALTER TABLE table_name 
ADD CONSTRAINT cons_name 
FOREIGN KEY(id) REFERENCES dept(d_id);
```

## Sum Salary of Department > 150000

```sql
SELECT d.d_id AS D_id, SUM(salary) AS total_salary
FROM employee 
GROUP BY D_id 
HAVING total_sal > 150000
ORDER BY tot_sal DESC;
```

## Aggregate Functions

- sum()
- count()
- avg()
- min()
- max()

## Group By Clause

### Number of Students per city

```sql
SELECT city, COUNT(students_name) AS tot_std
FROM Student
GROUP BY city;
```

### Avg marks per city 

```sql
SELECT city, AVG(marks) AS avg_marks
FROM student 
GROUP BY city 
ORDER BY avg_marks DESC;
```

### Total payment according to the payment method

```sql
SELECT mode, COUNT(customer) AS tot_cust
FROM payments
GROUP BY mode;
```

### Number of students per city whose marks cross 90

```sql
SELECT city, COUNT(students) AS tot_std
FROM students
GROUP BY city 
HAVING marks > 90
ORDER BY tot_std DESC;
```

## Update Command

```sql
UPDATE table_name
SET col1 = val1, col2 = val2
WHERE conditions;

-- Eg: update Student 
-- set grade = ‘a’
-- where grade = ‘0’;
```

## Cascading

Used in the Foreign key Table

1. On delete cascade
2. On update cascade (eg if the id changes in the parent table it should  be reflected in this table also)

## Alter commands

```sql
ADD Column ( Add Col col_name d_type, constraint )
Drop Column  (  Drop Column Col_name )
Rename Table ( Rename To New_name )
Change Column (Totally) -> ( Change Column old_name new_name new_Dtype new_Constraint )
Change Constraint ( Modify col_name new_dtype  new_constraint )
```

## Drop and Truncate

```sql
TRUNCATE TABLE table_name;
DROP TABLE table_name;
```

## String Check using Like 

```sql
SELECT * FROM xyz WHERE name LIKE ‘a__%’; -- [ _ and % ] 
```

## In, And, Between Operator

```sql
SELECT * FROM products 
WHERE category_id IN (1, 2, 3 );

SELECT * FROM products 
WHERE order_date BETWEEN (2023-01-01 AND ’2024-01-01’); -- [ YYYY-MM-DD ]
```

## Index

```sql
CREATE INDEX idx_name
ON Table_name (Col_name1 , col_name2);

CREATE UNIQUE INDEX idx_name
ON table_name (col_name , col_name2);

ALTER TABLE table_name
DROP INDEX idx_name;
```

## DCL - Data Control Language

```sql
GRANT privilege_type
ON Object_name
TO user_or_role;

-- Eg:-	Grant select 
-- ON Employee
-- TO analyst;

REVOKE privilege_type
ON Object_name
FROM user_or_role;

-- Eg:  	Revoke select 
-- ON Employee
-- FROM Analyst;
```

## TCL - Transaction Control Language

```sql
COMMIT, ROLLBACK, SAVEPOINT;

-- Begin 
-- Update accounts
-- Set balance = balance - 100
-- Where acc_no = 123;
-- Savepoint before_withdraw
-- Update account
-- Set balance = balance + 100
-- Where ac_no = 321;
-- // if Error occurred here 
-- Rollback to before_withdrawal;
```

## Joins

- Types 
	1. Inner Joins 
	2. Outer Joins (Left, Right, Full)
	3. Left Exclusive Join
	4. Right Exclusive Join
	5. Self Join

## Sub Query

### Get the names of all students who scored more than class average

```sql
SELECT name, marks
FROM Students
WHERE marks > (SELECT AVG(marks) FROM students);
```

### Get the name of the students whose roll number are even 

```sql
SELECT name, roll_no 
FROM students 
WHERE roll_no % 2 = 0;

-- ELSE

SELECT name, roll_no 
FROM students
WHERE roll_no IN
(SELECT roll_no 
FROM students
WHERE roll_no % 2 = 0);
```

### Find maximum marks of the students whose city is Pune

```sql
SELECT name, marks 
FROM students 
WHERE marks = (SELECT MAX(marks) FROM students WHERE city = “Pune”);

-- ELSE 

SELECT MAX(marks)
FROM students 
WHERE city = “PUNE”;
```

## Views

Views as Virtual Tables (Read Only) created to Serve Specific use cases
They Don’t take Extra Space

```sql
-- Eg:- Sales team needs sales data
-- Manager needs All data except personal  data 

CREATE VIEW view_name
AS
SELECT col_name1, col_name2
FROM table_name;

-- Access the views

SELECT * FROM view_name;
```

## Show Command

```sql
SHOW DATABASES;
SHOW TABLES FROM database_name;
SHOW COLUMNS FROM table_name;
SHOW INDEX FROM table_name;

-- Count rows 
SELECT COUNT(*) FROM table_name;

-- Count Columns 
SELECT COUNT(*) AS Column_count 
FROM information_schema.column 
WHERE table_name = ‘DepartMent’;
```

## Salary Questions

### Second Highest Salary

```sql
SELECT MAX(salary) AS Max__salary
FROM Employee
WHERE max_salary < (SELECT MAX(salary) FROM Employee);
```

### Select top 5 salary 

```sql
SELECT salary 
FROM Employee
ORDER BY salary DESC
LIMIT 5;
```

### Select nth Highest Salary in the table

```sql
SELECT salary
FROM employee 
ORDER BY salary DESC
LIMIT n - 1, 1;
```
```

This should make it easier to read and understand. Let me know if you need further adjustments!
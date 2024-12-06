

Aggregate   function

1. solution     MAX()     function-    returns the largest value within the selected column



   CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)
   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT MAX(salary) FROM employee;

-- SELECT  MAX(salary) FROM employee ;



jokhon id  and employee name soho  max salary  dekhabo  tokhon aivave  solution korte  hobe


     CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)
   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);



INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT id , emp_name , MAX(salary) FROM employee;
















2.  MIN FUNCTION        [    MIN() - returns the smallest value within the selected column  ]


 only  min dekhabe   min () function  use kore tokhon


      CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)
   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT MIN(salary) FROM employee;








  function    jokhon id    and employee name soho  dekhabe   min () function  use kore tokhon}


     CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)
   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT id , emp_name , MIN(salary) FROM employee;








3.  Aggregate   count()  function     [ use of   Aggregate   count()  function ]

      CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)
   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT count(id) FROM employee;







4.Aggregate AVG()  function  returns the average value of a numerical
5. column


      CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)

   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT AVG(salary) FROM employee;







5.   Aggregate  SUM()     function
SUM()   returns the total sum of a numerical column


      CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)

   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, ' Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'Edward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

SELECT sum(salary) FROM employee;








jader namer first  letter D thakbe tader   salary list dekhaw
 CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)

   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, 'Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'DEdward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

 SELECT * FROM employee WHERE emp_name LIKE 'D%';









jader namer first  letter D thakbe   and  jader namer last letter  s thakbe  tader   salary list dekhaw


 CREATE TABLE employee (
id  INT PRIMARY KEY,
   emp_name VARCHAR(100) ,

salary DECIMAL(10,2)

   );


INSERT INTO  employee  (id, emp_name , salary) VALUES (1, 'Alice Johnson ' , 60000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (2, ' Bob Smith' , 55000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (3, 'Charlie Brown' , 70000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (4, 'Diana Ross ' , 45000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (5, 'DEdward White' , 80000.00);

INSERT INTO  employee  (id, emp_name , salary) VALUES (6, 'Fiona Green' , 75000.00);

 SELECT * FROM employee WHERE emp_name LIKE 'D%s%';
















Aggregate     function   uses

MIN() - returns the smallest value within the selected column
MAX() - returns the largest value within the selected column
COUNT() - returns the number of rows in a set
SUM() - returns the total sum of a numerical column
AVG() - returns the average value of a numerical column






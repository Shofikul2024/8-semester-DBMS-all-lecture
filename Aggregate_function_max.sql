 
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
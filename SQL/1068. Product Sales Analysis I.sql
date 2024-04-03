# Write your MySQL query statement below
  
SELECT product_name, year, price 
FROM product as p, sales as s
WHERE p.product_id = s.product_id
 
 

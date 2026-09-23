# Write your MySQL query statement below
select name AS Customers
FROM Customers AS C
LEFT JOIN Orders AS O
ON C.id=O.customerId
WHERE o.customerId IS NULL;
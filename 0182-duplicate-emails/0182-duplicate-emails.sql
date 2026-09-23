# Write your MySQL query statement below
SELECT email
from PERSON
GROUP BY email
having count(email)>1;
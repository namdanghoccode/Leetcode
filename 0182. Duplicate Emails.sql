-- Active: 1755018729527@@localhost@3306@homework
select Email
from Person
group by email
having count(email) > 1;
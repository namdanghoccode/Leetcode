-- Active: 1755018729527@@localhost@3306@homework
use homework;

select class
from Courses
group by class
having count(class) >= 5
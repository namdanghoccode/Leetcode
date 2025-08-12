-- Active: 1755018729527@@localhost@3306@homework
use homework;

select id, movie, description, rating
from Cinema
where description != 'boring' and id % 2 = 1
order by rating desc;
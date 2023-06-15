CREATE TABLE students (id INTEGER, student_name TEXT, PRIMARY KEY(id));
CREATE TABLE houses (id INTEGER, house TEXT, head TEXT, PRIMARY KEY(id));
CREATE TABLE house_assignments (student_id INTEGER, house_id INTEGER, FOREIGN KEY(students.id))
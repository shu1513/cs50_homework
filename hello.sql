CREATE TABLE IF NOT EXISTS hello (id INTEGER, name TEXT, number INTEGER, PRIMARY KEY(id));
CREATE TABLE IF NOT EXISTS station (id INTEGER, name TEXT, PRIMARY KEY(id));
CREATE TABLE IF NOT EXISTS relationships(hello_id INTEGER, station_id INTEGER, FOREIGN KEY(hello_id) REFERENCES hello(id), FOREIGN KEY(station_id) REFERENCES station(id));


#(built-in package) "RMySQL"  provides native connectivity with MySql database
install.packages("RMySQL")

#for loading or to connect with package
library(RMySQL)

# provides connection to db
mysqlconnection = dbConnect(MySQL(), user = 'root', password = '', dbname = 'rdb',host = 'localhost')


# disconnect to clean up the connection to the database.
dbDisconnect(mysqlconnection)

#created a table using a dataframe provided
data=data.frame(rollno=c(11,12,13,14,15,16),name=c("Vaishnavi","Vignesh","Survesh","Raghu","Shivani","Varun"))
data

#create tables in the MySql using the function dbWriteTable().
dbWriteTable(mysqlconnection, "data", data[,],row.names=FALSE,overwrite=TRUE,append=FALSE)
dbSendQuery(mysqlconnection, "insert into data values(18,'Abirami')")

#Read full table into R as a Dataframe
df<-dbReadTable(mysqlconnection, "data")
df

df<-dbReadTable(mysqlconnection, "data", row.names="name")
df

#created table using dbSendQuery() 
dbSendQuery(mysqlconnection, "create table form (id INT ,NAME VARCHAR(100) NOT NULL,SUBJECT VARCHAR(40) NOT NULL)")

# query the database tables in MySql using the function dbSendQuery()
# insert and update

dbSendQuery(mysqlconnection, "insert into form values(201,'Kala','R Program')")
dbSendQuery(mysqlconnection, "insert into form values(202,'Uma','UI')")
dbSendQuery(mysqlconnection, "insert into form values(202,'Uma','DataNetworks')")
dbSendQuery(mysqlconnection,"update form set NAME='Leela' where SUBJECT='DataNetworks'")
dbSendQuery(mysqlconnection,"update form set id=203 where SUBJECT='DataNetworks'")

#drop table
dbSendQuery(mysqlconnection, 'drop table if exists form')

#To retrieve data
dbGetQuery(mysqlconnection,"select * from form")

# Another way
userTables <- dbSendQuery(mysqlconnection, "Select * From  form ")
#next n rows can fetched using dbFetch(userTables).
myTables<-dbFetch(userTables,n=1)
myTables

# to clear results of Usertables
dbClearResult(userTables)


#fetch data of rows 
result = dbSendQuery(mysqlconnection, "select * from form")
data.frame = fetch(result, n = 3)
print(data.frame)
# we now fetch records from the resultSet into a data.frame
data.frame <- fetch(result, n = -1)   
# extract all rows
print(data.frame)

dbClearResult(result)


# list the tables in database
dbListTables(mysqlconnection)

# List the Filed Names of the Table "data" from rdb
dbListFields(mysqlconnection, "data")

#to check the table exists
dbExistsTable(mysqlconnection, "data")

#to remove table
dbRemoveTable(mysqlconnection, "data")




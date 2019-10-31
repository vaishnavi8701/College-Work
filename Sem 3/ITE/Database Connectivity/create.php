<?php 
    include 'connect.php';

    $createSQL = '
        create table admin(
            id int not null,
            username varchar(30) not null,
            password varchar(30) not null
        )
    ';

    if(mysqli_query($connect, $createSQL)){
        echo "Created admin table successfully";
    }else{
        echo "Table is not created";
    }
?>
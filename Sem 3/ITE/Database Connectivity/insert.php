<?php
    include 'connect.php';
    $id = 2;
    $username = 'example';
    $password = 'test';

    $sql = 'insert into admin values("'.$id.'", "'.$username.'", "'.$password.'");';

    //Runninng the query
    if(mysqli_query($connect, $sql)){
        echo 'Inserted successfully';
    }else{
        echo 'Not inserted any data';
    }
?>
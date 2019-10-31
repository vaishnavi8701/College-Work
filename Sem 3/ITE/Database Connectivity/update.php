<?php
    include 'connect.php';
    $id = 2;
    $username = 'exmaple';
    $password = 'test1';
    $tableName = 'admin';

    $newPassword = 'testing1';

    $sql = 'update admin set password = "'.$newPassword.'" where username = "'.$username.'"';

    //Runninng the query
    if(mysqli_query($connect, $sql)){
        echo 'Updated successfully';
    }else{
        echo 'Not Updated';
    }
?>
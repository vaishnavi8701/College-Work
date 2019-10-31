<?php

    //opening the connection
    include 'connect.php';

    $username = 'example';
    $password = 'test';

    //query to select password from the table admin
    $rDB = 'select password from admin where username = "'.$username.'"';

    //running query
    $rDB = mysqli_query($connect,$rDB);

    //fetching the row as associative array
    $rDB = mysqli_fetch_assoc($rDB);

    //fetching password from associative array
    $cPass = $rDB['password'];

    //checking the password 
    if($password == $cPass){
        $sql = 'delete from admin where username = "'.$username.'"';
        
        if(mysqli_query($connect,$sql)){
            echo 'Deleted Successfully';
        }else{
            echo 'Not changed';
        }
    }else{
        echo 'Password does not matched so account cannot be removed';
    }

    //Closing the connection
    mysqli_close($connect);
?>
<?php 
    $host = 'localhost';
    $user = 'root';
    $pass = '';
    $db = 'dbtest';

    $connect = mysqli_connect($host, $user, $pass, $db);

    if(mysqli_connect_error()){
        echo 'Connection failed: '.mysqli_connect_error();
    }else{
         echo 'Connected successfully'.'<br>';
    }
?>
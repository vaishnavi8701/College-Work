<?php
    //opening the connection
    include 'connect.php';

    $username = 'example';
    $password = 'test';

    $sql = 'delete from admin where username = "'.$username.'"';
        
    if(mysqli_query($connect,$sql)){
        echo 'Deleted Successfully';
    }
    else{
        echo 'Not changed';
    }
    
    //Closing the connection
    mysqli_close($connect);
?>
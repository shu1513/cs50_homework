  //javacript for password confirmations in the register.html page.

  const sqlite3 = require('sqlite3').verbose();
  const db = new sqlite3.Database('finance.db');

  function checkUsernameDuplicate() {
      const username = document.getElementById("username").value;

      // Fetch all usernames from the database
      db.all("SELECT * FROM users", (err, usernames_list) => {
          if (err) {
              console.error(err.message);
              return;
          }

          // Check if the entered username already exists
          const isDuplicate = usernames_list.some(name => name.username === username);

          if (isDuplicate) {
              // Display an error message if the username already exists
              document.getElementById("usernameDuplicate").innerHTML = "This username already exists";
              document.getElementById("usernameDuplicate").style.color = "red";
          } else {
              // Clear the error message if the username is not a duplicate
              document.getElementById("usernameDuplicate").innerHTML = "";
                  }
          });
          }

  // Example of how to call the function (e.g., on a button click)
  // document.getElementById("checkUsernameButton").addEventListener("click", checkUsernameDuplicate);


  function validateForm() {
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirmPassword").value;
    const confirmationIcon = document.getElementById("confirmationIcon");

    if (password != confirmPassword) {
      document.getElementById("confirmationMessage").innerHTML = "Passwords do not match";
      document.getElementById("confirmationMessage").className = "invalid";
      confirmationIcon.innerHTML = '';
      return false;
    }
    else if (!/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{8,16}$/.test(password)){
      document.getElementById("confirmationMessage").innerHTML = "Password doesn't meet criteria";
      document.getElementById("confirmationMessage").className = "invalid";
      confirmationIcon.innerHTML = '';
      return false;
    }
    else {
    document.getElementById("confirmationMessage").innerHTML = "Passwords match";
    document.getElementById("confirmationMessage").className = "valid";
    }

    return true;
  }

  function checkPasswordMatch() {
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirmPassword").value;
    const confirmationIcon = document.getElementById("confirmationIcon");
    const confirmationMessage = document.getElementById("confirmationMessage");

    if (password === confirmPassword) {
      confirmationIcon.innerHTML = '<span class="valid">&#10004;</span>';
      confirmationMessage.innerHTML = "Passwords match";
      confirmationMessage.className = "valid";
      return true
    } else {
      confirmationIcon.innerHTML = '';
      confirmationMessage.innerHTML = "Passwords do not match";
      confirmationMessage.className = "invalid";
      return false
    }
  }

  function passwordGuide() {
    const password = document.getElementById("password").value;
    const passwordGuide = document.getElementById("passwordGuide");
    if (!/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{8,16}$/.test(password)) {
      passwordGuide.innerHTML= "8-16 long containing contains at least 1 uppercase and 1 lowercase letter, 1 digit, and 1 symbol."
      passwordGuide.style.color="red"
    }
    else {
      passwordGuide.innerHTML= "8-16 long containing contains at least 1 uppercase and 1 lowercase letter, 1 digit, and 1 symbol."
      passwordGuide.style.color="green"
    }
  }

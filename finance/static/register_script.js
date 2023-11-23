//javacript for password confirmations in the register.html page.

  function validateForm() {
    var password = document.getElementById("password").value;
    var confirmPassword = document.getElementById("confirmPassword").value;

    if (password != confirmPassword) {
      document.getElementById("confirmationMessage").innerHTML = "Passwords do not match";
      document.getElementById("confirmationMessage").className = "invalid";
      return false;
    }

    document.getElementById("confirmationMessage").innerHTML = "Passwords match";
    document.getElementById("confirmationMessage").className = "valid";

    return true;
  }

  function checkPasswordMatch() {
    var password = document.getElementById("password").value;
    var confirmPassword = document.getElementById("confirmPassword").value;
    var confirmationIcon = document.getElementById("confirmationIcon");
    var confirmationMessage = document.getElementById("confirmationMessage");

    if (password === confirmPassword && confirmPassword !== "") {
      confirmationIcon.innerHTML = '<span class="valid">&#10004;</span>';
      confirmationMessage.innerHTML = "Passwords match";
      confirmationMessage.className = "valid";
    } else {
      confirmationIcon.innerHTML = '';
      confirmationMessage.innerHTML = "Passwords do not match";
      confirmationMessage.className = "invalid";
    }
  }

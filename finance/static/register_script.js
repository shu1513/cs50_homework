//javacript for password confirmations in the register.html page.

/*  function validateForm() {
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirmPassword").value;

    if (password != confirmPassword) {
      document.getElementById("confirmationMessage").innerHTML = "Passwords do not match";
      document.getElementById("confirmationMessage").className = "invalid";
      return false;
    }

    document.getElementById("confirmationMessage").innerHTML = "Passwords match";
    document.getElementById("confirmationMessage").className = "valid";

    return true;
  }
*/
  function checkPasswordMatch() {
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirmPassword").value;
    const confirmationIcon = document.getElementById("confirmationIcon");
    const confirmationMessage = document.getElementById("confirmationMessage");

    if (password === confirmPassword && confirmPassword !== "") {
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
    const password = document.getElementByID("password").value;
    
  }

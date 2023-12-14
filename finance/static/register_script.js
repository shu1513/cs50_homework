  //javacript for password confirmations in the register.html page.

  function usernameDuplicate() {
    const username = document.getElementById("password").value;
    const usernames_list = select 
    if username in
  }

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

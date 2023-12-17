//javascript for "/quote"
function validatequote() {
    const quote = document.getElementById("quote").value;
    if (!quote) {
      return false
    }
    else {
      return true
    }
  }

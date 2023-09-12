const addToCartButtons = document.querySelectorAll("button");

addToCartButtons.forEach((button) => {
  button.addEventListener("click", () => {
    const parent = button.parentElement;

    const name = parent.querySelector("#name").innerText;
    const price = parent.querySelector("#price").innerText;

    console.log(name);
    console.log(price);

    addToCart(name, price);
  });
});

function addToCart(name, price) {
  const cart = document.querySelector(".shopping_list");

  const li = document.createElement("li");

  li.innerHTML = `<li class="cart_item">
      <span id="item-name">${name}</span>
      <span>$ <span id="item-price">${price}</span></span>
    </li>`;

  cart.prepend(li);

  total();
}

function total() {
  let sum = 0;
  const list = document.querySelectorAll("#item-price");
  console.log(list);
  list.forEach((element) => {
    sum += parseInt(element.innerText);
  });
  console.log("Total = ", sum);
  const total = document.querySelector("#total-amount");
  total.innerText = `${sum}`;
}

const checkout = document.querySelector("#checkout-btn");

checkout.addEventListener("click", () => {
  window.location.href = "order.html";
});

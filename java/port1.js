// ===== MOBILE MENU TOGGLE =====
const menuToggle = document.getElementById("menuToggle");
const navMenu = document.getElementById("navMenu");

menuToggle.addEventListener("click", () => {
  navMenu.classList.toggle("open");
});

// Close menu when link clicked (on mobile)
const navLinks = document.querySelectorAll(".nav-link");
navLinks.forEach((link) => {
  link.addEventListener("click", () => {
    navMenu.classList.remove("open");
  });
});

// ===== ACTIVE LINK HIGHLIGHT ON SCROLL =====
const sections = document.querySelectorAll("section");

window.addEventListener("scroll", () => {
  let current = "";

  sections.forEach((section) => {
    const sectionTop = section.offsetTop - 120;
    if (pageYOffset >= sectionTop) {
      current = section.getAttribute("id");
    }
  });

  navLinks.forEach((link) => {
    link.classList.remove("active");
    if (link.getAttribute("href") === `#${current}`) {
      link.classList.add("active");
    }
  });
});

// ===== SET CURRENT YEAR IN FOOTER =====
const yearSpan = document.getElementById("year");
yearSpan.textContent = new Date().getFullYear();

// ===== SIMPLE CONTACT FORM HANDLER (FRONTEND ONLY) =====
const contactForm = document.getElementById("contactForm");
const formStatus = document.getElementById("formStatus");

contactForm.addEventListener("submit", (e) => {
  e.preventDefault();

  // Simple fake submit for demo
  formStatus.textContent = "Thanks! Your message has been recorded (demo).";
  formStatus.style.color = "#22c55e";

  contactForm.reset();

  setTimeout(() => {
    formStatus.textContent = "";
  }, 3000);
});
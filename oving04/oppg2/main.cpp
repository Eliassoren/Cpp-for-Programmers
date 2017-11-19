#include <gtkmm.h>
#include <string>
class Window : public Gtk::Window {
private:
  bool firstNameEntered = false;
  bool lastNameEntered = false;

public:
  Gtk::VBox vbox;
  Gtk::Entry firstNameInput;
  Gtk::Entry lastNameInput;
  Gtk::Button button;
  Gtk::Label label;

  Window() {
    button.set_label("Join strings");
    vbox.pack_start(firstNameInput); //Add the widget entry to vbox
    vbox.pack_start(lastNameInput);
    vbox.pack_start(button); //Add the widget button to vbox
    vbox.pack_start(label);  //Add the widget label to vbox
    button.set_sensitive(false);
    add(vbox);  //Add vbox to window
    show_all(); //Show all widgets

    firstNameInput.signal_changed().connect([this]() {
      if (!firstNameInput.get_text().empty()) {
        button.set_sensitive(lastNameEntered);
        firstNameEntered = true;
      } else {
        button.set_sensitive(false);
        firstNameEntered = false;
      }
    });

    lastNameInput.signal_changed().connect([this]() {
      if (!lastNameInput.get_text().empty()) {
        button.set_sensitive(firstNameEntered);
        lastNameEntered = true;
      } else {
        button.set_sensitive(false);
        lastNameEntered = false;
      }

    });

    button.signal_clicked().connect([this]() {
      label.set_text("Names combined: " + firstNameInput.get_text() + " " + lastNameInput.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}

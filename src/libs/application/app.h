#ifndef CTEXT_APP_H_
#define CTEXT_APP_H_

#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>

/**
 * The structure which contains the interface pointer
 */
typedef struct {
  GtkWidget *w_main;                      // Pointer to text view object
  GtkFileChooser *w_dlg_file_choose;      // Pointer to file chooser dialog box
  GtkButton *btn_ok;                      // Ok buton in file chooser
  GtkButton *btn_next;                    // Next buton
  GtkComboBoxText *btn_deroul;            // Combo Box Text buton
  GtkImage *img_previewer;                // Image previewer on the main window
  GdkPixbuf *pix_buf;                     // Pixel Buffer to scale the image
  GdkPixbuf *raw_buf;                     // Copy if pixbuf
  GtkLayout *layout_img;
  int step;
  GtkBox *brad_box;
  GtkSpinButton *btn_s;
  GtkSpinButton *btn_t;
} app_widgets;


#endif
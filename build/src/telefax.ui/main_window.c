/* main_window.c generated by valac 0.30.0, the Vala compiler
 * generated from main_window.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define TELEFAX_UI_TYPE_MAIN_WINDOW (telefax_ui_main_window_get_type ())
#define TELEFAX_UI_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_UI_TYPE_MAIN_WINDOW, telefaxuiMainWindow))
#define TELEFAX_UI_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_UI_TYPE_MAIN_WINDOW, telefaxuiMainWindowClass))
#define TELEFAX_UI_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_UI_TYPE_MAIN_WINDOW))
#define TELEFAX_UI_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_UI_TYPE_MAIN_WINDOW))
#define TELEFAX_UI_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_UI_TYPE_MAIN_WINDOW, telefaxuiMainWindowClass))

typedef struct _telefaxuiMainWindow telefaxuiMainWindow;
typedef struct _telefaxuiMainWindowClass telefaxuiMainWindowClass;
typedef struct _telefaxuiMainWindowPrivate telefaxuiMainWindowPrivate;

struct _telefaxuiMainWindow {
	GtkWindow parent_instance;
	telefaxuiMainWindowPrivate * priv;
};

struct _telefaxuiMainWindowClass {
	GtkWindowClass parent_class;
};


static gpointer telefax_ui_main_window_parent_class = NULL;

GType telefax_ui_main_window_get_type (void) G_GNUC_CONST;
enum  {
	TELEFAX_UI_MAIN_WINDOW_DUMMY_PROPERTY
};
telefaxuiMainWindow* telefax_ui_main_window_new (void);
telefaxuiMainWindow* telefax_ui_main_window_construct (GType object_type);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
	gtk_main_quit ();
}


telefaxuiMainWindow* telefax_ui_main_window_construct (GType object_type) {
	telefaxuiMainWindow * self = NULL;
	self = (telefaxuiMainWindow*) g_object_new (object_type, NULL);
	gtk_window_set_title ((GtkWindow*) self, "Telefax main window in telefax.ui namespace");
	gtk_container_set_border_width ((GtkContainer*) self, (guint) 10);
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
	gtk_window_set_default_size ((GtkWindow*) self, 350, 70);
	g_signal_connect ((GtkWidget*) self, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	gtk_widget_show_all ((GtkWidget*) self);
	return self;
}


telefaxuiMainWindow* telefax_ui_main_window_new (void) {
	return telefax_ui_main_window_construct (TELEFAX_UI_TYPE_MAIN_WINDOW);
}


static void telefax_ui_main_window_class_init (telefaxuiMainWindowClass * klass) {
	telefax_ui_main_window_parent_class = g_type_class_peek_parent (klass);
}


static void telefax_ui_main_window_instance_init (telefaxuiMainWindow * self) {
}


GType telefax_ui_main_window_get_type (void) {
	static volatile gsize telefax_ui_main_window_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_ui_main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (telefaxuiMainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) telefax_ui_main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (telefaxuiMainWindow), 0, (GInstanceInitFunc) telefax_ui_main_window_instance_init, NULL };
		GType telefax_ui_main_window_type_id;
		telefax_ui_main_window_type_id = g_type_register_static (gtk_window_get_type (), "telefaxuiMainWindow", &g_define_type_info, 0);
		g_once_init_leave (&telefax_ui_main_window_type_id__volatile, telefax_ui_main_window_type_id);
	}
	return telefax_ui_main_window_type_id__volatile;
}



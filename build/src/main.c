/* main.c generated by valac 0.30.0, the Vala compiler
 * generated from main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>


#define TELEFAX_TYPE_TELEFAX (telefax_telefax_get_type ())
#define TELEFAX_TELEFAX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_TYPE_TELEFAX, telefaxTelefax))
#define TELEFAX_TELEFAX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_TYPE_TELEFAX, telefaxTelefaxClass))
#define TELEFAX_IS_TELEFAX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_TYPE_TELEFAX))
#define TELEFAX_IS_TELEFAX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_TYPE_TELEFAX))
#define TELEFAX_TELEFAX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_TYPE_TELEFAX, telefaxTelefaxClass))

typedef struct _telefaxTelefax telefaxTelefax;
typedef struct _telefaxTelefaxClass telefaxTelefaxClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



gint telefax_main (gchar** args, int args_length1);
GType telefax_telefax_get_type (void) G_GNUC_CONST;
telefaxTelefax* telefax_telefax_new (void);
telefaxTelefax* telefax_telefax_construct (GType object_type);


/**
 	* Application entry point
 	*/
gint telefax_main (gchar** args, int args_length1) {
	gint result = 0;
	telefaxTelefax* telefax = NULL;
	telefaxTelefax* _tmp0_ = NULL;
	gtk_init (&args_length1, &args);
	_tmp0_ = telefax_telefax_new ();
	telefax = _tmp0_;
	gtk_main ();
	result = 0;
	_g_object_unref0 (telefax);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return telefax_main (argv, argc);
}



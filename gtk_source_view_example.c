#include <gtk/gtk.h>
#include <gtksourceview/gtksource.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *source_view;
    GtkWidget *scrolled_window;
    GtkSourceBuffer *source_buffer;
    GtkSourceLanguageManager *lang_manager;
    GtkSourceLanguage *language;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main application window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GtkSourceView Example");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

    // Create a scrolled window and pack the GtkSourceView inside it
    scrolled_window = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    gtk_container_add(GTK_CONTAINER(window), scrolled_window);

    // Create a GtkSourceBuffer with syntax highlighting
    lang_manager = gtk_source_language_manager_get_default();
    language = gtk_source_language_manager_get_language(lang_manager, "c");
    source_buffer = gtk_source_buffer_new_with_language(language);

    // Add the GtkSourceView to the window
    source_view = gtk_source_view_new_with_buffer(source_buffer);
    gtk_container_add(GTK_CONTAINER(scrolled_window), source_view);

    // Show all widgets
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}


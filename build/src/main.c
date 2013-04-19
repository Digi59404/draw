/* main.c generated by valac 0.18.1, the Vala compiler
 * generated from main.vala, do not modify */

/* Vala uses a syntax similar to C#. Anything that's in a namespace can be included by doing "using _NAMESPACE_";*/
/* We include GTK here because we want to build a Hello World Window.*/

#include <glib.h>
#include <glib-object.h>
#include <granite.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <float.h>
#include <math.h>


#define DRAW_TYPE_DRAW (draw_draw_get_type ())
#define DRAW_DRAW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DRAW_TYPE_DRAW, DrawDraw))
#define DRAW_DRAW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DRAW_TYPE_DRAW, DrawDrawClass))
#define DRAW_IS_DRAW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DRAW_TYPE_DRAW))
#define DRAW_IS_DRAW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DRAW_TYPE_DRAW))
#define DRAW_DRAW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DRAW_TYPE_DRAW, DrawDrawClass))

typedef struct _DrawDraw DrawDraw;
typedef struct _DrawDrawClass DrawDrawClass;
typedef struct _DrawDrawPrivate DrawDrawPrivate;

#define DRAW_TYPE_APP_WINDOW (draw_app_window_get_type ())
#define DRAW_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DRAW_TYPE_APP_WINDOW, DrawAppWindow))
#define DRAW_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DRAW_TYPE_APP_WINDOW, DrawAppWindowClass))
#define DRAW_IS_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DRAW_TYPE_APP_WINDOW))
#define DRAW_IS_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DRAW_TYPE_APP_WINDOW))
#define DRAW_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DRAW_TYPE_APP_WINDOW, DrawAppWindowClass))

typedef struct _DrawAppWindow DrawAppWindow;
typedef struct _DrawAppWindowClass DrawAppWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

#define DRAW_TYPE_APP_TOOLBAR (draw_app_toolbar_get_type ())
#define DRAW_APP_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DRAW_TYPE_APP_TOOLBAR, DrawAppToolbar))
#define DRAW_APP_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DRAW_TYPE_APP_TOOLBAR, DrawAppToolbarClass))
#define DRAW_IS_APP_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DRAW_TYPE_APP_TOOLBAR))
#define DRAW_IS_APP_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DRAW_TYPE_APP_TOOLBAR))
#define DRAW_APP_TOOLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DRAW_TYPE_APP_TOOLBAR, DrawAppToolbarClass))

typedef struct _DrawAppToolbar DrawAppToolbar;
typedef struct _DrawAppToolbarClass DrawAppToolbarClass;

#define DRAW_TYPE_TOOLBAR_POSITION (draw_toolbar_position_get_type ())
#define _g_free0(var) (var = (g_free (var), NULL))

struct _DrawDraw {
	GraniteApplication parent_instance;
	DrawDrawPrivate * priv;
	DrawAppWindow* w;
};

struct _DrawDrawClass {
	GraniteApplicationClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	DrawDraw * self;
	DrawAppWindow* w;
	GtkScale* zoom_widget;
};

typedef enum  {
	DRAW_TOOLBAR_POSITION_LEFT,
	DRAW_TOOLBAR_POSITION_CENTER,
	DRAW_TOOLBAR_POSITION_RIGHT
} DrawToolbarPosition;


static gpointer draw_draw_parent_class = NULL;

GType draw_draw_get_type (void) G_GNUC_CONST;
GType draw_app_window_get_type (void) G_GNUC_CONST;
enum  {
	DRAW_DRAW_DUMMY_PROPERTY
};
#define DRAW_DRAW_CSS "  "
DrawDraw* draw_draw_new (void);
DrawDraw* draw_draw_construct (GType object_type);
static void draw_draw_real_activate (GApplication* base);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
DrawAppWindow* draw_app_window_new (void);
DrawAppWindow* draw_app_window_construct (GType object_type);
void draw_app_window_set_title (DrawAppWindow* self, const gchar* value);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static void __lambda6_ (Block1Data* _data1_);
static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda7_ (Block1Data* _data1_);
static void ___lambda7__gtk_range_value_changed (GtkRange* _sender, gpointer self);
DrawAppToolbar* draw_app_toolbar_new (const gchar* css_class, gint* spacing);
DrawAppToolbar* draw_app_toolbar_construct (GType object_type, const gchar* css_class, gint* spacing);
GType draw_app_toolbar_get_type (void) G_GNUC_CONST;
GType draw_toolbar_position_get_type (void) G_GNUC_CONST;
void draw_app_toolbar_insert_widget (DrawAppToolbar* self, GtkWidget* widget, DrawToolbarPosition position);
void draw_app_window_append_toolitem (DrawAppWindow* self, GtkToolItem* item, gboolean after_title);
GtkToolItem* draw_app_window_create_separator (DrawAppWindow* self);
static GObject * draw_draw_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void draw_draw_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


DrawDraw* draw_draw_construct (GType object_type) {
	DrawDraw * self = NULL;
	self = (DrawDraw*) granite_application_construct (object_type);
	return self;
}


DrawDraw* draw_draw_new (void) {
	return draw_draw_construct (DRAW_TYPE_DRAW);
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		DrawDraw * self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->zoom_widget);
		_g_object_unref0 (_data1_->w);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
	gtk_main_quit ();
}


static void __lambda6_ (Block1Data* _data1_) {
	DrawDraw * self;
	self = _data1_->self;
	granite_application_show_about ((GraniteApplication*) self, (GtkWidget*) _data1_->w);
}


static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda6_ (self);
}


static void __lambda7_ (Block1Data* _data1_) {
	DrawDraw * self;
	GtkScale* _tmp0_;
	gdouble _tmp1_ = 0.0;
	gdouble zValue;
	gdouble _tmp2_ = 0.0;
	gdouble newValue;
	GtkScale* _tmp3_;
	self = _data1_->self;
	_tmp0_ = _data1_->zoom_widget;
	_tmp1_ = gtk_range_get_value ((GtkRange*) _tmp0_);
	zValue = _tmp1_;
	_tmp2_ = round (zValue / 25.0);
	newValue = _tmp2_ * 25.0;
	_tmp3_ = _data1_->zoom_widget;
	gtk_range_set_value ((GtkRange*) _tmp3_, newValue);
}


static void ___lambda7__gtk_range_value_changed (GtkRange* _sender, gpointer self) {
	__lambda7_ (self);
}


static void draw_draw_real_activate (GApplication* base) {
	DrawDraw * self;
	Block1Data* _data1_;
	gboolean first_run;
	DrawAppWindow* _tmp0_;
	GtkCssProvider* _tmp1_;
	GtkCssProvider* css;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_;
	GdkScreen* _tmp4_;
	GdkScreen* _tmp5_;
	GtkMenu* _tmp6_;
	GtkMenu* settings;
	GtkMenuItem* _tmp7_;
	GtkMenuItem* about_item;
	GtkMenuItem* _tmp8_;
	GtkMenu* _tmp9_;
	GtkMenuItem* _tmp10_;
	GtkScale* _tmp11_;
	GtkScale* _tmp12_;
	GtkStyleContext* _tmp13_ = NULL;
	GtkScale* _tmp14_;
	GtkScale* _tmp15_;
	GtkScale* _tmp16_;
	GtkScale* _tmp17_;
	GtkScale* _tmp18_;
	DrawAppToolbar* _tmp19_;
	DrawAppToolbar* statusbar;
	DrawAppToolbar* _tmp20_;
	GtkScale* _tmp21_;
	GtkDrawingArea* _tmp22_;
	GtkDrawingArea* canvas;
	GtkDrawingArea* _tmp23_;
	GtkStyleContext* _tmp24_ = NULL;
	GtkDrawingArea* _tmp25_;
	GtkDrawingArea* _tmp26_;
	GtkDrawingArea* _tmp27_;
	GtkDrawingArea* _tmp28_;
	GtkFrame* _tmp29_;
	GtkFrame* frame;
	GtkFrame* _tmp30_;
	GtkStyleContext* _tmp31_ = NULL;
	GtkFrame* _tmp32_;
	GtkFrame* _tmp33_;
	GtkFrame* _tmp34_;
	GtkDrawingArea* _tmp35_;
	GtkViewport* _tmp36_;
	GtkViewport* viewport;
	GtkViewport* _tmp37_;
	GtkStyleContext* _tmp38_ = NULL;
	GtkViewport* _tmp39_;
	GtkViewport* _tmp40_;
	GtkViewport* _tmp41_;
	GtkFrame* _tmp42_;
	GtkScrolledWindow* _tmp43_;
	GtkScrolledWindow* scroll;
	GtkScrolledWindow* _tmp44_;
	GtkScrolledWindow* _tmp45_;
	GtkViewport* _tmp46_;
	DrawAppToolbar* _tmp47_;
	DrawAppToolbar* main_toolbar;
	DrawAppToolbar* _tmp48_;
	GtkGrid* _tmp49_;
	GtkGrid* layout;
	GtkGrid* _tmp50_;
	GtkGrid* _tmp51_;
	GtkGrid* _tmp52_;
	DrawAppToolbar* _tmp53_;
	GtkGrid* _tmp54_;
	GtkScrolledWindow* _tmp55_;
	GtkGrid* _tmp56_;
	DrawAppToolbar* _tmp57_;
	GtkGrid* _tmp58_;
	GtkToolButton* _tmp59_;
	GtkToolButton* _tmp60_;
	GtkToolButton* _tmp61_;
	GtkToolButton* _tmp62_;
	GtkToolButton* _tmp63_;
	GtkToolButton* _tmp64_;
	GtkToolItem* _tmp65_ = NULL;
	GtkToolItem* _tmp66_;
	GtkToolItem* _tmp67_ = NULL;
	GtkToolItem* _tmp68_;
	GtkToolButton* _tmp69_;
	GtkToolButton* _tmp70_;
	GtkImage* _tmp71_;
	GtkImage* _tmp72_;
	GtkToolButton* _tmp73_;
	GtkToolButton* _tmp74_;
	GtkImage* _tmp75_;
	GtkImage* _tmp76_;
	GtkMenu* _tmp77_;
	GraniteWidgetsToolButtonWithMenu* _tmp78_;
	GraniteWidgetsToolButtonWithMenu* _tmp79_;
	GError * _inner_error_ = NULL;
	self = (DrawDraw*) base;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	first_run = TRUE;
	_tmp0_ = draw_app_window_new ();
	g_object_ref_sink (_tmp0_);
	_data1_->w = _tmp0_;
	draw_app_window_set_title (_data1_->w, "Draw");
	gtk_window_set_application ((GtkWindow*) _data1_->w, (GtkApplication*) self);
	gtk_window_set_default_size ((GtkWindow*) _data1_->w, 980, 720);
	g_object_set ((GtkWindow*) _data1_->w, "window-position", GTK_WIN_POS_CENTER, NULL);
	g_signal_connect ((GtkWidget*) _data1_->w, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	_tmp1_ = gtk_css_provider_new ();
	css = _tmp1_;
	_tmp2_ = g_file_new_for_path ("./draw.css");
	_tmp3_ = _tmp2_;
	gtk_css_provider_load_from_file (css, _tmp3_, &_inner_error_);
	_g_object_unref0 (_tmp3_);
	if (_inner_error_ != NULL) {
		_g_object_unref0 (css);
		block1_data_unref (_data1_);
		_data1_ = NULL;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp4_ = gtk_window_get_screen ((GtkWindow*) _data1_->w);
	_tmp5_ = _tmp4_;
	gtk_style_context_add_provider_for_screen (_tmp5_, (GtkStyleProvider*) css, (guint) GTK_STYLE_PROVIDER_PRIORITY_THEME);
	_tmp6_ = (GtkMenu*) gtk_menu_new ();
	g_object_ref_sink (_tmp6_);
	settings = _tmp6_;
	_tmp7_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("About");
	g_object_ref_sink (_tmp7_);
	about_item = _tmp7_;
	_tmp8_ = about_item;
	g_signal_connect_data (_tmp8_, "activate", (GCallback) ___lambda6__gtk_menu_item_activate, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp9_ = settings;
	_tmp10_ = about_item;
	gtk_container_add ((GtkContainer*) _tmp9_, (GtkWidget*) _tmp10_);
	_tmp11_ = (GtkScale*) gtk_scale_new_with_range (GTK_ORIENTATION_HORIZONTAL, (gdouble) 25, (gdouble) 800, (gdouble) 25);
	g_object_ref_sink (_tmp11_);
	_data1_->zoom_widget = _tmp11_;
	_tmp12_ = _data1_->zoom_widget;
	_tmp13_ = gtk_widget_get_style_context ((GtkWidget*) _tmp12_);
	gtk_style_context_add_class (_tmp13_, "zoom-widget");
	_tmp14_ = _data1_->zoom_widget;
	gtk_widget_set_tooltip_text ((GtkWidget*) _tmp14_, "Zoom");
	_tmp15_ = _data1_->zoom_widget;
	g_object_set ((GtkWidget*) _tmp15_, "width-request", 150, NULL);
	_tmp16_ = _data1_->zoom_widget;
	gtk_scale_set_value_pos (_tmp16_, GTK_POS_LEFT);
	_tmp17_ = _data1_->zoom_widget;
	gtk_range_set_value ((GtkRange*) _tmp17_, (gdouble) 100);
	_tmp18_ = _data1_->zoom_widget;
	g_signal_connect_data ((GtkRange*) _tmp18_, "value-changed", (GCallback) ___lambda7__gtk_range_value_changed, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp19_ = draw_app_toolbar_new ("status-toolbar", NULL);
	g_object_ref_sink (_tmp19_);
	statusbar = _tmp19_;
	_tmp20_ = statusbar;
	_tmp21_ = _data1_->zoom_widget;
	draw_app_toolbar_insert_widget (_tmp20_, (GtkWidget*) _tmp21_, DRAW_TOOLBAR_POSITION_RIGHT);
	_tmp22_ = (GtkDrawingArea*) gtk_drawing_area_new ();
	g_object_ref_sink (_tmp22_);
	canvas = _tmp22_;
	_tmp23_ = canvas;
	_tmp24_ = gtk_widget_get_style_context ((GtkWidget*) _tmp23_);
	gtk_style_context_add_class (_tmp24_, "canvas");
	_tmp25_ = canvas;
	gtk_widget_set_valign ((GtkWidget*) _tmp25_, GTK_ALIGN_CENTER);
	_tmp26_ = canvas;
	gtk_widget_set_halign ((GtkWidget*) _tmp26_, GTK_ALIGN_CENTER);
	_tmp27_ = canvas;
	g_object_set ((GtkWidget*) _tmp27_, "width-request", 640, NULL);
	_tmp28_ = canvas;
	g_object_set ((GtkWidget*) _tmp28_, "height-request", 480, NULL);
	_tmp29_ = (GtkFrame*) gtk_frame_new (NULL);
	g_object_ref_sink (_tmp29_);
	frame = _tmp29_;
	_tmp30_ = frame;
	_tmp31_ = gtk_widget_get_style_context ((GtkWidget*) _tmp30_);
	gtk_style_context_add_class (_tmp31_, "canvas-frame");
	_tmp32_ = frame;
	gtk_widget_set_valign ((GtkWidget*) _tmp32_, GTK_ALIGN_CENTER);
	_tmp33_ = frame;
	gtk_widget_set_halign ((GtkWidget*) _tmp33_, GTK_ALIGN_CENTER);
	_tmp34_ = frame;
	_tmp35_ = canvas;
	gtk_container_add ((GtkContainer*) _tmp34_, (GtkWidget*) _tmp35_);
	_tmp36_ = (GtkViewport*) gtk_viewport_new (NULL, NULL);
	g_object_ref_sink (_tmp36_);
	viewport = _tmp36_;
	_tmp37_ = viewport;
	_tmp38_ = gtk_widget_get_style_context ((GtkWidget*) _tmp37_);
	gtk_style_context_add_class (_tmp38_, "container");
	_tmp39_ = viewport;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp39_, TRUE);
	_tmp40_ = viewport;
	gtk_widget_set_vexpand ((GtkWidget*) _tmp40_, TRUE);
	_tmp41_ = viewport;
	_tmp42_ = frame;
	gtk_container_add ((GtkContainer*) _tmp41_, (GtkWidget*) _tmp42_);
	_tmp43_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp43_);
	scroll = _tmp43_;
	_tmp44_ = scroll;
	g_object_set ((GtkWidget*) _tmp44_, "expand", TRUE, NULL);
	_tmp45_ = scroll;
	_tmp46_ = viewport;
	gtk_container_add ((GtkContainer*) _tmp45_, (GtkWidget*) _tmp46_);
	_tmp47_ = draw_app_toolbar_new ("main-toolbar", NULL);
	g_object_ref_sink (_tmp47_);
	main_toolbar = _tmp47_;
	_tmp48_ = main_toolbar;
	g_object_set ((GtkWidget*) _tmp48_, "height-request", 55, NULL);
	_tmp49_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp49_);
	layout = _tmp49_;
	_tmp50_ = layout;
	g_object_set ((GtkWidget*) _tmp50_, "expand", TRUE, NULL);
	_tmp51_ = layout;
	gtk_orientable_set_orientation ((GtkOrientable*) _tmp51_, GTK_ORIENTATION_VERTICAL);
	_tmp52_ = layout;
	_tmp53_ = main_toolbar;
	gtk_container_add ((GtkContainer*) _tmp52_, (GtkWidget*) _tmp53_);
	_tmp54_ = layout;
	_tmp55_ = scroll;
	gtk_container_add ((GtkContainer*) _tmp54_, (GtkWidget*) _tmp55_);
	_tmp56_ = layout;
	_tmp57_ = statusbar;
	gtk_container_add ((GtkContainer*) _tmp56_, (GtkWidget*) _tmp57_);
	_tmp58_ = layout;
	gtk_container_add ((GtkContainer*) _data1_->w, (GtkWidget*) _tmp58_);
	_tmp59_ = (GtkToolButton*) gtk_tool_button_new_from_stock (GTK_STOCK_NEW);
	g_object_ref_sink (_tmp59_);
	_tmp60_ = _tmp59_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp60_, FALSE);
	_g_object_unref0 (_tmp60_);
	_tmp61_ = (GtkToolButton*) gtk_tool_button_new_from_stock (GTK_STOCK_OPEN);
	g_object_ref_sink (_tmp61_);
	_tmp62_ = _tmp61_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp62_, FALSE);
	_g_object_unref0 (_tmp62_);
	_tmp63_ = (GtkToolButton*) gtk_tool_button_new_from_stock (GTK_STOCK_SAVE);
	g_object_ref_sink (_tmp63_);
	_tmp64_ = _tmp63_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp64_, FALSE);
	_g_object_unref0 (_tmp64_);
	_tmp65_ = draw_app_window_create_separator (_data1_->w);
	_tmp66_ = _tmp65_;
	draw_app_window_append_toolitem (_data1_->w, _tmp66_, FALSE);
	_g_object_unref0 (_tmp66_);
	_tmp67_ = draw_app_window_create_separator (_data1_->w);
	_tmp68_ = _tmp67_;
	draw_app_window_append_toolitem (_data1_->w, _tmp68_, TRUE);
	_g_object_unref0 (_tmp68_);
	_tmp69_ = (GtkToolButton*) gtk_tool_button_new_from_stock (GTK_STOCK_PRINT);
	g_object_ref_sink (_tmp69_);
	_tmp70_ = _tmp69_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp70_, TRUE);
	_g_object_unref0 (_tmp70_);
	_tmp71_ = (GtkImage*) gtk_image_new_from_icon_name ("document-export", GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp71_);
	_tmp72_ = _tmp71_;
	_tmp73_ = (GtkToolButton*) gtk_tool_button_new ((GtkWidget*) _tmp72_, "");
	g_object_ref_sink (_tmp73_);
	_tmp74_ = _tmp73_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp74_, TRUE);
	_g_object_unref0 (_tmp74_);
	_g_object_unref0 (_tmp72_);
	_tmp75_ = (GtkImage*) gtk_image_new_from_icon_name ("application-menu", GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp75_);
	_tmp76_ = _tmp75_;
	_tmp77_ = settings;
	_tmp78_ = granite_widgets_tool_button_with_menu_new (_tmp76_, "", _tmp77_);
	g_object_ref_sink (_tmp78_);
	_tmp79_ = _tmp78_;
	draw_app_window_append_toolitem (_data1_->w, (GtkToolItem*) _tmp79_, TRUE);
	_g_object_unref0 (_tmp79_);
	_g_object_unref0 (_tmp76_);
	gtk_widget_show_all ((GtkWidget*) _data1_->w);
	_g_object_unref0 (layout);
	_g_object_unref0 (main_toolbar);
	_g_object_unref0 (scroll);
	_g_object_unref0 (viewport);
	_g_object_unref0 (frame);
	_g_object_unref0 (canvas);
	_g_object_unref0 (statusbar);
	_g_object_unref0 (about_item);
	_g_object_unref0 (settings);
	_g_object_unref0 (css);
	block1_data_unref (_data1_);
	_data1_ = NULL;
}


static GObject * draw_draw_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DrawDraw * self;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar** _tmp10_ = NULL;
	parent_class = G_OBJECT_CLASS (draw_draw_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DRAW_TYPE_DRAW, DrawDraw);
	_tmp0_ = g_strdup ("Draw");
	_g_free0 (((GraniteApplication*) self)->program_name);
	((GraniteApplication*) self)->program_name = _tmp0_;
	_tmp1_ = g_strdup ("Draw");
	_g_free0 (((GraniteApplication*) self)->exec_name);
	((GraniteApplication*) self)->exec_name = _tmp1_;
	_tmp2_ = g_strdup ("2013");
	_g_free0 (((GraniteApplication*) self)->app_years);
	((GraniteApplication*) self)->app_years = _tmp2_;
	_tmp3_ = g_strdup ("application-default-icon");
	_g_free0 (((GraniteApplication*) self)->app_icon);
	((GraniteApplication*) self)->app_icon = _tmp3_;
	_tmp4_ = g_strdup ("draw.desktop");
	_g_free0 (((GraniteApplication*) self)->app_launcher);
	((GraniteApplication*) self)->app_launcher = _tmp4_;
	g_application_set_application_id ((GApplication*) self, "org.elementary.draw");
	_tmp5_ = g_strdup ("http://elementaryos.org");
	_g_free0 (((GraniteApplication*) self)->main_url);
	((GraniteApplication*) self)->main_url = _tmp5_;
	_tmp6_ = g_strdup ("http://elementaryos.org");
	_g_free0 (((GraniteApplication*) self)->bug_url);
	((GraniteApplication*) self)->bug_url = _tmp6_;
	_tmp7_ = g_strdup ("http://elementaryos.org");
	_g_free0 (((GraniteApplication*) self)->help_url);
	((GraniteApplication*) self)->help_url = _tmp7_;
	_tmp8_ = g_strdup ("http://elementaryos.org");
	_g_free0 (((GraniteApplication*) self)->translate_url);
	((GraniteApplication*) self)->translate_url = _tmp8_;
	_tmp9_ = g_strdup ("KJ Lawrence <kj@nsfugames.com>");
	_tmp10_ = g_new0 (gchar*, 1 + 1);
	_tmp10_[0] = _tmp9_;
	((GraniteApplication*) self)->about_authors = (_vala_array_free (((GraniteApplication*) self)->about_authors, ((GraniteApplication*) self)->about_authors_length1, (GDestroyNotify) g_free), NULL);
	((GraniteApplication*) self)->about_authors = _tmp10_;
	((GraniteApplication*) self)->about_authors_length1 = 1;
	((GraniteApplication*) self)->about_license_type = GTK_LICENSE_GPL_3_0;
	return obj;
}


static void draw_draw_class_init (DrawDrawClass * klass) {
	draw_draw_parent_class = g_type_class_peek_parent (klass);
	G_APPLICATION_CLASS (klass)->activate = draw_draw_real_activate;
	G_OBJECT_CLASS (klass)->constructor = draw_draw_constructor;
	G_OBJECT_CLASS (klass)->finalize = draw_draw_finalize;
}


static void draw_draw_instance_init (DrawDraw * self) {
}


static void draw_draw_finalize (GObject* obj) {
	DrawDraw * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DRAW_TYPE_DRAW, DrawDraw);
	_g_object_unref0 (self->w);
	G_OBJECT_CLASS (draw_draw_parent_class)->finalize (obj);
}


GType draw_draw_get_type (void) {
	static volatile gsize draw_draw_type_id__volatile = 0;
	if (g_once_init_enter (&draw_draw_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DrawDrawClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) draw_draw_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DrawDraw), 0, (GInstanceInitFunc) draw_draw_instance_init, NULL };
		GType draw_draw_type_id;
		draw_draw_type_id = g_type_register_static (GRANITE_TYPE_APPLICATION, "DrawDraw", &g_define_type_info, 0);
		g_once_init_leave (&draw_draw_type_id__volatile, draw_draw_type_id);
	}
	return draw_draw_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	DrawDraw* _tmp0_;
	DrawDraw* draw_app;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_ = 0;
	gtk_init (&args_length1, &args);
	_tmp0_ = draw_draw_new ();
	draw_app = _tmp0_;
	_tmp1_ = args;
	_tmp1__length1 = args_length1;
	_tmp2_ = granite_application_run ((GraniteApplication*) draw_app, _tmp1_, _tmp1__length1);
	result = _tmp2_;
	_g_object_unref0 (draw_app);
	return result;
}


int main (int argc, char ** argv) {
	g_thread_init (NULL);
	g_type_init ();
	return _vala_main (argv, argc);
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}




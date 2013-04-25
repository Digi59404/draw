/***
    Copyright (C) 2013-2014 Draw Developers

    This program or library is free software; you can redistribute it
    and/or modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General
    Public License along with this library; if not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301 USA.

    Authored by: KJ Lawrence <kjtehprogrammer@gmail.com>
***/

using Gtk;
using Gee;
using Granite.Drawing;

namespace Draw
{
	public class ColorTools : Gtk.Box
	{
		public ColorTools()
		{
			
			Draw.Tools palette = new Draw.Tools("color-palette", 2, 12, 0, 2);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.25, 0.25, 0.25, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(1, 0, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(1, 0.42, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(1, 0.85, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.71, 1, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 1, 0, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 1, 0.56, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 1, 1, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0, 1, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.7, 0, 1, 1), 12, 12), null), 0, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(1, 1, 1, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.5, 0.5, 0.5, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.5, 0, 0, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.5, 0.2, 0, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.5, 0.42, 0, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0.5, 0.05, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0.5, 0.27, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0.5, 0.5, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0, 0.05, 0.5, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.34, 0, 0.5, 1), 12, 12), null), 1, true);
			palette.add_button(new Gtk.ToolButton (new ColorIcon(new Color(0.5, 0, 0.43, 1), 12, 12), null), 1, true);
			
			valign = Gtk.Align.CENTER;
			add(palette);
			
			/*add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/mouse.png"), "Pointer"), 0, true);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/select.png"), "Select"), 0);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/magic_select.png"), "Magic Select"), 0);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/dropper.png"), "Dropper"), 0);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/eraser.png"), "Eraser"), 0);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/clone_stamp.png"), "Clone Stamp"), 0);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/bucket.png"), "Bucket"), 1);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/pencil.png"), "Pencil"), 1);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/brush.png"), "Brush"), 1);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/shapes.png"), "Shapes"), 1);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/lines.png"), "Lines"), 1);
			add_button(new Gtk.ToolButton (new Gtk.Image.from_file ("./images/text.png"), "Text"), 1);*/
		}
	}
}

//
//   Copyright (C) 2008 by Sindre Aamås
//   sinamas@users.sourceforge.net
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License version 2 for more details.
//
//   You should have received a copy of the GNU General Public License
//   version 2 along with this program; if not, write to the
//   Free Software Foundation, Inc.,
//   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

/*
  The following font bitmaps (static unsigned char const *_bits[]), only used
  as data and included in this source file for convenience, are derived from
  the Bitstream Vera Sans font, which is distributed under the following
  copyright:

  Copyright (c) 2003 by Bitstream, Inc. All Rights Reserved. Bitstream Vera
  is a trademark of Bitstream, Inc.

  Permission is hereby granted, free of charge, to any person obtaining a
  copy of the fonts accompanying this license ("Fonts") and associated
  documentation files (the "Font Software"), to reproduce and distribute the
  Font Software, including without limitation the rights to use, copy, merge,
  publish, distribute, and/or sell copies of the Font Software, and to permit
  persons to whom the Font Software is furnished to do so, subject to the
  following conditions:

  The above copyright and trademark notices and this permission notice shall
  be included in all copies of one or more of the Font Software typefaces.

  The Font Software may be modified, altered, or added to, and in particular
  the designs of glyphs or characters in the Fonts may be modified and
  additional glyphs or characters may be added to the Fonts, only if the fonts
  are renamed to names not containing either the words "Bitstream" or the word
  "Vera".

  This License becomes null and void to the extent applicable to Fonts or Font
  Software that has been modified and is distributed under the "Bitstream Vera"
  names.

  The Font Software may be sold as part of a larger software package but no
  copy of one or more of the Font Software typefaces may be sold by itself.

  THE FONT SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
  COPYRIGHT, PATENT, TRADEMARK, OR OTHER RIGHT. IN NO EVENT SHALL BITSTREAM
  OR THE GNOME FOUNDATION BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, INCLUDING ANY GENERAL, SPECIAL, INDIRECT, INCIDENTAL, OR
  CONSEQUENTIAL DAMAGES, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
  ARISING FROM, OUT OF THE USE OR INABILITY TO USE THE FONT SOFTWARE OR FROM
  OTHER DEALINGS IN THE FONT SOFTWARE.

  Except as contained in this notice, the names of Gnome, the Gnome
  Foundation, and Bitstream Inc., shall not be used in advertising or
  otherwise to promote the sale, use or other dealings in this Font Software
  without prior written authorization from the Gnome Foundation or
  Bitstream Inc., respectively. For further information, contact: fonts at
  gnome dot org.
*/

#include "bitmap_font.h"
#include <algorithm>

static unsigned char const n0_bits[] = { 0x68,
   0x00, 0x1c, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1c };

static unsigned char const n1_bits[] = { 0x68,
   0x00, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3e };

static unsigned char const n2_bits[] = { 0x68,
   0x00, 0x1c, 0x22, 0x20, 0x10, 0x08, 0x04, 0x3e };

static unsigned char const n3_bits[] = { 0x68,
   0x00, 0x1c, 0x22, 0x20, 0x1c, 0x20, 0x22, 0x1c };

static unsigned char const n4_bits[] = { 0x68,
   0x00, 0x18, 0x18, 0x14, 0x12, 0x3e, 0x10, 0x10 };

static unsigned char const n5_bits[] = { 0x68,
   0x00, 0x1e, 0x02, 0x1e, 0x20, 0x20, 0x20, 0x1e };

static unsigned char const n6_bits[] = { 0x68,
   0x00, 0x3c, 0x06, 0x02, 0x1e, 0x22, 0x22, 0x1c };

static unsigned char const n7_bits[] = { 0x68,
   0x00, 0x3e, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04 };

static unsigned char const n8_bits[] = { 0x68,
   0x00, 0x1c, 0x22, 0x22, 0x1c, 0x22, 0x22, 0x1c };

static unsigned char const n9_bits[] = { 0x68,
   0x00, 0x1c, 0x22, 0x22, 0x3c, 0x20, 0x30, 0x1e };

static unsigned char const A_bits[] = { 0x78,
   0x00, 0x08, 0x14, 0x14, 0x22, 0x3e, 0x22, 0x41 };

static unsigned char const a_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x1c, 0x20, 0x3c, 0x22, 0x3e };

static unsigned char const B_bits[] = { 0x78,
   0x00, 0x1e, 0x22, 0x22, 0x1e, 0x22, 0x22, 0x1e };

static unsigned char const b_bits[] = { 0x68,
   0x02, 0x02, 0x02, 0x1e, 0x22, 0x22, 0x22, 0x1e };

static unsigned char const C_bits[] = { 0x88,
   0x00, 0x38, 0x44, 0x02, 0x02, 0x02, 0x44, 0x38 };

static unsigned char const c_bits[] = { 0x58,
   0x00, 0x00, 0x00, 0x1c, 0x02, 0x02, 0x02, 0x1c };

static unsigned char const D_bits[] = { 0x88,
   0x00, 0x3e, 0x62, 0x42, 0x42, 0x42, 0x62, 0x3e };

static unsigned char const d_bits[] = { 0x68,
   0x20, 0x20, 0x20, 0x3c, 0x22, 0x22, 0x22, 0x3c };

static unsigned char const E_bits[] = { 0x78,
   0x00, 0x3e, 0x02, 0x02, 0x3e, 0x02, 0x02, 0x3e };

static unsigned char const e_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x1c, 0x22, 0x3e, 0x02, 0x3c };

static unsigned char const F_bits[] = { 0x68,
   0x00, 0x1e, 0x02, 0x02, 0x1e, 0x02, 0x02, 0x02 };

static unsigned char const f_bits[] = { 0x48,
   0x0e, 0x02, 0x02, 0x07, 0x02, 0x02, 0x02, 0x02 };

static unsigned char const G_bits[] = { 0x88,
   0x00, 0x3c, 0x46, 0x02, 0x72, 0x42, 0x46, 0x3c };

static unsigned char const g_bits[] = { 0x6a,
   0x00, 0x00, 0x00, 0x3c, 0x22, 0x22, 0x22, 0x3c, 0x20, 0x1c };

static unsigned char const H_bits[] = { 0x88,
   0x00, 0x42, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42 };

static unsigned char const h_bits[] = { 0x68,
   0x02, 0x02, 0x02, 0x1e, 0x22, 0x22, 0x22, 0x22 };

static unsigned char const I_bits[] = { 0x38,
   0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 };

static unsigned char const i_bits[] = { 0x28,
   0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02 };

static unsigned char const J_bits[] = { 0x4a,
   0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03 };

static unsigned char const j_bits[] = { 0x2a,
   0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03 };

static unsigned char const K_bits[] = { 0x78,
   0x00, 0x22, 0x12, 0x0a, 0x06, 0x0a, 0x12, 0x22 };

static unsigned char const k_bits[] = { 0x58,
   0x02, 0x02, 0x02, 0x12, 0x0a, 0x06, 0x0a, 0x12 };

static unsigned char const L_bits[] = { 0x68,
   0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3e };

static unsigned char const l_bits[] = { 0x28,
   0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 };

static unsigned char const M_bits[] = { 0x98,
   0x00, 0x00, 0x82, 0x00, 0xc6, 0x00, 0xc6, 0x00, 0xaa, 0x00, 0xaa, 0x00,
   0x92, 0x00, 0x82, 0x00 };

static unsigned char const m_bits[] = { 0xa8,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xde, 0x01, 0x22, 0x02, 0x22, 0x02,
   0x22, 0x02, 0x22, 0x02 };

static unsigned char const N_bits[] = { 0x88,
   0x00, 0x42, 0x46, 0x4a, 0x4a, 0x52, 0x62, 0x42 };

static unsigned char const n_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x1e, 0x22, 0x22, 0x22, 0x22 };

static unsigned char const O_bits[] = { 0x88,
   0x00, 0x3c, 0x66, 0x42, 0x42, 0x42, 0x66, 0x3c };

static unsigned char const o_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x1c, 0x22, 0x22, 0x22, 0x1c };

static unsigned char const P_bits[] = { 0x78,
   0x00, 0x1e, 0x22, 0x22, 0x1e, 0x02, 0x02, 0x02 };

static unsigned char const p_bits[] = { 0x6a,
   0x00, 0x00, 0x00, 0x1e, 0x22, 0x22, 0x22, 0x1e, 0x02, 0x02 };

static unsigned char const Q_bits[] = { 0x89,
   0x00, 0x3c, 0x66, 0x42, 0x42, 0x42, 0x26, 0x1c, 0x20 };

static unsigned char const q_bits[] = { 0x6a,
   0x00, 0x00, 0x00, 0x3c, 0x22, 0x22, 0x22, 0x3c, 0x20, 0x20 };

static unsigned char const R_bits[] = { 0x78,
   0x00, 0x1e, 0x22, 0x22, 0x1e, 0x12, 0x22, 0x42 };

static unsigned char const r_bits[] = { 0x48,
   0x00, 0x00, 0x00, 0x0e, 0x02, 0x02, 0x02, 0x02 };

static unsigned char const S_bits[] = { 0x78,
   0x00, 0x1c, 0x22, 0x02, 0x1c, 0x20, 0x22, 0x1c };

static unsigned char const s_bits[] = { 0x58,
   0x00, 0x00, 0x00, 0x1e, 0x02, 0x1c, 0x10, 0x1e };

static unsigned char const T_bits[] = { 0x58,
   0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };

static unsigned char const t_bits[] = { 0x48,
   0x00, 0x02, 0x02, 0x0f, 0x02, 0x02, 0x02, 0x0e };

static unsigned char const U_bits[] = { 0x88,
   0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c };

static unsigned char const u_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x3c };

static unsigned char const V_bits[] = { 0x78,
   0x00, 0x41, 0x41, 0x22, 0x22, 0x14, 0x14, 0x08 };

static unsigned char const v_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x22, 0x22, 0x14, 0x14, 0x08 };

static unsigned char const W_bits[] = { 0x98,
   0x00, 0x00, 0x11, 0x01, 0x11, 0x01, 0xaa, 0x00, 0xaa, 0x00, 0xaa, 0x00,
   0x44, 0x00, 0x44, 0x00 };

static unsigned char const w_bits[] = { 0x88,
   0x00, 0x00, 0x00, 0x92, 0xaa, 0xaa, 0x44, 0x44 };

static unsigned char const X_bits[] = { 0x68,
   0x00, 0x21, 0x12, 0x0c, 0x0c, 0x0c, 0x12, 0x21 };

static unsigned char const x_bits[] = { 0x68,
   0x00, 0x00, 0x00, 0x22, 0x14, 0x08, 0x14, 0x22 };

static unsigned char const Y_bits[] = { 0x78,
   0x00, 0x41, 0x22, 0x14, 0x08, 0x08, 0x08, 0x08 };

static unsigned char const y_bits[] = { 0x6a,
   0x00, 0x00, 0x00, 0x22, 0x22, 0x14, 0x14, 0x08, 0x08, 0x06 };

static unsigned char const Z_bits[] = { 0x68,
   0x00, 0x3f, 0x10, 0x08, 0x0c, 0x04, 0x02, 0x3f };

static unsigned char const z_bits[] = { 0x58,
   0x00, 0x00, 0x00, 0x1e, 0x10, 0x08, 0x04, 0x1e };

static unsigned char const SPC_bits[] = { 0x38,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

namespace bitmapfont {

unsigned char const *const font[] = {
	0,
	n0_bits, n1_bits, n2_bits, n3_bits, n4_bits, n5_bits, n6_bits, n7_bits, n8_bits, n9_bits,
	A_bits, B_bits, C_bits, D_bits, E_bits, F_bits, G_bits, H_bits, I_bits, J_bits, K_bits, L_bits, M_bits,
	N_bits, O_bits, P_bits, Q_bits, R_bits, S_bits, T_bits, U_bits, V_bits, W_bits, X_bits, Y_bits, Z_bits,
	a_bits, b_bits, c_bits, d_bits, e_bits, f_bits, g_bits, h_bits, i_bits, j_bits, k_bits, l_bits, m_bits,
	n_bits, o_bits, p_bits, q_bits, r_bits, s_bits, t_bits, u_bits, v_bits, w_bits, x_bits, y_bits, z_bits,
	SPC_bits
};

std::size_t getWidth(char const *chars) {
	std::size_t w = 0;

	while (const int character = *chars++)
		w += *font[character] >> 4;

	return w;
}

namespace {

class Rgb32Fill {
public:
	explicit Rgb32Fill(unsigned long color)
	: color_(color)
	{
	}

	void operator()(gambatte::uint_least32_t *dest, std::ptrdiff_t /*pitch*/) const {
		*dest = color_;
	}

private:
	unsigned long const color_;
};

}

void print(gambatte::uint_least32_t *dest, std::ptrdiff_t pitch, unsigned long color, char const *chars) {
	print(dest, pitch, Rgb32Fill(color), chars);
}

void utoa(unsigned u, char *const a) {
	char *at = a;

	while (u > 9) {
		unsigned div = u / 10;
		unsigned rem = u % 10;
		u = div;
		*at++ = rem + N0;
	}

	*at++ = u + N0;
	std::reverse(a, at);
}

} // namespace bitmapfont

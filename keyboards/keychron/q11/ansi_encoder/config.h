/* Copyright 2023 @ Keychron(https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 23

// https://gist.github.com/fauxpark/010dcf5d6377c3a71ac98ce37414c6c4
// 2024 Apple Magic Keyboard ID from https://discussions.apple.com/thread/255869613?sortBy=rank
#undef VENDOR_ID
#define VENDOR_ID 0x05AC
#undef PRODUCT_ID
#define PRODUCT_ID 0x0322

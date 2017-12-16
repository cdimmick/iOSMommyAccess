//
//  NCBridgeSwift.h
//  Nextcloud iOS
//
//  Created by Sean Sutton on 11/05/17.
//  Copyright © 2017 Au Development. All rights reserved.
//
//  Author Sean Sutton <sutton_mjbc@icloud.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

// MommyAccess App
#if !defined(EXTENSION)

    #if defined(CUSTOM_BUILD)
        #import "CustomSwift.h"
    #else
        #import "MommyAccess-Swift.h"
    #endif

#endif

// MommyAccess Extension Share
#if defined(EXTENSION_SHARE)

    #import "Share-Swift.h"

#endif

// MommyAccess Extension Document Provider Picker
#if defined(EXTENSION_PICKER)

    #import "Picker-Swift.h"

#endif

// MommyAccess Extension Document Provider Picker File Provider
#if defined(EXTENSION_PICKER_FILE_PROVIDER)

#import "PickerFileProvider-Swift.h"

#endif

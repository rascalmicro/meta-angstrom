ANGSTROM_MESA_VERSION = "7.11"
ANGSTROM_QT_VERSION ?= "4.8.0"
ANGSTROM_LIBTOOL_VERSION = "2.4.2"
# Use new sysroot feature
LIBTOOL_HAS_SYSROOT = "yes"

CE_VERSION ?= "latest"

require conf/distro/include/angstrom-codec-engine-${CE_VERSION}-preferred-versions.inc

# Needs updating to the latest meta-oe 
#require conf/distro/include/preferred-xorg-versions-live.inc

PREFERRED_VERSION_cairo		= "1.10.2"
PREFFERED_VERSION_connman	= "0.76"
PREFERRED_VERSION_fontconfig	= "2.8.0"
PREFERRED_VERSION_glibmm = "2.28.2"
PREFERRED_VERSION_gobject-introspection-native = "0.9.10"
PREFERRED_VERSION_gst-pulse 	= "0.9.7"
PREFERRED_VERSION_gtkmm		= "2.20.0"
PREFERRED_VERSION_hal		= "0.5.14"
PREFERRED_VERSION_libgemwidget	= "1.0"
PREFERRED_VERSION_libgpephone	= "0.4"
PREFERRED_VERSION_libsdl-x11	= "1.2.14"
PREFERRED_VERSION_libtool           = "${ANGSTROM_LIBTOOL_VERSION}"
PREFERRED_VERSION_libtool-native    = "${ANGSTROM_LIBTOOL_VERSION}"
PREFERRED_VERSION_libtool-cross     = "${ANGSTROM_LIBTOOL_VERSION}"
PREFERRED_VERSION_libtool-nativesdk = "${ANGSTROM_LIBTOOL_VERSION}"
PREFERRED_VERSION_libtool-sdk       = "${ANGSTROM_LIBTOOL_VERSION}"
PREFERRED_VERSION_mesa          = "${ANGSTROM_MESA_VERSION}"
PREFERRED_VERSION_mesa-dri      = "${ANGSTROM_MESA_VERSION}"
PREFERRED_VERSION_mesa-xlib     = "${ANGSTROM_MESA_VERSION}"
PREFERRED_VERSION_mythplugins   = "0.23"
PREFERRED_VERSION_myththemes    = "0.23"
PREFERRED_VERSION_mythtv        = "0.23"
PREFERRED_VERSION_mplayer       = "0.0+1.0rc3+svnr%"
PREFERRED_VERSION_openssl = "1.0.0%"
PREFERRED_VERSION_openssl-native = "1.0.0%"
PREFERRED_VERSION_pango 	= "1.29.4"
PREFERRED_VERSION_pango-native     = "1.29.4"
#PREFERRED_VERSION_pixman	= "0.13.2"
PREFERRED_VERSION_pkgconfig	= "0.25"
PREFERRED_VERSION_pkgconfig-native = "0.25"
PREFERRED_VERSION_qt4-native = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-tools-native = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-tools-nativesdk = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-tools-sdk = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-embedded = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-embedded-gles = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-x11-free = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_qt4-x11-free-gles = "${ANGSTROM_QT_VERSION}"
PREFERRED_VERSION_udev = "175"

PREFERRED_VERSION_samba		= "3.5.6"
PREFERRED_VERSION_tiff 		= "3.9.5"

UDEV_GE_141 = "1"

PREFERRED_VERSION_wpa-supplicant = "0.7.3"
PREFERRED_VERSION_wget = "1.11.4"
PREFERRED_VERSION_xserver-common = "1.34"
PREFERRED_VERSION_xserver-kdrive = "1.7.99.2"

#
# meta-moblin package SRCREVs
#
SRCREV_pn-bickley ?= "de9431b7c6040bc3731157c05947159ad2c7a0a9"
SRCREV_pn-json-glib ?= "930fdf4c4dff1f5310a946c2a9f5b6860f7c8ba8"
SRCREV_pn-libccss ?= "92bc59e1d39302c8be500d53cb5dd8b05c2e4a15"
SRCREV_pn-libgdbus ?= "aeab6e3c0185b271ca343b439470491b99cc587f"
SRCREV_pn-librest ?= "14d35103d9649dc1e10c3e9ac2c690b3165c8184"
SRCREV_pn-moblin-menus ?= "e1d63681739dd16195d005b3cf15752df294bd3c"
SRCREV_pn-mojito ?= "0542c4b0e26c0e3b69c5ad1fa1898dc276fb9f48"
SRCREV_pn-mozilla-headless-services ?= "c7873654894af6c7c6c01194d6185db46667b81f"
SRCREV_pn-mutter ?= "aff4cf110307e149d3497d20543cde27b9699758"
SRCREV_pn-twitter-glib ?= "849bec29292df88590e0b2898b50b9b8d766817e"
SRCREV_pn-xf86-video-psb ?= "b6b3bba06fe5a3fe0b1bd6e31a7369dd83812bab"


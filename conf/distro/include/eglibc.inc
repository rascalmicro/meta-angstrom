require conf/distro/include/tclibc-eglibc.inc

# The things eglibc can provide.  We default to wanting eglibc to provide them.
PREFERRED_PROVIDER_virtual/libiconv ?= "eglibc"
PREFERRED_PROVIDER_virtual/libintl ?= "eglibc"

# And the same as above for the nativesdk
PREFERRED_PROVIDER_virtual/libiconv-nativesdk ?= "eglibc-nativesdk"
PREFERRED_PROVIDER_virtual/libintl-nativesdk ?= "eglibc-nativesdk"
 
# eglibc is configured for OLDEST_KERNEL kernel version, so we set minimal
# sane versions there


# ARM OABI is fine with 2.4.0, EABI is not, so we override on "-gnueabi"
# TARGET_OS here, not on architecture which is 'arm' in both cases

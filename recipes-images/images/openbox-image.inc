IMAGE_FEATURES += "package-management x11-base"

LICENSE = "MIT"

inherit core-image

IMAGE_INSTALL += " \
        openbox \
	util-linux-mcookie \
	xeyes \
"

RDEPENDS_packagegroup-core-x11-base_remove = "\
    matchbox-terminal \
    matchbox-wm \
    "

RDEPENDS_packagegroup-core-device-devel_remove = "\
    distcc-config \
    nfs-export-root \
    binutils-symlinks \
    "

IMAGE_LINGUAS = " "

# This is meant to be build using makepkg in the root of the cloned repo
# Maintainer : Ramon Buldo <ramon@manjaro.org>
pkgname=kcm-msm
pkgver=0.0.1
pkgrel=1
pkgdesc="Manjaro settings manager module for Plasma 5"
arch=('i686' 'x86_64')
url="https://github.com/manjaro/manjaro-settings-manager"
license=("GPL")
depends=('locale-info' 'icu' 'qt5-base' 'qt5-webkit' 'hwinfo' 'kitemmodels' 'kauth' 'ki18n' 'kconfigwidgets' 'kcoreaddons')
makedepends=('git' 'extra-cmake-modules' 'kdoctools' 'qt5-tools')

build() {
  cd ..
  mkdir -p build
  cd build
  cmake ../ \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=/usr \
    -DLIB_INSTALL_DIR=lib \
    -DKDE_INSTALL_USE_QT_SYS_PATHS=ON \
    -DSYSCONF_INSTALL_DIR=/etc
  make
}

package() {
  cd ..
  cd build
  make DESTDIR=${pkgdir} install
}
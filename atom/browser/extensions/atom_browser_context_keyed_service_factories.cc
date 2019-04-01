// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "atom/browser/extensions/atom_browser_context_keyed_service_factories.h"

#include "extensions/browser/updater/update_service_factory.h"
// #include "extensions/shell/browser/api/identity/identity_api.h"
#include "atom/browser/extensions/atom_extension_system_factory.h"

namespace extensions {
namespace atom {

void EnsureBrowserContextKeyedServiceFactoriesBuilt() {
  // IdentityAPI::GetFactoryInstance();

  // TODO(rockot): Remove this once UpdateService is supported across all
  // extensions embedders (and namely chrome.)
  UpdateServiceFactory::GetInstance();

  AtomExtensionSystemFactory::GetInstance();
}

}  // namespace atom
}  // namespace extensions

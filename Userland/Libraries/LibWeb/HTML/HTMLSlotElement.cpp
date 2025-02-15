/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/HTML/HTMLSlotElement.h>

namespace Web::HTML {

HTMLSlotElement::HTMLSlotElement(DOM::Document& document, DOM::QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
}

HTMLSlotElement::~HTMLSlotElement() = default;

JS::ThrowCompletionOr<void> HTMLSlotElement::initialize(JS::Realm& realm)
{
    MUST_OR_THROW_OOM(Base::initialize(realm));
    set_prototype(&Bindings::ensure_web_prototype<Bindings::HTMLSlotElementPrototype>(realm, "HTMLSlotElement"));

    return {};
}

}

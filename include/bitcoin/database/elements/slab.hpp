/////**
//// * Copyright (c) 2011-2019 libbitcoin developers (see AUTHORS)
//// *
//// * This file is part of libbitcoin.
//// *
//// * This program is free software: you can redistribute it and/or modify
//// * it under the terms of the GNU Affero General Public License as published by
//// * the Free Software Foundation, either version 3 of the License, or
//// * (at your option) any later version.
//// *
//// * This program is distributed in the hope that it will be useful,
//// * but WITHOUT ANY WARRANTY; without even the implied warranty of
//// * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//// * GNU Affero General Public License for more details.
//// *
//// * You should have received a copy of the GNU Affero General Public License
//// * along with this program.  If not, see <http://www.gnu.org/licenses/>.
//// */
////#ifndef LIBBITCOIN_DATABASE_ELEMENTS_SLAB_HPP
////#define LIBBITCOIN_DATABASE_ELEMENTS_SLAB_HPP
////
////#include <bitcoin/system.hpp>
////#include <bitcoin/database/define.hpp>
////#include <bitcoin/database/primitives/element.hpp>
////#include <bitcoin/database/primitives/manager.hpp>
////
////namespace libbitcoin {
////namespace database {
////
////template <typename Link,
////    if_link<Link> = true>
////class slab
////  : public element<slab_manager<Link>>
////{
////public:
////    using link = Link;
////    using manager = slab_manager<Link>;
////
////    slab(slab_manager<Link>& manager) NOEXCEPT;
////    slab(slab_manager<Link>& manager, Link link) NOEXCEPT;
////
////    Link create(Link next, auto& write, size_t limit) NOEXCEPT;
////    void read(auto& read, size_t limit) const NOEXCEPT;
////
////private:
////    using base = element<slab_manager<Link>>;
////};
////
////} // namespace database
////} // namespace libbitcoin
////
////#define TEMPLATE template <typename Link, if_link<Link> If>
////#define CLASS slab<Link, If>
////
////#include <bitcoin/database/impl/elements/slab.ipp>
////
////#undef CLASS
////#undef TEMPLATE
////
////#endif

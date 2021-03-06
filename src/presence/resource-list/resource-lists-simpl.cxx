// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

// Begin prologue.
//
//
// End prologue.

#include "resource-lists-simpl.hxx"

#include <xsde/cxx/serializer/validating/string-common.hxx>

namespace resource_lists
{
  // display_nameType_simpl
  //

  display_nameType_simpl::
  display_nameType_simpl ()
  : display_nameType_sskel (&base_impl_)
  {
  }

  void display_nameType_simpl::
  pre (const ::resource_lists::display_nameType& x)
  {
    this->base_impl_.pre (x);
    this->display_nameType_simpl_state_.display_nameType_ = &x;
  }

  bool display_nameType_simpl::
  lang_present ()
  {
    return this->display_nameType_simpl_state_.display_nameType_->lang_present ();
  }

  const ::namespace_::lang& display_nameType_simpl::
  lang ()
  {
    return this->display_nameType_simpl_state_.display_nameType_->lang ();
  }

  // display_name_simpl
  //

  display_name_simpl::
  display_name_simpl ()
  : display_name_sskel (&base_impl_)
  {
  }

  void display_name_simpl::
  pre (const ::resource_lists::display_name& x)
  {
    this->base_impl_.pre (x);
    this->display_name_simpl_state_.display_name_ = &x;
  }

  // entryType_simpl
  //

  void entryType_simpl::
  pre (const ::resource_lists::entryType& x)
  {
    this->entryType_simpl_state_.entryType_ = &x;
  }

  ::std::string entryType_simpl::
  uri ()
  {
    return this->entryType_simpl_state_.entryType_->uri ();
  }

  bool entryType_simpl::
  display_name_present ()
  {
    return this->entryType_simpl_state_.entryType_->display_name_present ();
  }

  const ::resource_lists::display_name& entryType_simpl::
  display_name ()
  {
    return this->entryType_simpl_state_.entryType_->display_name ();
  }

  // entry_refType_simpl
  //

  void entry_refType_simpl::
  pre (const ::resource_lists::entry_refType& x)
  {
    this->entry_refType_simpl_state_.entry_refType_ = &x;
  }

  ::std::string entry_refType_simpl::
  ref ()
  {
    return this->entry_refType_simpl_state_.entry_refType_->ref ();
  }

  bool entry_refType_simpl::
  display_name_present ()
  {
    return this->entry_refType_simpl_state_.entry_refType_->display_name_present ();
  }

  const ::resource_lists::display_nameType& entry_refType_simpl::
  display_name ()
  {
    return this->entry_refType_simpl_state_.entry_refType_->display_name ();
  }

  // externalType_simpl
  //

  void externalType_simpl::
  pre (const ::resource_lists::externalType& x)
  {
    this->externalType_simpl_state_.externalType_ = &x;
  }

  bool externalType_simpl::
  anchor_present ()
  {
    return this->externalType_simpl_state_.externalType_->anchor_present ();
  }

  ::std::string externalType_simpl::
  anchor ()
  {
    return this->externalType_simpl_state_.externalType_->anchor ();
  }

  bool externalType_simpl::
  display_name_present ()
  {
    return this->externalType_simpl_state_.externalType_->display_name_present ();
  }

  const ::resource_lists::display_nameType& externalType_simpl::
  display_name ()
  {
    return this->externalType_simpl_state_.externalType_->display_name ();
  }

  // listType_simpl
  //

  listType_simpl::
  listType_simpl ()
  : listType_simpl_state_ (sizeof (listType_simpl_state ), &listType_simpl_state_first_)
  {
  }

  void listType_simpl::
  pre (const ::resource_lists::listType& x)
  {
    this->listType_simpl_state_.push ();
    static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_ = &x;
    static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_end_ = 
    static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->sequence ().end ();
    static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_ = 
    static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_end_;
  }

  bool listType_simpl::
  name_present ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->name_present ();
  }

  ::std::string listType_simpl::
  name ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->name ();
  }

  bool listType_simpl::
  display_name_present ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->display_name_present ();
  }

  const ::resource_lists::display_nameType& listType_simpl::
  display_name ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->display_name ();
  }

  bool listType_simpl::
  sequence_next ()
  {
    if (static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_ != 
        static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_end_)
      static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_++;
    else
      static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_ = 
      static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->listType_->sequence ().begin ();

    if (static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_ != 
        static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_end_)
    {
      return true;
    }
    else
      return false;
  }

  listType_sskel::choice_arm_tag listType_simpl::
  choice_arm ()
  {
    choice_arm_tag t (static_cast< choice_arm_tag > (
                        static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_->choice_arm ()));
    return t;
  }

  const ::resource_lists::list& listType_simpl::
  list ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_->list ();
  }

  const ::resource_lists::externalType& listType_simpl::
  external ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_->external ();
  }

  const ::resource_lists::entryType& listType_simpl::
  entry ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_->entry ();
  }

  const ::resource_lists::entry_refType& listType_simpl::
  entry_ref ()
  {
    return static_cast< listType_simpl_state* > (this->listType_simpl_state_.top ())->sequence_->entry_ref ();
  }

  void listType_simpl::
  post ()
  {
    this->listType_simpl_state_.pop ();
  }

  void listType_simpl::
  _reset ()
  {
    listType_sskel::_reset ();
    for (; !this->listType_simpl_state_.empty (); this->listType_simpl_state_.pop ()) ;
  }

  // list_simpl
  //

  list_simpl::
  list_simpl ()
  : list_sskel (&base_impl_),
    list_simpl_state_ (sizeof (list_simpl_state ), &list_simpl_state_first_)
  {
  }

  void list_simpl::
  pre (const ::resource_lists::list& x)
  {
    this->base_impl_.pre (x);
    this->list_simpl_state_.push ();
    static_cast< list_simpl_state* > (this->list_simpl_state_.top ())->list_ = &x;
  }

  void list_simpl::
  post ()
  {
    this->list_simpl_state_.pop ();
    this->base_impl_.post ();
  }

  void list_simpl::
  _reset ()
  {
    list_sskel::_reset ();
    for (; !this->list_simpl_state_.empty (); this->list_simpl_state_.pop ()) ;
  }

  // resource_lists_simpl
  //

  void resource_lists_simpl::
  pre (const ::resource_lists::resource_lists& x)
  {
    this->resource_lists_simpl_state_.resource_lists_ = &x;
    this->resource_lists_simpl_state_.sequence_end_ = 
    this->resource_lists_simpl_state_.resource_lists_->sequence ().end ();
    this->resource_lists_simpl_state_.sequence_ = 
    this->resource_lists_simpl_state_.sequence_end_;
  }

  bool resource_lists_simpl::
  sequence_next ()
  {
    if (this->resource_lists_simpl_state_.sequence_ != 
        this->resource_lists_simpl_state_.sequence_end_)
      this->resource_lists_simpl_state_.sequence_++;
    else
      this->resource_lists_simpl_state_.sequence_ = 
      this->resource_lists_simpl_state_.resource_lists_->sequence ().begin ();

    if (this->resource_lists_simpl_state_.sequence_ != 
        this->resource_lists_simpl_state_.sequence_end_)
    {
      return true;
    }
    else
      return false;
  }

  const ::resource_lists::listType& resource_lists_simpl::
  list ()
  {
    return this->resource_lists_simpl_state_.sequence_->list ();
  }
}

namespace resource_lists
{
  // resource_lists_saggr
  //

  resource_lists_saggr::
  resource_lists_saggr ()
  {
    this->listType_s_.serializers (this->string_s_,
                                   this->display_nameType_s_,
                                   this->list_s_,
                                   this->externalType_s_,
                                   this->entryType_s_,
                                   this->entry_refType_s_);

    this->entryType_s_.serializers (this->uri_s_,
                                    this->display_name_s_);

    this->list_s_.serializers (this->string_s_,
                               this->display_nameType_s_,
                               this->list_s_,
                               this->externalType_s_,
                               this->entryType_s_,
                               this->entry_refType_s_);

    this->entry_refType_s_.serializers (this->uri_s_,
                                        this->display_nameType_s_);

    this->display_name_s_.serializers (this->lang_s_);

    this->externalType_s_.serializers (this->uri_s_,
                                       this->display_nameType_s_);

    this->resource_lists_s_.serializers (this->listType_s_);

    this->display_nameType_s_.serializers (this->lang_s_);
  }

  const char* resource_lists_saggr::
  root_name ()
  {
    return "resource-lists";
  }

  const char* resource_lists_saggr::
  root_namespace ()
  {
    return "urn:ietf:params:xml:ns:resource-lists";
  }
}

// Begin epilogue.
//
//
// End epilogue.


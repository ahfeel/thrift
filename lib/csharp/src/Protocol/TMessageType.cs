//
//  TMessageType.cs
//
//  Begin:  Aug 19, 2007
//  Authors:
//		Todd Berman <tberman@imeem.com>
//
//  Distributed under the Thrift Software License
//
//  See accompanying file LICENSE or visit the Thrift site at:
//  http://developers.facebook.com/thrift/using

using System;
using System.Collections.Generic;
using System.Text;

namespace Thrift.Protocol
{
	public enum TMessageType
	{
		Call = 1,
		Reply = 2,
		Exception = 3
	}
}

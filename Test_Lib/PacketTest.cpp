﻿#include "Lib/All.h"
#include "PacketTest.h"

namespace PacketTestPackets
{
    ushort Foo::getTypeID()
    {
        return 0;
    }
    void Foo::fill( FlatBuffer& fb
        , byte pByte
        , ushort pUshort
        , uint pUint
        , uint64 pUlong
        , sbyte pSbyte
        , short pShort
        , int pInt
        , int64 pLong
        , double pDouble
        , float pFloat
        , bool pBool )
    {
        fb.writes(
            pByte, 
            pUshort, 
            pUint, 
            pUlong, 
            pSbyte, 
            pShort, 
            pInt, 
            pLong, 
            pDouble, 
            pFloat, 
            pBool );
    }

    void Foo::writeBuffer( FlatBuffer& fb ) const
    {
        fb.writes(
            _byte, 
            _ushort, 
            _uint, 
            _ulong, 
            _sbyte, 
            _short, 
            _int, 
            _long, 
            _double, 
            _float, 
            _bool );
    }

    bool Foo::readBuffer( FlatBuffer& fb )
    {
        if( !fb.read( _byte ) ) return false;
        if( !fb.read( _ushort ) ) return false;
        if( !fb.read( _uint ) ) return false;
        if( !fb.read( _ulong ) ) return false;
        if( !fb.read( _sbyte ) ) return false;
        if( !fb.read( _short ) ) return false;
        if( !fb.read( _int ) ) return false;
        if( !fb.read( _long ) ) return false;
        if( !fb.read( _double ) ) return false;
        if( !fb.read( _float ) ) return false;
        if( !fb.read( _bool ) ) return false;
        return true;
    }


    ushort Foo2::getTypeID()
    {
        return 1;
    }
    void Foo2::fill( FlatBuffer& fb
        , short pShort
        , int pInt
        , ::PacketTestPackets::Foo pF
        , int64 pLong )
    {
        fb.writes(
            pShort, 
            pInt, 
            pF, 
            pLong );
    }

    void Foo2::writeBuffer( FlatBuffer& fb ) const
    {
        fb.writes(
            _short, 
            _int, 
            _f, 
            _long );
    }

    bool Foo2::readBuffer( FlatBuffer& fb )
    {
        if( !fb.read( _short ) ) return false;
        if( !fb.read( _int ) ) return false;
        if( !fb.read( _f ) ) return false;
        if( !fb.read( _long ) ) return false;
        return true;
    }


}

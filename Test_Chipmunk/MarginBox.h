#ifndef __MARGINBOXNODE_H__
#define __MARGINBOXNODE_H__

struct Margin
{
    float left, top, right, bottom;
};

struct MarginBox : public Box
{
    STATIC_CREATE( MarginBox );

    Margin margin;
    MarginBox();
    void Draw( int _durationTicks ) override;

};


#endif
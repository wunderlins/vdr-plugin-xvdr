/*
 *      vdr-plugin-xvdr - XVDR server plugin for VDR
 *
 *      Copyright (C) 2010 Alwin Esch (Team XBMC)
 *
 *      https://github.com/pipelka/vdr-plugin-xvdr
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#ifndef XVDR_DEMUXER_TELETEXT_H
#define XVDR_DEMUXER_TELETEXT_H

#include "demuxer.h"

// --- cParserTeletext -------------------------------------------------

class cParserTeletext : public cParser
{
private:
  bool        m_firstPUSIseen;
  bool        m_PESStart;
  uint8_t    *m_teletextBuffer;
  int         m_teletextBufferSize;
  int         m_teletextBufferPtr;
  int64_t     m_lastDTS;
  int64_t     m_lastPTS;

public:
  cParserTeletext(cTSDemuxer *demuxer);
  virtual ~cParserTeletext();

  virtual void Parse(unsigned char *data, int size, bool pusi);
};

#endif // XVDR_DEMUXER_TELETEXT_H

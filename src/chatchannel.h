/*
 *  The Mana World Server
 *  Copyright 2004 The Mana World Development Team
 *
 *  This file is part of The Mana World.
 *
 *  The Mana World is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  any later version.
 *
 *  The Mana World is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with The Mana World; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  $Id$
 */

#ifndef _TMWSERV_CHATCHANNEL_H_
#define _TMWSERV_CHATCHANNEL_H_

#include <vector>
#include <string>

#include "being.h"

class ChatChannel {

 public:

    /**
     * Constructors
     */
    ChatChannel(const std::string &channelName,
                const std::string &channelAnnouncement,
                const std::string &channelPassword);

    /**
     * Destructor
     */
    ~ChatChannel();

    /**
     * Get the name of the channel
     */
    const std::string& getName() const;

    /**
     * Get the Announcement string of the channel
     */
    const std::string& getAnnouncement() const;

    /**
     * Get the password of the channel
     */
    const std::string& getPassword() const;

    /**
     * Set the name of the channel
     */
    void setName(const std::string &channelName);

    /**
     * Set the Announcement string of the channel
     */
    void setAnnouncement(const std::string &channelAnnouncement);

    /**
     * Set the password of the channel
     */
    void setPassword(const std::string &channelPassword);

    /**
     * Get the list of the users registered in the channel
     */
    std::vector<tmwserv::BeingPtr> getUserList() const;

    /**
     * Add a user in the channel
     */
    bool addUserInChannel(tmwserv::BeingPtr beingPtr);

    /**
     * Remove a user from the channel.
     */
    bool removeUserFromChannel(tmwserv::BeingPtr beingPtr);

    /**
     * Empties a channel from its users (admin included).
     */
    void removeEveryUsersFromChannel();

 private:
    /**
     * The Channel's name
     */
    std::string mChannelName;

    /**
     * The Channel's name
     */
    std::string mChannelAnnouncement;

    /**
     * The Channel's name
     */
    std::string mChannelPassword;

    /**
     * The registered user list
     */
    std::vector<tmwserv::BeingPtr> mRegisteredUsers;

};

#endif
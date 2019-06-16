#if defined _goomba_stomp_included
    #endinput
#endif

#define _goomba_stomp_included

/**
 * Called on a successfull goomba stomp.
 *
 * @param attacker      Attacker client index
 * @param victim        Victim client index
 * @param damage        Amount of damage dealt
 * @param lethal        True if the goomba stomp killed the victim, false otherwise
 * @return              PLUGIN_HANDLED to prevent the goomba stomp,
 *                      PLUGIN_CONTINUE to do nothing
 */
forward goomba_stomp(attacker, victim, Float:damage, bool:lethal)

/**
 * Returns a key value set in the plugin's configuration file.
 *
 * @param key	 		Key to search for
 * @param value 	 	Buffer to store the value in
 * @param len 			Maximum buffer length
 * @return				True if the key was found, false otherwise
 */
native bool:get_goomba_setting(key[], value[], len)
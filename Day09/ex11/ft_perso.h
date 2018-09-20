/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:36:34 by yidabdes          #+#    #+#             */
/*   Updated: 2018/09/07 16:36:36 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PERSO__
#define _FT_PERSO__
#include <string.h>

typedef struct{

} job;

job SAVE_THE_WORLD;

typedef struct {
   float life;
 int age;
 char *name;
 job profession;
} t_perso;
#endif

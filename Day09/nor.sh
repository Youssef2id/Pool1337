# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    x.sh                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/05 17:08:43 by yidabdes          #+#    #+#              #
#    Updated: 2018/09/05 17:09:26 by yidabdes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "
**************************************************************************
|                             * Norminette *                             |
**************************************************************************
"

norminette -R CheckForbiddenSourceHeader $1
echo "
**************************************************************************
|                                   Result                               |
**************************************************************************
"

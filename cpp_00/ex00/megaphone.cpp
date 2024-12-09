#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = -1;
	if (argc < 2)
    {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 0;
    }
	while (argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
			std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return (0);
}

known_hosts
vogsphere.42lausanne.ch,10.51.1.5 ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBJkWoYf2Q+8kG3jhuceSud2QsrGBWOXhdTksFImgDWT7B/SlJzdriwhqbDWsSBOiR/Gh0XBseF64KIDs9c0R+wo=
github.com,140.82.121.4 ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBEmKSENjQEezOmxkZMy7opKgwFB9nkt5YRrYMjNuG5N87uRgg6CLrbo5wAdT/y6v0mKV0U2w0WZ2YB/++Tpockg=
140.82.121.3 ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBEmKSENjQEezOmxkZMy7opKgwFB9nkt5YRrYMjNuG5N87uRgg6CLrbo5wAdT/y6v0mKV0U2w0WZ2YB/++Tpockg=
[127.0.0.1]:4242 ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBN+aADKdyIKHLUN0c88Xl/TrwEuU3uvfsmTmN+2PyaKtAEy8P775nSzqLUKc5Ug3HPTN8kJbiHLV5ivN8Rvn27E=

ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQCYTPXd8F/1tm4Xua80eJ8oDu3sIPdKmAmYUE1ywpFVnEdbKl6djDjPm+tXHKY4kqu6im24k98WaUDodaWs3KTHL6ixEBxaJHUL59jQfOlodqShGFz1xVOJ3a/W0ZGGrgNFwqL7HWZvYdkURATGutMzAeDLT9KLATZHkxbRhHPMNx5g8NjhIWPoJ9EukK5bp2spf3bagwaaqPOw/G8CGpAIfpHWbgf1rpvEGNd3WZZDP540XVdNYbpBDdT6kikTPnwkyGLG14DLIAgawGP2h9SlvUnu6DmABOv7F4tOUNFdoIOhw8MuA7QtF+qEDhV5+W24qkTplr2mE+S6PVGjGgbDBVLtmlC343C2qEWREkKUOgbDMrzcHYdgvZbT0CrndN/6k9B6M1B7hMpwpBAJAVOWZii48Znlm6vJ6uCOdZmjWCBdk1u7AixhW6LJIaLHM1+cK5nOpci8PnYikYWUtNMZpx33LJturvlmupQUZBPBEpYTnhsWXqtv9j86ObgrxZ0= ichpakov@c1r11s7.42lausanne.ch
